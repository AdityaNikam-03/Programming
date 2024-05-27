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
};

std::ostream& operator<<(std::ostream& os,const Demo& ref)
{
	os<<ref.a<<std::endl;
	os<<ref.b<<std::endl;
	os<<ref.c<<std::endl;
	return os;
}

int main()
{
	Demo d(1,2,3);
	
	std::cout<<d;  //std::cout.operator<<(d)
	
	return 0;
}


//******Using Friend Function******//
/*class Demo
{
	private:
		int a,b,c;
	public:
		Demo()
		{
			
		}
			
		Demo(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		friend std::ostream& operator<<(std::ostream& os,const Demo& ref);
};

std::ostream& operator<<(std::ostream& os,const Demo& ref)
{
	os<<ref.a<<std::endl;
	os<<ref.b<<std::endl;
	os<<ref.c<<std::endl;
	return os;
}

int main()
{
	Demo d(1,2,3);
	
	std::cout<<d;  //std::cout.operator<<(d)
	
	return 0;
}*/