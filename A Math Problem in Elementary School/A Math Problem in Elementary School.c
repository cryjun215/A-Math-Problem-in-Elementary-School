#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num1, num2 = 0;
	int answer = 0;
	printf("Automatically generate arithmetic problems.\n");

	while (1) {
		srand((int)time(NULL));
		num1 = rand() % 100;
		num2 = rand() % 100;
		printf("%d + %d = ", num1, num2);
		scanf("%d", &answer);
		if (answer != num1 + num2) {
			printf("Wrong Answer.\n");
			continue;
		}
		else if (answer = num1 + num2) {
			printf("Great Job.\n");
			break;
		}
		else {
			printf("Wrong Answer.\n");
			continue;
		}
	}

	return 0;
}