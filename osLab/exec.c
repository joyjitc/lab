#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char *argv[]){
	char *args[] = {"ass","Fuk"};
	execvp("/home/cryptomaniac/Dropbox/osLab/fork1",args);
	printf("PID = %d \n",getpid());
	printf("argc = %d\n",argc);
	for(int i = 0;i<argc; i++){
		printf("%s\n",argv[i]);
	}

}