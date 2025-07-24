#include <iostream>
struct Entity
{
	static int x,y;
	static void Print()
	{
		std::cout << x << "," << y << std::endl;
	}
};
// using variable scope
int Entity :: x;
int Entity :: y;

int main()
{
	Entity :: x = 2;
	Entity :: y = 3;

	Entity :: x = 5;
	Entity :: y = 8;

    Entity :: Print();
	Entity :: Print();
}

// THE OUTPUT WILL BE 5,8; 5,8 (two times)

