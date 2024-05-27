#include<iostream>

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
		
		Demo* operator+(const Demo& ref)  //this=Address of d1 and ref is the 
		{
			Demo* temp=(Demo*)malloc(sizeof(temp)); //pointer is Created Because 
													//After Call return to main stack frame destroy
			temp->a=this->a+ref.a;					//and Mermory Should be Valid For Future use
			temp->b=this->b+ref.b;					//object/variable get destroyed after function call return
			temp->c=this->c+ref.c;
			return temp;
		}
		
};

int main()
{
	Demo d1(3,5,6);
	
	Demo d2(5,6,7);
	
	Demo* d3=d1+d2;    //d1+d2=d1.operator+(d2)...Function Call Implicitely 
	
	std::cout<<d3->a<<std::endl;
	std::cout<<d3->b<<std::endl;
	std::cout<<d3->c<<std::endl;
	return 0;
}

