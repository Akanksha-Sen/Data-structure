#include<stdio.h>
int main()
{
    int a[100]={0};
    int ele,n=5,pos,i,index;

    printf("enter elements of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("enter element to be inserted: ");
     scanf("%d",&ele);
     printf("enter position: ");
     scanf("%d",&pos);

     index=pos-1;
     n++;

     for(i=n-1;i>=index;i--)
     {
         a[i+1]=a[i];
     }
     a[index]=ele;

printf("the updated array is: \n ");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
return 0;
}