#include<stdio.h>
int main(){
    int a[50],i,pos,num,size;
    printf("enter the size of the array: ");
    scanf("%d",&size);

     printf("enter the elements of the array: ");
     for(i=0;i<size;i++)
    scanf("%d",&a[i]);

     printf("enter the index from where you want to delete: ");
    scanf("%d",&num);

    if(num<=0 || num>size+1)
    printf("invalid address");
    else
    {
        for(i=pos;i<size-1;i++)
        { 
            a[i]=a[i+1];
        } 
    size--;

    printf("array after deletion is: ");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    }
return 0;
}