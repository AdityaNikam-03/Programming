#include<iostream>


//Namespaces with Same Variables
/*namespace Demo
{
	int a=10;
}

namespace Test
{
	int a=20;
}

//using namespace Demo;
//using namespace Test;

int main()
{
	std::cout<<a;
	return 0;
}*/



//Give Access Only to Specific Variables
/*namespace Demo
{
	int a=20;
	int b=40;
}

using Demo::b;   //b can be Access directly with name "b"
				 //Syntax: using <Namespace_Name::var_Name>
int main()
{
	std::cout<<b<<std::endl;
	//std::cout<<a;           //CE error
	std::cout<<Demo::a;
	return 0;
}*/

//Namespace Scope
/*namespace Test
{
	int a=10;
	int b=20;
}

void fun()
{
	using namespace Test;
	std::cout<<a<<std::endl<<b;
}

int main()
{
	//using namespace Test;   //if not Uncommented below line CE error
	fun();
	
	//std::cout<<a<<std::endl<<b;  //if Above line Uncommented no error
	                               //otherwise error
	return 0;
}*/

//Function Inside Namespace ,Declare Inside & define Outside 
/*namespace Demo
{
	void fun();
}

void Demo::fun()    //Syntax:  <return_type> <Namespace_Name::Fun_Name()>{}
{
	int a=10;
	int b=20;
	std::cout<<a+b;
}

int main()
{
	Demo::fun();
	return 0;
}*/


//Class Inside Namespace
/*namespace Demo
{
	void fun();
	class Test
	{
	public:
		int a;
		int b;
	Test()
	{
		a=40;
		b=40;
	}
	
	void fun()
	{
		std::cout<<a+b<<std::endl;
	}
	};
}

void Demo::fun()
{
	std::cout<<"It's not Class Function"<<std::endl;
}

int main()
{
	Demo::fun();             //Function call to Function OutSide Class
	Demo::Test tobj;         //object of Class inside namespace is Created
	tobj.fun();              //function call to Function inside class
	return 0;
}*/


//Defining Function of Class inside namespace,outside the Namespace
/*namespace Demo
{
	void fun();
	class Test
	{
	public:
		int a;
		int b;
		void fun(int,int);        //function Declaration inside class
		Test()
		{
			a=40;
			b=40;
		}
	};
}

void Demo::fun()
{
	std::cout<<"It's not Class Function"<<std::endl;
}

void Demo::Test::fun(int a,int b)      //function definition
{
	std::cout<<a+b<<std::endl;
}

int main()
{
	Demo::fun();
	
	Demo::Test tobj;        //object Creation
	tobj.fun(40,40);        //function call
	return 0;
}*/


//Nested Namespace
/*namespace Demo
{
	int a=234;
	namespace Test
	{
		int b=456;
	}
}

int main()
{
	std::cout<<Demo::a<<std::endl;
	std::cout<<Demo::Test::b<<std::endl;
	return 0;
}*/

//Changing Name of Nested Namespace 
namespace A
{
	int z=235;
	namespace B
	{
		int y=450;
		namespace C
		{
			int x=190;
		}
	}
}

namespace Name=A::B::C;
namespace Name1=A::B;
namespace Name2=A;

int main()
{
	std::cout<<Name::x<<std::endl;
	std::cout<<Name1::y<<std::endl;
	std::cout<<Name2::z<<std::endl;
	return 0;
}

