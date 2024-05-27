#include<iostream>
#include<cstring>

class Employee
{
	private:
		int id;
		char name[10];
		double salary;
		
	public:
	
		Employee(int id,const char* name,double salary)
		{
			this->id;
			strcpy(this->name,name);
			this->salary=salary;
		}
		
		void setid(int id)
		{
			this->id=id;
		}
		int getid()
		{
			return this->id;
		}
		
		void setname(const char* name)
		{
			strcpy(this->name,name);
		}
		char* getname()
		{
			return this->name;
		}
		
		void setsalary(double salary)
		{
			this->salary=salary;
		}
		double getsalary()
		{
			return this->salary;
		}
		
		void display()
		{
			std::cout<<"ID : "<<id<<std::endl;
			std::cout<<"Name : "<<name<<std::endl;
			std::cout<<"Salary : "<<salary<<std::endl;
		}		
};

class Manager:public Employee
{
	private:
		int bonus;
	public:
		
		Manager(int id,const char* name,double salary,int bonus):Employee(id,name,salary)
		{
			this->bonus=bonus;
		}
		
		void setbonus(int bonus)
		{
			this->bonus=bonus;
		}
		
		int getbonus()
		{
			return this->bonus;
		}
		
		void display()
		{
			Employee::display();
			std::cout<<"Bonus : "<<bonus<<std::endl;
		}
};

class SalesMan:public Employee
{
	private:
		int incentive;
	public:
		
		SalesMan(int id,const char* name,double salary,int incentive):Employee(id,name,salary)
		{
			this->incentive=incentive;
		}
		
		void setincentive(int incentive)
		{
			this->incentive=incentive;
		}
		
		int getincentive()
		{
			return this->incentive;
		}
		
		void display()
		{
			Employee::display();
			std::cout<<"Incentive : "<<incentive<<std::endl;
		}
};

int main()
{
	Employee* ptr[5];
	ptr[0]=(Employee*)malloc(sizeof(Manager));
	ptr[1]=(Employee*)malloc(sizeof(Employee));
	ptr[2]=(Employee*)malloc(sizeof(SalesMan));
	ptr[3]=(Employee*)malloc(sizeof(Employee));
	ptr[4]=(Employee*)malloc(sizeof(Manager));
	
	std::cout<<ptr[0]->bonus;
	
	return 0;
}
