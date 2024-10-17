#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	int num = 0;
	while (~scanf("%d", &num)) {
		printf("%d\n", num);
	}

	return 0;
}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main() {
//	int year = 0;
//	while (scanf("%d", &year) != EOF) {
//		if (year % 4 == 0 && year % 100 != 0) {
//			printf("Is LeapYear\n");
//		}
//		else if (year % 400 == 0) {
//			printf("Is LeapYear\n");
//		}
//		else {
//			printf("Isn't LeapYear\n");
//		}
//	}
//	return 0;
//}
//int main() {
//	int age = 0;
//	while (scanf("%d", &age) != EOF) {
//	if (age < 18) printf("少年\n");
//	else if (age >= 18 && age <= 44) printf("少年\n");
//	else if (age >= 45 && age <= 59) printf("中年\n");
//	else if (age >= 60 && age <= 89) printf("老年\n");
//	else printf("老寿星\n");
//	}
//	return 0;
//}