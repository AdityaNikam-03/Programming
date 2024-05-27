#include<iostream>

class Parent
{
public:

	virtual void fun()
	{
		std::cout<<"Parent Fun."<<std::endl;
	}
	
	virtual void gun()
	{
		std::cout<<"Parent Gun."<<std::endl;
	}
};


class Child:public Parent
{
public:
	
	void fun()
	{
		std::cout<<"Child Fun."<<std::endl;
	}
	
	void gun()
	{
		std::cout<<"Child Gun"<<std::endl;
	}
};

int main()
{
	Child cobj;
	
	int* ptr=NULL;
	ptr=reinterpret_cast<int*>(&cobj);
	int* q=reinterpret_cast<int*>(*ptr);
	
	void(*a)();
	a=(void(*)())*q;
	
	a();
	
	void(*b)();
	
	b=(void(*)())*(q+1);
	b();
}
