#include <stdio.h>

int main(int ac,char** av,char** env){

	int i = 0;
	while(env[i]){
		printf("env [%d] = %s\n",i,env[i]);
		i++; 
	}
	return 0;
}
