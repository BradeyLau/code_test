#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <time.h>
#include <stdio.h>

int main() {
	//给定两个数，求这两个数的最大公约数
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int max = num1 > num2 ? num1 : num2;
	int min = num1 < num2 ? num1 : num2;
	int tmp = 0;
	while (1) {
		
		tmp = min;
		min = max % min;
		max = tmp;
		if (min == 0) {
			break;
		}
	}
	printf("%d\n", tmp);
	return 0;
}

//int main() {
//	//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[1]); i++) {
//		printf("arr1[%d]=%d,arr2[%d]=%d\n", i, arr1[i], i, arr2[i]);
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("\n\n");
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
//		printf("arr1[%d]=%d,arr2[%d]=%d\n", i, arr1[i], i, arr2[i]);
//	}
//
//
//	return 0;
//}
//int main() {
//	int num[10] = { 0 };
//	int sum = 0;
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//		sum += num[i];
//	}
//	float average = 1.0 * sum / 10;
//	printf("%.3f\n", average);
//	return 0;
//}

//int main() {
//    int num = 0;
//    while (scanf("%d", &num) != EOF) {
//        for (int i = 1; i <= num; i++) {
//            for (int j = 1; j <= num; j++) {
//                if (i == j || num + 1 == i + j) {
//                   printf("*");
//                 }
//                else {
//                   printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int num = 0;
//    while (scanf("%d", &num) != EOF) {
//        for (int i = 1; i <= num; i++) {
//            for (int j = 1; j <= num; j++) {
//                if (i == num || i == 1) {
//                    //第一行和最后一行
//                    printf("* ");
//                }
//                else if (j==num||j==1) {
//                    printf("* ");
//                }
//                else {
//                    //其他位置
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//void menu() {
//	printf("<<<<<<<<<<\n");
//	printf("1.开始游戏\n");
//	printf("0.退出游戏\n");
//	printf(">>>>>>>>>>\n\n");
//}
//void game() {
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	int input = 0;
//	printf("请输入你猜的数字：\n");
//again:
//	scanf("%d", &input);
//	if (input > num) {
//		printf("猜大了，再试一次吧：\n");
//		goto again;
//	}
//	else if (input < num) {
//		printf("猜小了，再试一次吧：\n");
//		goto again;
//	}
//	else {
//		system("cls");
//		printf("恭喜你，猜对啦！\n");
//	}
//}
//void step1(int choice) {
//	switch (choice) {
//	case 1:
//		game();
//		break;
//	case 0:
//		system("cls");
//		printf("再见~\n");
//		break;
//	default:
//		printf("输入有误，请重新输入!\n");
//	}
//
//}
//int main() {
//	//printf("%d\n", num);
//	
//	int choice = 1;
//
//	while (choice) {
//		menu();
//		printf("请选择：>");
//		scanf("%d", &choice);
//		step1(choice);
//	}
//	return 0;
//}