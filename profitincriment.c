#include <stdio.h>

int main(void) {
	int t,a,b,c;
	scanf("%d \n",&t);
	while(t--)
	{
	    scanf("%d %d \n",&a,&b);
	    c=a-b;
	    printf("%d \n",((a+(a/10))-c));
	}
	return 0;
}