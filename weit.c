#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/* if i want parent don't complete utile the child finish work*/

int main(void){
	pid_t child_pid;
	int status;
	
	child_pid = fork();
	if(child_pid == -1){
		perror("ERROR:");
		return 1;
	}
	if(child_pid == 0){
		printf("Wait For Me dud!!");
		sleep(3);
	}else{
		wait(&status);
		printf("oh, it's all better now\n");
	}
	printf("Hello from parent's");	
	return 0;
}
