#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	for (int i = 1000; i <= 2000; i+=2) {
		if (i % 4 == 0 && i % 100 != 0) {
			printf("%d ", i);
		}
		else if (i % 400 == 0) {
			printf("%d ", i);

		}
		else {
			continue;
		}

	}
	return 0;
}

//#include <math.h>
//int main() {
//	for (int i = 100; i <= 200; i++) {
//		int j = 2;
//		for (; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int count = 0;
//	for (int i = 1; i <= 100; i++) {
//		//个位是9
//		if (i % 10 == 9) {
//			count++;
//		}
//		//十位是9
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main() {
//	float flag = 1.0;
//	float sum = 0.0;
//	for (int i = 1; i <= 100; i++) {
//		sum += (flag / i);
//		flag *= (-1);
//	}
//	printf("sum = %f\n", sum);
//	return 0;
//}


//int main() {
//	int num[10] = { 0 };
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//	}
//	int max = 0;
//	for (int i = 0; i < 10; i++) {
//		
//		if (num[i] >= max) {
//			max = num[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main() {
//	for (int i = 1; i <= 9; i++) {
//		int j = 1;
//		for (; j <= i; j++) {
//			printf("%d * %d = %d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}


//#include<math.h>
//int main() {
//	for (int i = 100; i <= 200; i++) {
//		int j = 2;
//		for (; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		//break
//		//是素数
//		if (sqrt(i) < j) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int IsSu(int num) {
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//
//	for (int i = 100; i <= 200; i++) {
//		if (IsSu(i)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	do {
//		count++;
//		num /= 10;
//	} while (num);
//	printf("%d\n", count);
//	return 0;
//}

//int main() {
//	int num = 0;
//	scanf("%d", &num);
//			int sum = 0;
//			while (num) {
//				num = num / 10;
//					sum++;
//
//			}
//			printf("%d\n", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main() {
//	int i = 1;
//	do {
//		printf("%d ", i++);
//	} while (i <= 10);
//	return 0;
//}

//int main() {
//	int sum = 0;
//for (int i = 3; i <= 99; i+=3) {
//		sum += i;
//}
//printf("%d", sum);
//	return 0;
//}

//int main() {
//	int num = 0;
//	while (~scanf("%d", &num)) {
//		while (num) {
//			printf("%d ", num % 10);
//			num = num / 10;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	while (~scanf("%d", &num)) {
//		while (num / 10) {
//			printf("%d ", num % 10);
//			num = num / 10;
//		}
//		printf("%d\n", num);
//	}
//	return 0;
//}


//int main() {
//	int i = 0;
//
//	while (i < 10) {
//		printf("%d\n", ++i);
//	}
//	return 0;
//}


//int main() {
//	int num = 0;
//	while (~scanf("%d", &num)) {
//		printf("%d\n", num);
//	}
//
//	return 0;
//}


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