#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

static void sighandler( int signo){
	if ( signo = SIGINT){
		int d = open ("file.txt", O_CREAT| O_APPEND, 0644);
		char *s = "SIGINT has been received, program terminated\n";
		write(d, s, strlen(s));
		close(d)
		printf("SIGINT has been received. The program has terminated");
		exit(1);
		}
	if(signo = SIGUSR1){
		printf("PPID : %d", getppid());
		}
}
int main(){

	signal(SIGINT,  sighandler);
	signal(SIGUSR1, sighandler);
	
	while (1) {
		printf("PID : %d", getpid());
		sleep(1);
		
		}
	}	
		