#include<stdio.h>
int main()
{
    int a[10],n,i,index,result;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    index=0;
    for(i=0;i<n;i++)
    {
      if(a[i]>a[index])
      index=i;
    }

 result=-1;
for(i=0;i<n;i++)
{
    if(a[i]!=a[index])
    {
        if(result==-1)
        result=i;
    }
    else if(a[i]>a[result])
    result=i;
}
printf("2nd largest element is at: %d",result);
return 0;
}