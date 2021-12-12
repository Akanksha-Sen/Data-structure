#include<stdio.h>
int main()
{
    int a[10],i,res,j,k,n;
printf("enter size of array: ");
scanf("%d",&n);
printf("enter elements of array: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

res=1;
for(j=1;i<n;j++)
{
if(a[j]!=a[res-1]);
a[res]=a[j];
res++;
return res;
}

printf("size of new array is: %d",res);
while(k<n){
    printf("%d",a[k]);
}
return 0;
}