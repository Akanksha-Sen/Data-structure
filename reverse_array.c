#include<stdio.h>
    //function to reverse array

    void reverseArray(int arr[],int low,int high)
    {
        int temp;
        while(low<high)
        {
            temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            low++;
            high--;
        }
    }

    //function to print reversed array
    void printArray(int arr[],int size)
    {
        int i;
        for(i=0;i<size;i++)
          printf("%d",arr[i]);
        printf("\n");
    }

    //driver function 
    int main()
    {
        int arr[]={1,2,3,4,5,6};
        int n=sizeof(arr)/sizeof(arr[0]);

        printArray(arr,n); 
        reverseArray(arr,0,n-1); 

        printf("reversed array is: \n");
        printArray(arr,n); 
        return 0;
    }


