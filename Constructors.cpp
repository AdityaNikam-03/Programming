#include<iostream>
#include<cstdlib>
using namespace std;

class Test
{
public:
	int *ptr=(int*)malloc(sizeof(int));
	
	Test(int x)
	{
		*(this->ptr)=x;
	}
	
};

int main()
{
	Test t1(10);
	Test t2(t1);

	*(t2.ptr)=30;
	
	cout<<*(t1.ptr);
	return 0;
}