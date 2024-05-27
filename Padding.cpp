#include<iostream>

class Demo
{
	public:
		int x;
		int y;
		int z;
		char a;
		int b;
};

int main()
{
	Demo d;
	std::cout<<sizeof(d);
}