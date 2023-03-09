#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array!\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the Array\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }

    for (int i=1;i<n;i++)
    {
    int temp=arr[i];
    int j=i-1;
    
        while(arr[j]>temp && j>=0)
        {
            arr[j=1]=arr[j];
            j--;
        }
        
        arr[j+1] = temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0; 
}