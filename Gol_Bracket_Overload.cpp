#include<iostream>

/*class Demo
{
	public:
		int a,b,c;
		
	Demo(int a)
	{
		
	}
	
	Demo& operator()(int x)
	{
		std::cout<<"Hello World....!"<<std::endl;
	}
	
	Demo& operator()(int a,int b)
	{
		std::cout<<a+b<<std::endl;
		return *this;
	}
	
	Demo& operator()(int a,int b,int c)
	{
		std::cout<<a+b+c;
		return *this;
	}
};

int main()
{
	Demo d;
	
	d(10,20)(1)(10,20,30);   //d.operator()(10,20)
}*/

class Demo
{
	public:
		int a,b,c;
		
	Demo()
	{
		
	}
	
	void fun(int a,int b)
	{
		std::cout<<"Function fun() is Executed..!"<<std::endl;
		std::cout<<a+b<<std::endl;
	}
	
	void gun(int a,int b,int c)
	{
		std::cout<<"Function gun() is Executed..!"<<std::endl;
		std::cout<<a+b+c<<std::endl;
	}
	
	Demo& operator()(int a,int b)
	{
		this->fun(a,b);
		return *this;
	}
		
	Demo& operator()(int a,int b,int c)
	{
		this->gun(a,b,c);
		this->fun(a,b);
		return *this;
	}
	
};

int main()
{
	Demo d;
	
	d(6,89,7)(10,20);   //d.operator()(10,20)
}