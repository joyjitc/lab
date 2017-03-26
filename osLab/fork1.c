#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
int main (int argc, char *argv[])
{
	int n;
	int mypid, parpid;
	printf("%s %s\n",argv[0],argv[1]);

	printf("Parent: n = "); scanf("%d", &n);
	/* Child creation */
	if (fork()) { /* Parent process */
		mypid = getpid();
		parpid = getppid();
		printf("Parent: PID = %u, PPID = %u...\n", mypid, parpid);
	} else { /* Child process */
		mypid = getpid();
		parpid = getppid();
		printf("Child : PID = %u, PPID = %u...\n", mypid, parpid);
		n = n * n;
	}
	printf("Process PID = %u: n = %d\n", mypid, n);
	exit(0);
}