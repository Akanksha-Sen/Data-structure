#include<stdio.h>
int main()
{
    int a[10],n,index,i;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

 index=0;
for(i=1;i<n;i++)
{
    if(a[i]>a[index])
    index=i;

}
    
    
    
    printf("index of largest element is: %d",index);
    return 0;
}