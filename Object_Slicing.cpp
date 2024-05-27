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
	
	void setname(const char* name)
	{
		strcpy(this->name,name);
	}
	
	char* getAdhar()
	{
		return name;
	}
	
	void setAge(int age)
	{
		this->age=age;
	}
	
	int getage()
	{
		return age;
	}
	
	void display()
	{
		std::cout<<"Adhar : "<<name<<std::endl;
		std::cout<<"Age : "<<age<<std::endl;
	}
	
};

class Employee:public Person
{
	private:
		int id;
		double sal;
		
	public:
	
	Employee(const char* name,int age,int id,double sal):Person(name,age)
	{
		this->id=id;
		this->sal=sal;
	}
	
	void display()
	{
		Person::display();
		std::cout<<"ID : "<<id<<std::endl;
		std::cout<<"Salary : "<<sal<<std::endl;
	}
};

int main()
{
	Person P("Akshay",19);
	
	Employee E("Aditya",20,545,679433.083);
	
	P=E;
	
	E.display();
	
	//E.display();
}