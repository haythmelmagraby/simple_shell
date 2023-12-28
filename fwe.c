#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int ac, char **av){
	pid_t child_pid;
	int status,i=5;

	while(i >= 0){
//	printf("hi from while\n");
	child_pid = fork();
		if(child_pid == -1){
			perror("ERROR:");
			return 1;
		}
		if(child_pid == 0){
//			printf("hi from 0\n");
			if(execve(av[1],av+1,NULL) == -1){
				perror("ERROR:");
				return 1;
			}
		}
		else{
//		printf("hi from wait\n");
		wait(&status);
		}
	i--;
	}

	return 0;
}
