#include<stdio.h>

//function to move zeroes to end
void moveZeroes(int arr[],int n)
{
    int temp,count=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
           temp=arr[i];
           arr[i]=arr[count];
           arr[count]=temp;
           count++; 
        }
    }
}

//function to print array
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}

int main()
{
    int arr[]={10,8,0,0,12,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("original array is: ");
    printArray(arr,n);
    moveZeroes(arr,n);
    
    printf("modified array is: ");
    printArray(arr,n);

    return 0;
} 
