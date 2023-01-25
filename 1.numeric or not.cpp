// 1. check given character is numeric or not
#include<iostream>
using namespace std;
main()
{
	char a;
	
	cout<<"enter value:";

	cin>>a;

	if(a>='0'&&a<='9')
	{
		cout<<"a is numeric";
	}
	else
{
	cout<<"a is not numeric";
}
}
