#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char s[5],u[5];
	    scanf("%s%s",&s,&u);
	    
	    for(int i=0;i<5;i++)
	    {
	        if(s[i]!=u[i])
	        {
	            printf("B");
	        }
	        else
	        {
	            printf("G");
	        }
	    }
	    
	    printf("\n");
	}
	return 0;
}