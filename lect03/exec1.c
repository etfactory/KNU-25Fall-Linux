#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	printf("--> Before exec()\n");
	execl("/bin/echo", "echo", "hello", NULL);
	printf("--> After exec()\n");
	return 0;
}
