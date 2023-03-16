#include <stdio.h>

int main()
{
    int n,m,i,j;
    int array1[20];
    int array2[20];
    
    printf("Enter no. of elements in Array 1\n");
    scanf("%d",&n);

    printf("ENTER ARRAY 1\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter no. of elements in Array 2\n");
    scanf("%d",&m);

    printf("ENTER ARRAY 2\n");

    for(j=0;j<m;j++)
    {
        scanf("%d",&array2[j]);
    }


    printf("CARTISIAN product is:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("(%d %d)" ,array1[i],array2[j]);
        }
    }

}