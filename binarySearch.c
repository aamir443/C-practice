#include <stdio.h>
void main()
{
    int arr[5];
    int search_key;
    int start=0,end,mid;
    printf("Enter elements in array: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&search_key);
    end=5;
    while(start<=end)
    {
        mid=(int)(start+end)/2;
        if(search_key==arr[mid])
        {
            printf("Index is: %d",mid);
            break;
        }
        else if(arr[mid]<search_key)
        start=mid+1;
        else
        end=mid-1;
    }
    
}
