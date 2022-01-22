#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<sys/wait.h>
void main(int argc, char **argv) {
int pid;
for (int i = 0; i < 4; i++) {
    pid = fork();
    if(pid != 0) 
    {
      sleep(2); 
        printf("parent \n");
        break;
    }
    }
    wait(NULL);
}


