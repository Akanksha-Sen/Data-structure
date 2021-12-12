#include<stdio.h>
int main(){
    int *p; //ptr to create array in heap
    int i; // variable for printing
    p=(int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=3;
    p[2]=4;
    p[3]=7;
    p[4]=8;
    for(i=0;i<5;i++)
    printf("%d ",p[i]);
    return 0;
}