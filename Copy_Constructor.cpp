#include<iostream>
#include<cstdlib>

/*class Demo
{
	public:
		int a;
		int b;
		int* p=(int*)malloc(sizeof(int));   //Memory allocated on Heap..and address is held
		
		Demo(int a,int b,int c)    //4 parameters...this pointer implicitely maintained to store address of Object
		{
			this->a=a;
			this->b=b;
			*(this->p)=c;        //value is stored in Heap Memory..address held by pointer p
		}
};

int main()
{
	Demo d1(1,2,3);  	//4 parameters passed....3 explicitely and one implicitely as Address of That Object
	Demo d2(d1);		//copy constructor copies data of one object to another object "Member By Member"
	
	std::cout<<"Object d1:"<<std::endl;
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<*(d1.p)<<std::endl;
	
	std::cout<<"Object d2:"<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<*(d2.p)<<std::endl;
	
	(*(d1.p))++;          //Shallow Copy
	
	std::cout<<"Object d1:"<<std::endl;
	std::cout<<d1.a<<std::endl<<d1.b<<std::endl<<*(d1.p)<<std::endl;  
																					//Affection of Shallow Copy
	std::cout<<"Object d2:"<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<*(d2.p)<<std::endl;
	
	
	return 0;
}*/



class Demo
{
	public:
		int a;
		int b;
		int* p=(int*)malloc(sizeof(int));  //Memory allocated Dynamically
											//Address Held By Ponter
		Demo(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			*(this->p)=c;                //Value of C is put on address Held By ptr
		}

		Demo(const Demo& ref) //Demo& ref--->Name of d2 object as ref,d2-->changes done,ref-->changes Restricted
		{
			this->a=ref.a;			//this->Contains Address of d2 so Indirect Accessing Op,,ref->object name so . operator
			this->b=ref.b;
			this->p=(int*)malloc(sizeof(int));   //Separate Memory For Each Object so Shallow Copy Avoided
			*(this->p)=*(ref.p);			   //This Is Called Deep Copy
		}
		
};

int main()
{
	Demo d(1,2,3);
	
	Demo d2(d);
	
	std::cout<<"Before Change:"<<std::endl;
	std::cout<<"First Object:"<<std::endl;
	std::cout<<d.a<<std::endl<<d.b<<std::endl<<*(d.p)<<std::endl;
	std::cout<<"Second Object:"<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<*(d2.p)<<std::endl;
	
	(*(d.p))++;
	
	*(d2.p)=(*(d2.p))+3;
	
	std::cout<<"After Change:"<<std::endl;
	std::cout<<"First Object:"<<std::endl;
	std::cout<<d.a<<std::endl<<d.b<<std::endl<<*(d.p)<<std::endl;
	std::cout<<"Second Object:"<<std::endl;
	std::cout<<d2.a<<std::endl<<d2.b<<std::endl<<*(d2.p)<<std::endl;
	
}