#include<iostream>

class A
{
public:
	int a;
	A()
	{
		a=20;
	}
};

class B
{
public:
	int b;
	B()
	{
		b=30;		
	}
};

class C
{
public:
	int c;
	C()
	{
		c=40;	
	}
};

class D:public A,public B,public C
{
public:
	int d;
	D()
	{
		d=56;
	}
};

int main()
{
	D* ptr=NULL;
	
	A obj;
	
	ptr=static_cast<D*>(&obj);   //Address of Parent Object Stored in
	std::cout<<ptr->a<<std::endl; //child class Pointer
	return 0;
}