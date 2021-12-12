#include<stdio.h>
int main()
{
    int size,i,key;
    int a[5];
    printf("enter the elements of the array: ");
    for(i=0;i<5;i++)
    {
            scanf("%d",&a[i]);
    }
    printf("enter the key to be searched: ");
scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(a[i]==key)
        {
        return i;
        break;
    
        printf("element found at %d index",i);
        }
        
        else
        return -1;
    }
    return 0;
    }
   