#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *abc(void *var)
{
sleep(1);
printf("Inside thread \n");
return NULL;
}
int main()
{
    pthread_t thread_id;
    printf("Before thread :: \n");
    int res=pthread_create(&thread_id,NULL,abc,NULL);
    printf("ThreadID=%d\n", res);
    pthread_join(thread_id,NULL);
    printf("After thread:: \n");
    return 0;


}