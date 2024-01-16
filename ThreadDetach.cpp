#include <iostream>
#include <thread>
using namespace std;

//struct func
//{
//	//func() {};
//	void operator() ()
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			std::cout << i << std::endl;
//		}
//	}
//};

//concurrently print both i and test

void concurrentThreadRunning()
{
	std::thread my_thread([]() {
		for (int i = 0; i < 100; i++)
		{
			std::cout << i << std::endl;
		}
		});
	my_thread.detach();

	for (int i = 0; i < 100; i++)
	{
		std::cout << "Test" << std::endl;
	}
}

int main()
{
	concurrentThreadRunning();
	//sleep for running both thread
	//otherwise main thread will be exit
	//main thread need to running
	std::this_thread::sleep_for(std::chrono::seconds(1));	
}