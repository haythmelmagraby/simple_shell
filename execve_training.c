#include <stdio.h>
#include <unistd.h>

int main(void){
	char *args[] = {"/bin/ls" , "-l" , "/usr/",NULL};
	printf("before execv\n");
	if(execve(args[0],args,NULL) == -1){
	perror("ERROR");
	}
	printf("after execve \n");
	return 0;
}
