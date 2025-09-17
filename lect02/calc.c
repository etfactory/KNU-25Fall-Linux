#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];

	int result = 0;

	if (strcmp(operator, "+")==0)
		result = num1+num2;
	else if (strcmp(operator, "-")==0)
		result = num1-num2;
	else if (strcmp(operator, "x")==0)
		result = num1*num2;
	else if (strcmp(operator, "/")==0)
		if (num2 != 0)
			result = num1/num2;
		else{
			printf("Error\n");
		}
	else
		printf("Error\n");

	printf("%d\n", result);

	exit(0);
}
