#include <stdio.h>
#include <unistd.h>

int main(void){
	pid_t mypid,pid;
	printf("Before Pidfork\n");
	pid = fork();
	if(pid == -1){
		perror("ERROR: ");
		return 1;
	}
	if(pid == 0){
		printf("child pid is:%u\n",mypid);
	}
	printf("After Pidfork\n");
	mypid = getpid();
	printf("My pid is %u\n",mypid);
	return 0;
}
