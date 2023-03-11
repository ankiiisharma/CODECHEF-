#include <stdio.h>

int main()
{
    int a[20];
    int n;
    scanf("%d",&n);
    printf("Enter the Array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int data;

    printf("Enter the Number you want to Find: \n");
    scanf("%d",&data); //2

    int l,r,mid;
    l=0;
    r=n-1;

    while(l<r)
 {

    mid=(l+r)/2; //1

    if(a[mid]==data)
    {
        printf("Element found at index %d",mid);
    }
    else if(data<a[mid])
    {
        r=mid-1;
    }
    else
    {
        l=mid+1;
    }
 }
 
 printf("Element found at index %d",mid);
 
   return 0;
}