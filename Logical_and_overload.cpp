#include<iostream>

class Demo
{
	public:
		int x,y;
		
	Demo(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
		
	bool operator&&(const Demo& ref)
	{
		return this->x&&ref.x && this->y&&ref.y; 
	}
};

int main()
{
	Demo d1(10,20);
	Demo d2(30,40);
	//Demo d2(40,0);
	
	if(d1&&d2)  //d1.operator&&(d2)
	{
		std::cout<<"Result(d1&&d2):"<<"1";
	}
	else
	{
		std::cout<<"Result(d1&&d2):"<<"0";
	}
}