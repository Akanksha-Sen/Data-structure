#include<stdio.h>
int main()
{
    int a[10],n,i,j,true;
    printf("enter size of array: ");
    scanf("%d",&n);

    printf("enter elements of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(j=0;j<n;j++)
    {        
  if(a[j+1]>a[j])
    printf("true");
  else
    printf("false");
    }
    return 0;
}