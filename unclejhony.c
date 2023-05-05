#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    int a[n];
	    
	    for (int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    
	    int j,temp,i;
        int k;
        
	    scanf("%d",&k);
	    
	    for(i=0;i<n;i++)
	    {
	       j=i;
	       while(a[j-1]>a[j] && j>0)
	       {
	           temp=a[j];
	           a[j]=a[j-1];
	           a[j-1]=temp;
	       } 
	    }
	    
        for(i=0;i<n;i++)
        {
            if(k==a[i])
            {

                int index=i+1;
                printf("%d\n",index);
            }
            else
            {
                return -1;
            }
        }

	}
	return 0;
}

