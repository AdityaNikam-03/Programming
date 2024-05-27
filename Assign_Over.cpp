/*#include<iostream>

class Demo
{
	public:
		int a;
		int b;
		int c;
		
		
	Demo()
	{
		
	}
	
	Demo(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
};

int main()
{
	Demo d1(1,2,3);
	
	Demo d2;
	
	d2=d1;

	return 0;
}*/

#include<iostream>
#include<stdlib.h>

class Demo
{
    public:
        int a,b,c;

    Demo()
    {}

    Demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }

    Demo& operator+(const Demo& ref)
    {
		Demo d3;

        d3.a=this->a+ref.a;
        d3.b=this->b+ref.b;
        d3.c=this->c+ref.c;

        return d3;
    }
};

int main()
{
    Demo d1(1,2,3);
	Demo d2(1,2,3);
	
	Demo d3=d1+d2;
	std::cout<<d3.a<<std::endl<<d3.b<<std::endl<<d3.c<<std::endl;
	return 0;
}