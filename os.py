#include<stdio.h>
#include<stdio.h>
#include<unistd.h>

void main()
{
  int n;
  n = getpid();
  printf("process id= %d",n);
}