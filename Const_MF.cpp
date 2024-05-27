#include<iostream>

class Demo
{
	public:
		int a;
		int b;
	
		Demo()
		{
			a=10;
			b=20;
		}
		
		void Fun() const
		{
			a=30;
			b=40;
		}
		
		void Print() const
		{
			std::cout<<a<<std::endl<<b<<std::endl;
		}
		
};

int main()
{
	const Demo d;
	d.Fun();
}

/*class Demo
{
	public:
 	int a;
	const int b;
	
	Demo():b(20)
	{
		a=10;
		//b=20;
	}
	
	void fun() const
	{
		std::cout<<b<<std::endl;
		a++;
		std::cout<<a;
	}
};

int main()
{
	Demo d;
	d.fun();
}*/


//if we wish to do not change value of specific data member for particular object then we need to make that data member constant instead of Object

//if all values of particular object have to do not change then instead of making const data member we need to make object as a const object

//by using constant object, calling to non-constant member function then first parameter is the address of object.....as for const object values do not have to alter.....but "this" pointer inside function will change the values because it is behaviour of pointer that wheather variablw is conat or not it is change by pointer.....so we need to say the pointer that do not change the value ....and it is done by making pointer as pointer to constant.
//Therefore by making member function as const....means we are making the "this " pointer as pointer to constant.