#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int age = 0;
	while (scanf("%d", &age) != EOF) {
	if (age < 18) printf("少年\n");
	else if (age >= 18 && age <= 44) printf("少年\n");
	else if (age >= 45 && age <= 59) printf("中年\n");
	else if (age >= 60 && age <= 89) printf("老年\n");
	else printf("老寿星\n");
	}
	return 0;
}