#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void check_input (char * cmd){

	if (access(cmd , F_OK) == 0){
		printf("%s : FILE FOUND\n",cmd);
	}else{
		printf("%s : FILE NOT FOUND\n",cmd);
	}
}
int main(void){

	char *line = NULL;
	size_t len;
	char *token;
	ssize_t read;
	char *delim = " \n";

	printf("hsh$ ");
	while((read = getline(&line,&len,stdin)) != -1){
//	getline(&line,&len,stdin);
	token = strtok(line,delim);
	if(strcmp(token,"_which") == 0){
		while(token = strtok(NULL,delim)){
			check_input(token);
		}
	}else{
		printf("Command Dosn't exist\n");
	}
	printf("hsh$ ");
	}

	return 0;
}
