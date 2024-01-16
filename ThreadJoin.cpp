#include <iostream>
#include <thread>

// first complete the first thread run
// then run sequentially
// so first print i and after completing then print test
void threadRun()
{
	std::thread my_thread([]() {
		for (int i = 0; i < 100; i++)
		{
			std::cout << i << std::endl;
		}
		});
	
	my_thread.join();

	for (int i = 0; i < 100; i++)
	{
		std::cout << "test" << std::endl;
	}
}

int main()
{
	threadRun();
	return 0;
}