#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z,x1,y1,b,a;
	    scanf("%d%d",&x,&y,&z);
	    
	     x1=5*x;
	     y1=10*y;
	     a=x1+y1;
	    
	     b = a/z;
	    
        
        printf("%d\n",b);
	}
	return 0;
}

