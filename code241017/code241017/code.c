#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int age = 0;
	while (scanf("%d", &age) != EOF) {
	if (age < 18) printf("����\n");
	else if (age >= 18 && age <= 44) printf("����\n");
	else if (age >= 45 && age <= 59) printf("����\n");
	else if (age >= 60 && age <= 89) printf("����\n");
	else printf("������\n");
	}
	return 0;
}