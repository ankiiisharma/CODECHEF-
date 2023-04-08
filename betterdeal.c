#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    
	    int x=100-((a/100)*100);
	    int y=200-((b/100)*200);
	    
	    if(x<y)
	    {
	        printf("FIRST\n");
	    }
	    else if(x>y)
	    {
	        printf("SECOND\n");
	    }
	    else
	    {
	        printf("BOTH\n");
	    }
	}
	return 0;
}