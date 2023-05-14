#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a[3];
	    for(int i=0;i<3;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	   // for(int i=0;i<4;i++)
	   // {
	        if(a[0]>50)
	        {
	            printf("A\n");
	        }
	        else if(a[1]>50)
	        {
	            printf("B\n");
	        }
	        else if(a[2]>50)
	        {
	            printf("C\n");
	        }
	        else
	        {
	            printf("NOTA\n");
	        }
	   // }
	}
	return 0;
}

