#include<iostream>

class Demo
{
	private:
	
		int x,y;
		
		int Add(int a,int b)
		{
			return a+b;
		}
		
	public:
	
		int fun(int a,int b)
		{
			int c=Add(a,b);
			return c;
		}
};

int main()
{
	Demo d;
	std::cout<<d.fun(20,30);
}