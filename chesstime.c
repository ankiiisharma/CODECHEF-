#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    
	    int a=x*60;
	    
	    int ans =a/20;
	    
	    printf("%d\n",ans);
	}
	return 0
}
