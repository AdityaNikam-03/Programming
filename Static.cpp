#include<iostream>

/*class Demo
{
	public:
		int a=3;
		int c=5;
		static int b;
};

int Demo::b=10;

int main()
{
	Demo d;
	
	std::cout<<d.a<<std::endl<<d.b<<std::endl;
	std::cout<<d.c<<std::endl<<d.b<<std::endl;
	
	(d.a)++;
	(d.b)++;
	
	std::cout<<d.a<<std::endl<<d.b<<std::endl;
	std::cout<<d.c<<std::endl<<d.b<<std::endl;
}*/

class Demo
{
	public:
		int a;
		static int b;
		
		static void print()
		{
			std::cout<<b<<std::endl;
		}
};

int Demo::b=10;

int main()
{
	Demo d;
	d.print();
}