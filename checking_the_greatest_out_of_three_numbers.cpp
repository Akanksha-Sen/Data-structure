#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,max;
	cout<<"enter the three numbers: ";
	cin>>n1>>n2>>n3;
	max=n1;
	if(n2>max && n2>n3)
	{
		cout<<"n2 is the greatest";
	}
	else if(n3>max && n3>n2)
	{
		cout<<"n3 is greatest";
	}
	else
	{
		cout<<"n1 is greatest!";
	}
	return 0;
}
