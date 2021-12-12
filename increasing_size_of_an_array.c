#include<stdio.h>
#include <stdlib.h>
int main(){
int *p,*q; //declaring 2 ptrs for creating 2 different arrays
int i;
p=(int *)malloc(5*sizeof(int)); //creating first array of smaller sixe
p[0]=9; //input numbers in thr first array
p[1]=7;
p[2]=3;
p[3]=6;
p[4]=5;
 q=(int *)malloc(10*sizeof(int)); //creating 2nd array of larger size

 for(i=0;i<5;i++) //copying elements from array p to array q
 q[i]=p[i];
 free (p); //freeing array p to releae memory
 p=q; //making ptr p point towards ptr q
 q=NULL; //making ptr q because it is of no use now

 for(i=0;i<5;i++) //displaying final elements of new increased array
 printf("%d \n",p[i]);
 return 0;
}