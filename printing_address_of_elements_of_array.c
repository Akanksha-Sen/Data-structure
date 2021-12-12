#include<stdio.h>
int main(){
    int A[5];
    int i;
    for(i=0;i<5;i++)
    printf("%u \n",&A[i]); //use %u to calculate address of elements
    return 0;
}