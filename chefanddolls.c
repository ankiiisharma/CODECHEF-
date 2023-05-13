#include <stdio.h>

void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0;
        scanf("%d",&n);

        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        } 

        for(int i=0;i<n;i++)
        {
            int temp = a[i]/2;
            if(temp!=0)
            {
                count=count+1;
            }
        }
        printf("%d\n",count);
    }
}
