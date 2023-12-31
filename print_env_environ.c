#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main (void) {
	int i = 0;
	while(environ[i]){
		printf("environ [%d] = %s\n",i,environ[i]);
		i++;
	}

	return 0;
}
