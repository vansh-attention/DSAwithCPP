//
//  test1.cpp
//  test.cpp
//
//  Created by Vansh Khosla on 24/04/25.
//

#include <iostream>

struct Entity
{
	int x,y;
	void Print()
	{
		std::cout << x << " , " << y << std::endl;
	}
};
int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;
	Entity e1 = {5,8};
}



