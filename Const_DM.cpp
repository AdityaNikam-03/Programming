#include<iostream>

/*int main()
{
	const int a=10;
	int* p=const_cast<int*>(&a);
	
	std::cout<<a<<std::endl<<(*p)<<std::endl;
	
	(*p)++;
	
	std::cout<<a<<std::endl<<(*p)<<std::endl;
	
	if((*p)==a)
	{
		std::cout<<"True";
	}
	else
	{
		std::cout<<"False";
	}
	
	return 0;
}*/

class Demo
{
	public:
	int a=20;
	const int b;
	//const int b=10;
	
	Demo():b(10)  //Constructor Initializer List
	{
		std::cout<<a<<std::endl;
		std::cout<<b<<std::endl;
	}
};

int main()
{
	Demo d;
}