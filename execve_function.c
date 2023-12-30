#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void excute(char **args){
	pid_t child_pid;
	int status,i=0;
	
	child_pid =fork();
	if(child_pid == -1){
		perror("ERROR:");
		exit(0);	
	}
	if(child_pid == 0){
//		while(args[i] != NULL){
//			args[i];
//			printf("the path is : %s\n",args[0]);
//			i++;
//		}
//			printf("the path should be NULL : %s\n",args[i]);
		if(execve(args[0],args,NULL) == -1){
			perror("ERROR:");
			exit(0);	
		}
	}
	else{
		wait(&status);
	}

}
/*int main(int ac,char **av){
	excute(av);
	return 0;
}*/
