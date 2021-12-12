#include<stdio.h>

void leftRotate(int arr[],int n)
{
    int temp=arr[0];
	for(int i=1;i<n;i++)
	 arr[i-1]=arr[i];
	arr[n-1]=temp;
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
	
	
}

int main()
{
	int arr[]={2,3,4,5,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("original array is: ");
	printArray(arr,n);
	
	leftRotate(arr,n);
	printf("\n modified array is: ");
	printArray(arr,n);
	
	return 0;
}