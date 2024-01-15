#include <iostream>
#include <thread>

void hello()
{
	std::cout << "Hello concurrent programming" << std::endl;
}

int main()
{
	//function call inside different thread
	std::thread t(hello);
	t.join();
}