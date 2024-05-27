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
		
		void Print()
		{
			std::cout<<"Values of Object Are:"<<std::endl;
			std::cout<<(this->a)<<std::endl;
			std::cout<<(this->b)<<std::endl;
			std::cout<<(this->c)<<std::endl;
		}
		
};

std::istream& operator>>(std::istream& is,Demo& ref)  //obj reference should not constant
{
	std::cout<<"Enter Values For Object"<<std::endl;
	std::cout<<"a:";
	is>>ref.a;
	std::cout<<"b:";
	is>>ref.b;
	std::cout<<"c:";
	is>>ref.c;
	return is;
}

int main()
{
	Demo d;
	
	std::cin>>d;	//std::cout.operator<<(d)
	d.Print();
	
	return 0;
}


//******Using Friend Function*********//
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
		
		void Print()
		{
			std::cout<<"Values of Object Are:"<<std::endl;
			std::cout<<(this->a)<<std::endl;
			std::cout<<(this->b)<<std::endl;
			std::cout<<(this->c)<<std::endl;
		}
		friend std::istream& operator>>(std::istream& is,Demo& ref);
};

std::istream& operator>>(std::istream& is,Demo& ref)  //obj reference should not constant
{
	std::cout<<"Enter Values For Object"<<std::endl;
	std::cout<<"a:";
	is>>ref.a;
	std::cout<<"b:";
	is>>ref.b;
	std::cout<<"c:";
	is>>ref.c;
	return is;
}

int main()
{
	Demo d;
	
	std::cin>>d;	//std::cout.operator<<(d)
	d.Print();
	
	return 0;
}*/



