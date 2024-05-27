#include<iostream>

/*class Demo
{
	public:
		int a,b,c;
		
	Demo()
	{
		
		
	}
	
	Demo(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
	
	int operator==(const Demo& ref)
	{
		if(this->a==ref.a && this->b==ref.b && this->c==ref.c)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
};


int main()
{
	Demo d1(10,20,30);
	//Demo d1(10,20,56);
	Demo d2(10,20,30);
	
	if(d1==d2)
	{
		std::cout<<"d1 and d2 are Equal."<<std::endl;
	}
	else
	{
		std::cout<<"d1 and d2 are not equal."<<std::endl;
	}
}*/

class Demo
{
	public:
		int a,b,c;
		
	Demo()
	{
		
		
	}
	
	Demo(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
	
	int operator==(const Demo& ref)
	{
		if(this->a==ref.a && this->b==ref.b && this->c==ref.c)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
	
	int operator<(const Demo& ref)
	{
		if(this->a<ref.a && this->b<ref.b && this->c<ref.c)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
	
	int operator>(const Demo& ref)
	{
		if(this->a > ref.a && this->b > ref.b && this->c > ref.c)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
	
	
};


int main()
{
	Demo d1(50,60,70);
	//Demo d1(10,20,56);
	Demo d2(10,20,30);
	
	if(d1>d2)
	{
		std::cout<<"d1 is Less than d2";
	}
	else
	{
		std::cout<<"Either one element of d1 is Greater of d2 or two or three";
	}
	
}