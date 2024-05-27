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
	Parent& ref=c;
	
	std::cout<<ref.a<<std::endl<<ref.b;
	//std::cout<<ref.c<<std::endl<<ref.d;  //this line gives error because parent reference 
	return 0;                              //can access only Parent part of Child object
}

