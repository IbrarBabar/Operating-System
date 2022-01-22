#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *abc(void *var)
{
sleep(1);
printf("Inside thread the name is = %d\n");

return NULL;
}
int main()
{
     pthread_t thread1,thread2;
    char name[15]="ibrar";
    char *name1=name;
    char *name2="ibrar2"
   

int res1=pthread_create(&thread1,NULL,abc,name1);
int res2=pthread_create(&thread2,NULL,abc,(*void) name2);

pthread_join(thread1,NULL);
pthread_join(thread2,NULL);
        printf("thread1 return :: %d\n",res1);
        printf("thread2 return :: %d\n",res2);
        exit(0);
    return 0;


}