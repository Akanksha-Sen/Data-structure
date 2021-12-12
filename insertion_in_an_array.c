#include<stdio.h>
int main(){
    int a[50],size,num,pos,i;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter the elements of array: ");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
     printf("enter the data you want to enter: ");
    scanf("%d",&num);
     printf("enter the position where you want to enter: ");
    scanf("%d",&pos);

    if(pos<=0 || pos>size+1)
    printf("invalid index");
    else{
        for(i=size-1;i>pos-1;i--)
        {
        a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;

        printf("the array after insertion is: ");
        for(i=0;i<size;i++)
        printf("%d ",a[i]);
        return 0;
    }

    
}