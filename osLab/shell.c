#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(){
	while(1){
		printf("%s","jarvis>");
		char *args[100];
		char input[100];
		fgets(input,100,stdin);

		char *token;
		int i = 0;


		input[strlen(input)-1] = '\0';
		token = strtok(input," ");
		while(token != NULL){
			printf("token : %s\n",token);
			args[i] = token;
			i++;
			token = strtok(NULL," ");
		}
		args[i] = NULL;

		int pid = fork();
		if(pid!=0){
			wait(NULL);
		}
		else{
			execvp(args[0],args);
			printf("Not Working!!!");
		}

	}
}