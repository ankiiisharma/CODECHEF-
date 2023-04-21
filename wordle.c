#include <stdio.h>
#include<string.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[5], b[5], c[5];
	    scanf("%s", a);
	    scanf("%s", b);
	    for(int i=0; i<5; i++){
	        if(a[i]==b[i]) {
	            printf("G");
	        }
	        else {
	            printf("B");
	        }
	    }
	    printf("\n");
	}
	return 0;
}