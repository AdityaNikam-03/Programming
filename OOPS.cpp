#include<iostream>

class Demo
{
	public:
	int a;
	int b;
	int c;
	
	void display()
	{
		std::cout<<a<<std::endl<<b<<std::endl<<c<<std::endl;
	}
};

int main()
{
	Demo d;
	d.a=10;
	d.b=20;
	d.c=30;
	d.display();
}