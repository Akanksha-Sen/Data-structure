#include<stdio.h>
int main(){
    int a[50],i,size,key;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    printf("enter the elements of the array: ");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    printf("enter the element you want to search: ");
    scanf("%d",&key);
    
for(i=0;i<size;i++)
{
    if(a[i]==key) 
    {
  printf("element found at %d index \n",i);
  break;
    }
  else
  {
      printf("element not found! \n");
  }
}
  return 0;   
}