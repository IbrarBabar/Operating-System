#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/types.h>
#include<fcntl.h>
#include<time.h>
#include<string.h>
int main()
{
fork();
	if(fork()==0)
	{
		fork();
		fork();
		printf("Hello from child \n");
	}
	else
	{
		fork();
		printf("Hello from parent  \n");
	}
return 0;
}