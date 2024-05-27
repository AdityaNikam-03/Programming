#include<iostream>
#include<cstring>

class Person
{
private:
	char name[10];
	int age;
public:
	Person(const char* name,int age)
	{
		strcpy(this->name,name);
		this->age=age;
	}
	
	virtual void Display()                              //Same Prototype in Child class
	{
		std::cout<<"Name:"<<name<<std::endl;
		std::cout<<"Age:"<<age<<std::endl;
	}
};

class Employee:public Person
{
private:
	int id;
	double Sal;
public:
	Employee(const char* name,int age,int id,double Sal):Person(name,age)
	{
		this->id=id;
		this->Sal=Sal;
	}
	
	void Display()                           //Same Prototype in Parent class
	{
		Person::Display();                     //Parent class Function call
		std::cout<<"ID:"<<id<<std::endl;
		std::cout<<"Salary:"<<Sal<<std::endl;
	}
};

int main()
{
	/*Employee* ptr=NULL;
	Employee E1("Aditya",19,456,5000.745);
	
	ptr=&E1;                            //pointer and Pointed type same
	ptr->Display();                   //Function call To child class
	return 0;*/
	
	/*Person P1("Aditya",19);
	Person* ptr=NULL;
	
	ptr=&P1;                     //pointer and Pointed type same
	
	ptr->Display(); */        //Function Call to Parent Class
	
	Employee E1("Aditya",19,456,5000.745);
	Person* ptr=NULL;
	
	ptr=&E1;                //pointer and Pointed type are not same
	
	//ptr->Display();         //Early Binding , Function call Bind with Pointer type
						//That is Parent class Function
	ptr->Display();   //if Function is Virtual in Parent class then Child's function calls					 
	                  //if not virtual then Parent class Function get call
	return 0;
}