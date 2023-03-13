#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z,a,b,c,d;
	    scanf("%d%d%d",&x,&y,&z);
	    
	     a=5*x;
	     b=10*y;
	     c=a+b;
	     d=c/z;
	     printf("%d\n",d);
	}
	return 0;
}

