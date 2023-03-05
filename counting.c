#include <stdio.h>

// COUNTING PRETTY NUMBERS!

int main(void) 

    {
        
	int t;
	scanf("%d",&t);
	while(t--)
	
	{
	    int l,r;
	    int count=0;
	    
	    scanf("%d",&l);
	    scanf("%d",&r);
	    
	    for(int i=l;i<=r;i++)
	    
        {
	        if(i%10==2 || i%10==3 || i%10==9)
	        
	            count++;   
	    }

	    printf("%d\n",count);
	}
	return 0;
}

