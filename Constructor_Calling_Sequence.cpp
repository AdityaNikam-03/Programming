#include<iostream>

class Demo
{
public:
	int a;
	int b;
	int *p=(int*)malloc(sizeof(int));

	Demo(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		*(this->p)=c;
	}
};

int main()
{
	Demo d1(10,20,30);
	Demo d2(d1);

	std::cout<<"Values of d1 Object:"<<std::endl;
	std::cout<<"a="<<d1.a<<std::endl;
	std::cout<<"b="<<d1.b<<std::endl;
	std::cout<<"c="<<*(d1.p)<<std::endl;
	std::cout<<"Values of d2 Object:"<<std::endl;
	std::cout<<"a="<<d2.a<<std::endl;
	std::cout<<"b="<<d2.b<<std::endl;
	std::cout<<"c="<<*(d2.p)<<std::endl;

	*(d1.p)=111;

	std::cout<<"Values After Change:"<<std::endl;
	std::cout<<*(d1.p)<<std::endl;
	std::cout<<*(d2.p)<<std::endl;


	*(d2.p)=222;

	std::cout<<"Values After Change:"<<std::endl;
	std::cout<<*(d1.p)<<std::endl;
	std::cout<<*(d2.p)<<std::endl;

}