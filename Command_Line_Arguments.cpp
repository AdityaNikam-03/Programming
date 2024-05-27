#include<iostream>

int main(int argc,char** argv)
{
	/*std::cout<<"Number of Arguments : ";
	std::cout<<argc<<std::endl;
	
	std::cout<<"Arguments Are : "<<std::endl;
	for(int i=0;i<argc;i++)
	{
		std::cout<<argv[i]<<"\t";
	}*/
	int* a=(int*)argv[1];
	int* b=(int*)argv[2];
	
	int c=static_cast<int>((*a)+(*b));
	std::cout<<c;
	
	return 0;
}