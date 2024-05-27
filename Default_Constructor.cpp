#include<iostream>

/*class Demo
{
	public:
		int a;
		int b;
};						//**Synthesized Default Constructor**

int main()				//Whenever object of Class is Created The Constuctor is Invoked.If no any constructor is written in class
{						//then Compiler will put "Synthesized Default Constructor(SDC)" implicitely in the class at Compile time.
	Demo d;				//Added SDC has Empty Body
}*/



//**********Default Constructor*********
class Demo
{
	public:
		int x;
		int y;
		
		Demo()
		{
			std::cout<<"Hello";
		}
		
		Demo(int x,int y)   //Recommendation is that Formal parameter's name is same as Data Members
		{
			this->x=x;
			this->y=y;
		}
		
		void Print()
		{
			std::cout<<x<<std::endl<<y<<std::endl;
		}
};

int main()
{
	Demo d(34,45);	  //Parameters are pass to the Suitable Constructor
	
	d.Print();
	
	Demo d1;   // error: no matching function for call to
			   //Here We have didn't pass Any Paramter to Object
			   //But Compiler didn't found Constructor associated With it..but as we have said that if there is no any paramter with object
			   //then compiler will add "Synthesized Default Constructor(SDC)",but it is not Done by Compiler and error is thrown.
			   //Error Arise Because We have Already Taken a Parameterized Constructor Explicitely.In this case Compiler will not going to
			   //add "Synthesized Default Constructor"  implicitely.We need to Add it Explicitely
			   //"If parameterised Constuctor is Added Explicitely then there should be need to Add Default Constructor Explicitely"
			   //"If no any Parameterized constructor then Compiler will add SDC if no any Constructor Found"
			   
			   //Parameterless Constructor Added By Compiler implicitely is Called"Synthesized Default Constructor"
			   //Parameterless Constructor Added Explicitely is Called"Default Constructor"
			   
			   //All possible constructors writing is better because no errors encounters
}


