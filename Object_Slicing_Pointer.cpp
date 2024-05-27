#include<iostream>

class Parent
{
public:
	int a,b;
	Parent(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
};

class Child:public Parent
{
public:
	int c,d;
	Child(int a,int b,int c,int d):Parent(a,b)
	{
		this->c=c;
		this->d=d;
	}
};

int main()
{
	Child c(10,20,30,40);
	Parent* ptr=NULL;
	ptr=&c;
	std::cout<<ptr->a<<std::endl;
	std::cout<<ptr->b<<std::endl;
	return 0;
}

