#include<iostream>

class Parent
{
	private:
		int x;
	protected:
		int y;
	public:
		int z; 
};

class Child:Parent
{
	private:
		int a;
};

int main()
{
	Child c;
	std::cout<<sizeof(c);
}

