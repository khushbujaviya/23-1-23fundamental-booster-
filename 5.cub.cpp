//5.generate a cube of given 5 numbers and make an array of those cubes.

#include<iostream>
using namespace std;
main()
{

int i;
int a[5];
int cub[5];



		for(i=0;i<=4;i++)
{
	cout<<"enter value";
	cin>>a[i];
		cub[i]=a[i]*a[i]*a[i];
}
for(i=0;i<=4;i++)
{
	
	cout<<cub[i]<<endl;
}
}



 

