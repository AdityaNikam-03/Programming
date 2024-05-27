#include<iostream>

/*class Demo
{
	public:
		int size,*ptr;
		
	Demo(int size)
	{
		this->size=size;
		this->ptr=(int*)malloc(size*sizeof(int));
	}
	
	int& operator[](int index)
	{
		if(index>= 0 && index < this->size)
		{
			return this->ptr[index];
		}
		else
		{
			std::cout<<"Invalid Index";
		}
	}
};

int main()
{
	int size;
	int i;
	std::cout<<"Enter Array Size:";
	std::cin>>size;
	Demo d(size);
	
	for(i=0;i<size;i++)
	{
		d[i]=i+1;				//d.operator[](i)
	}
	for(i=0;i<size;i++)
	{
		std::cout<<d[i]<<std::endl;
	}
}*/


class Demo
{
	public:
		int a,b,c;
		
	Demo(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
	Demo(int n)
	{
		
	}
};


int main()
{
	int n;
	std::cout<<"Enter How Many objects you want:";
	std::cin>>n;
	
	Demo d[n];
	
	for(int i=0;i<n;i++)
	{
		std::cout<<"Enter Values for "<<i<<"th object:"<<std::endl;
		std::cout<<"a:";
		std::cin>>d[i].a;
		std::cout<<"b:";
		std::cin>>d[i].b;
		std::cout<<"c:";
		std::cin>>d[i].c;
	}
}