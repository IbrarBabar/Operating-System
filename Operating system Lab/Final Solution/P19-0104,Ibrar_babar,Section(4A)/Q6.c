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
	fork();
	fork();
	printf("Hello  \n");
return 0;
}