#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
pid_t childpid;
void pfunc2(int x){
  kill(childpid,SIGUSR1);
  sleep(2);
  exit(0);
}

void pfunc(int x){
  printf("hello world\n");
  signal(x,pfunc2);
}


void cfunc(int x){
  exit(0);
}
int main(){

  childpid=fork();
  if(childpid==0){
    //we are in the child
    signal(SIGINT,SIG_IGN);
    signal(SIGUSR1,cfunc);
    while(1){
      printf("SAVE ME\n");
      sleep(2);
    }
  }
  else{
    //parent code
    signal(SIGINT,pfunc);
    while(1);
  }
}
