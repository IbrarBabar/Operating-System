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
	int a[10]={3,5,11,6,7,4,8,10,9,2};
	int b[10];
	int ans;
	
	printf("smallest %d\n", ans);
	int pid=fork();
	if(pid==0)
	{
		for(int i=0;i<10;i++)
		{
			if(a[i]<b[i+1])
			{
				ans=a[i];
			}
			else
			{
				b[i]=b[i++];
			}
			sleep(1);
		}
		sleep(5);
	}
	else if(pid==-1)
	{
		printf("ERROR  \n");
	}
	else
	{
		printf("Parent of %d\n", pid);
		printf("I am the child with pid %d\n", getpid());
	}
return 0;
}