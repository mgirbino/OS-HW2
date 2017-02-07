// Michael Girbino
// EECS 338 HW2 - Processes

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	pid_t pid;
	
	pid = fork();
	
	if (!pid) {

		return(0);
	}

	pid = fork();

	if (!pid) {
	
		return(0);
	}

	wait();
	wait();

	return(0);
}

