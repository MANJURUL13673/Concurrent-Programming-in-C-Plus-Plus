#include <iostream>

struct foo
{
	//implicit call
	/*foo(double a) {
		std::cout << a << std::endl;
	}*/

	explicit foo(double a) {
		std::cout << a << std::endl;
	}
	
};

void fun(foo m) {};

int main()
{
	//foo m1(2);	//implicit call type conversion -> valid
	//foo m2 = 3; //implicit call type conversion -> valid
	//foo m3(4);	//explicit call type conversion -> valid -> as function pass with type casting
	//foo m4 = 7;	//explicit call -> invalid -> as no type casting 
	//fun(8);	//explicit call -> invalid -> as function paramter pass is like = sign no type casting
	fun(foo(8));	//explicit call -> valid -> as type casting has happening
	return 0;
}