#include<iostream>

class Demo
{
	public:
		int a;
		int b;
		int* p=(int*)malloc(sizeof(int));  
		
		Demo()
		{
			
		}
		
		Demo(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			*(this->p)=c;                
		}

		Demo(const Demo& ref) 
		{
			this->a=ref.a;			
			this->b=ref.b;
			this->p=(int*)malloc(sizeof(int));   
			*(this->p)=*(ref.p);			   
		}
		
		void operator = const Demo& ref
		{
			this->a=ref.a;			
			this->b=ref.b;
			this->p=(int*)malloc(sizeof(int));   
			*(this->p)=*(ref.p);
		}
		
};

int main()
{
	Demo d1(1,2,3);
	
	Demo d2;
	
	d2=d1;
	
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<*(d1.p)<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<*(d2.p)<<std::endl;
	
	
}