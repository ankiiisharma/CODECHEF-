#include<stdio.h>
#include<stdio.h>
#include<unistd.h>

void main()
{
  int pid;
  pid=fork();
  if(pid>0)
  {
    printf(" \n the Parent proces id is = %d \n",getpid());
  }
  else if(pid==0)
  {
    sleep(10);
    printf(" \n the Current proces id is = %d \n",getpid());
    printf(" \n the Parent proces id is = %d \n",getppid());
  }
}