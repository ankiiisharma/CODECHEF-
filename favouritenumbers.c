#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    
	    if(a%7==0 && a%2==0)
	    {
	        printf("Alice\n");
	    }
	    else if(a%9==0 && a%2!=0)
	    {
	        printf("Bob\n");
	    }
	    else
	    {
	        printf("Charlie\n");
	    }
	}
	return 0;
}