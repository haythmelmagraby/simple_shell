#include "main.h"
#include <stdio.h>
#include <unistd.h>

int main(int ac, char** av){
	int i = 0;
//	char **args = split_string(*av," ");
//	while(args[i] != NULL){
//                printf("%s\n",args[i]);
//                i++;
//        }
	if(execve(av[1],av+1,NULL) == -1){
		perror("ERROR");
	}	
	return 0;
}
