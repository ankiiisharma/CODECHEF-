#include <stdio.h>

int main()
{
    int a[20];
    int n,data;
    printf("Enter the no. of elements in your array:\n");
    scanf("%d",&n);

    printf("Enter Array:");

    for(int i=0;i<n;i++)
    {
        
        scanf("%d",&a[i]);    
    }
    // for(int i=0;i<n;i++)
    // {
    //  printf("%d ",a[i]);
    // }
     printf("Enter the no you want to find:\n");
     scanf("%d",&data);

     for(int i=0;i<n;i++)
     {
        if(a[i]==data)
        {
            printf("element found at index: %d ",i+1);
            break;
        }
        else if(i==n)
        {
        printf("Element not found:\n");
        }

     }
     return 0;
}
