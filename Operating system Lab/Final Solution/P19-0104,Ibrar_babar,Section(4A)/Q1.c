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
int main()
{
	int pid=fork();
	if(pid!=0)
	{
		printf("Parent of %d\n", pid);
		printf("I am the parent with ppid %d\n", getppid());
		kill(pid,SIGTERM);
		sleep(120);
	}
	else if(pid==-1)
	{
		printf("ERROR  \n");
	}
	else
	{
		printf("child of %d\n", pid);
		printf("I am the child with pid %d\n", getpid());
	}
	
return 0;
}