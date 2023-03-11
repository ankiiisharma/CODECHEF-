#include <stdio.h>
int main()
{
    int n,temp,i,j;

    printf("Enter the no. of elements\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<n;i++)
    {
        j=i;
       while(arr[j - 1] > arr[j] && j>0)
       {
        temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
       }
    }
    printf("SORTED Elements are:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0; 
}