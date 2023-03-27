#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    
	    int X,Y;
	    scanf("%d%d",&X,&Y);
	    
	    int A=3*X;
	    int B=2*Y;
	    
	    
	    if(A>B)
	    {
	        printf("%d\n",B);
	    }
	    else
	    {
	        printf("%d\n",A);
	    }
	}
	
	return 0;
}

