#include<stdio.h>
#include<stdlib.h>
struct array{
    int *A;
    int size;
    int length;
};

void display(struct array arr){
    int i;
    printf("the elements are: \n");
    for(i=0;i<arr.length;i++)
    printf("%d",arr.A[i]);
}

int main(){
    struct array arr;
    int n,i;
    printf("enter the size of the array: ");
    scanf("%d",&arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("enter number of elements in the array: ");
    scanf("%d",&n);
printf("enter all the elements: ");
for(i=0;i<n;i++)
scanf("%d",&arr.A[i]);
arr.length=n;
display(arr);
return 0;
}