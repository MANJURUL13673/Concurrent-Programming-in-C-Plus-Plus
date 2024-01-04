#include <iostream>
#include <thread>

class background_task
{
public:
	//last () for parameters
	void operator() () const
	{
		std::cout << "hello world" << std::endl;
	}
};

int main()
{
	/* [Valid
	background_task f;
	std::thread my_thread(f);
	my_thread.join();
	] */

	/*[Not valid for single first bracket
	std::thread my_thread(background_task());
	my_thread.join();
	*/

	/* [Valid -> 2 first brackets
	std::thread my_thread((background_task()));
	my_thread.join();
	]*/

	/* [Valid -> 2 valid with one first bracket
	std::thread my_thread{ background_task() };
	my_thread.join();
	]*/

	return 0;
}