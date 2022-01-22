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
#include<fstream>
int main()
{
	pthread thread_A,thread_B,thread_C,thread_D,total;
	ifstream f;
	f.open("read.txt");
	int n;
	for(int i=0;i<eof;i++)
	{
	
		if(eof!=NULL)
		{
			f>>n;
		}
		
	}
	for(int i=0,i<eof;i++)
	{
		if(n%2==0)
		{
			thread_A=thread_A+n;
		}	
	}
	for(int i=0,i<eof;i++)
	{
		if(n%2!=0)
		{
			thread_B=thread_B+n;	
		}
		
	}
	for(int i=0;i<eof+eof+eof;i++)
	{
	
		if(eof!=NULL)
		{
			f>>n;
		}
	}
	for(int i=0,i<eof+eof+eof;i++)
	{
		if(n%2==0)
		{
			thread_C=thread_C+n;	
		}	
	}
	for(int i=0,i<eof;i++)
	{
		if(n%2!=0)
		{
			thread_D=thread_D+n;	
		}	
	}
	total_thread=thread_a+thread_B,thread_C,thread_D;
return 0;
}