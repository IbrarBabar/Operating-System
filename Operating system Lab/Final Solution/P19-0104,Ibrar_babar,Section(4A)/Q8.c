#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/types.h>
#include<fcntl.h>
#include<time.h>
#include<signal.h>
#include<string.h>
#include<wait.h>
int main()
{
	int pid=fork();
	if(pid==0)
	{
		exit(0);
	}
	else if(pid==-1)
	{
		printf("ERROR  \n");
	}
	else
	{
		wait(NULL);
	}
	
return 0;
}