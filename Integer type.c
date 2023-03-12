#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<math.h>

int main(int  argc, char** argv) {

	int i;
	printf("Enter a number:\n");
	scanf("%d", &i);
	if (i > 0) {
		printf("Greater than zero\n");
	}
	else if (i < 0) {
		printf("Less than zero\n");

	}
	else if (i == 0) {
		printf("Zero\n");
	}
}
