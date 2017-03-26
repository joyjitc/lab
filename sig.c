#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>

pid_t cld;
void sigcld(int s){
	exit(0);
}
void sigpar2(int s){
	kill(cld,SIGUSR1);
	sleep(2);

}
void sigpar1(int s){
		printf("Hello World!\n");
		signal(SIGINT,sigpar2);
}	

int main(){
	cld = fork();
	if(cld==0){
		//Child
		signal(SIGINT,SIG_IGN);
		signal(SIGUSR1,sigcld);
		while(1){
			printf("\n Save Me!");
			sleep(1);
		}
	}
	else{
		//parent
		signal(SIGINT,sigpar1);	
		wait();
		exit(0);
	}

}