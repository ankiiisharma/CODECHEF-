#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    
	    if(x<=24)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
	}
	return 0;
}