#include<iostream>

class Demo
{
	private:
		int age;
		int ID;

	public:
	void setAge(int a)
	{
		if(a>0)
		{
			age=a;
		}
	}
	
	void setID(int b)
	{
		ID=b;
	}
	
	int getAge()
	{
		return age;
	}
	
	int getID()
	{
		return ID;
	}
	
};

int main()
{
	Demo d;
	d.setAge(10);
	d.setID(121);
	//int x=d.getAge();
	//int y=d.getID();
	
	std::cout<<d.getAge()<<std::endl<<d.getID();
}