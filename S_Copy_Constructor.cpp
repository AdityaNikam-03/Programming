#include<iostream>

class Demo
{
	public:
		int a;
		int b;
		int c; 
	
		Demo(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}	
};

int main()
{
	Demo  d1(2,3,4);
	
	Demo d2(d1);
	
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<d1.c<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<d2.c<<std::endl;
	
}