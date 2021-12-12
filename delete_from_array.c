#include<stdio.h>
int main()
{
    int a[100]={0};
    int ele,i,j,n=5;
    printf("enter array elements: ");
for(i=0;i<n-1;i++)
scanf("%d",&a[i]);
printf("enter element to be deleted: ");
scanf("%d",&ele);

for(i=0;i<n-1;i++)
{
    if(a[i]==ele)
    {
    for(j=i;j<n-1;j++)
    a[j+1]=a[j];
    }
}
n--;
printf("updated array is: \n");
for(i=0;i<n-1;i++)
printf(a[i]);
return 0;

}