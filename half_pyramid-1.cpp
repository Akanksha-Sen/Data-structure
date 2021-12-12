#include<iostream>
using namespace std;

void halfPyramid(int n) //n gives the number of rows in pyramid
{

    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++)
    {
       cout<<"*";
    
    }
       cout<<endl;
    }
}

int main()
{
	halfPyramid(5);
	return 0;
}
