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

class Dindi
{
	private:
		int b;
	public:
		Parent P;
		void Fun()
		{
			Parent P;
		}
};

int main()
{
	Dindi D;
	D.Fun();
	std::cout<<sizeof(D);
}