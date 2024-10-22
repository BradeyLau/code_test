#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
int main() {
	int M = 0;
	while (~scanf("%d", &M)) {
		for (int i = 1; i <= M; i++) {
			int j = 1;
			for (; j <= i; j++) {
				printf("%2d * %2d = %2d ", j, i, i * j);
			}
			printf("\n");
		}
	}
	return 0;
}

//int is_prime(int num) {
//	for (int i = 2; i < sqrt(num); i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//
//
//}
//int main(){
//	for (int i = 100; i <= 200; i++) {
//		if (is_prime(i)) {
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int is_leap(int year) {
//	if (year % 4 == 0 && year % 100 != 0) {
//		return 1;
//	}
//	else if (year % 400 == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	int year = 0;
//	while (~scanf("%d", &year)) {
//		if (is_leap(year)) {
//			printf("%d is leap!\n", year);
//		}
//		else {
//			printf("nonono\n");
//		}
//	}
//
//	/*实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。*/
//	//for (int i = 1000; i <= 2000; i++) {
//	//	if (is_leap(i)) {
//	//		printf("%d ", i);
//	//	}
//	//}
//
//
//	return 0;
//}

//void Init0(int arr[],int size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = 0;
//	}
//}
//void InitNum(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = i;
//	}
//}
//void Print(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int size) {
//	int low = 0;
//	int up = size-1;
//	while (1) {
//		int tmp = arr[low];
//		arr[low] = arr[up];
//		arr[up] = tmp;
//		low++;
//		up--;
//		if (low >= up) {
//			break;
//		}
//	}
//}
//int main() {
//	int arr[10];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Init0(arr, size);
//	Print(arr, size);
//	InitNum(arr, size);
//	Print(arr, size);
//	reverse(arr, size);
//	Print(arr, size);
//	return 0;
//}

//
////在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回-1.
//int bin_search(int arr[], int left, int right, int key) {
//	while (1) {
//		int mid = left + (right - left) / 2;
//		if (key > arr[mid]) {
//			//在右边
//			left = mid + 1;
//		}
//		else if (key < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//		if(left > right){
//			return -1;
//		}
//	}
//}
//void sort(int arr[], int size) {
//	int end = size - 1;
//	for (int j = 0; j < size; j++) {
//		for (int i = 0; i < end; i++) {
//			if (arr[i] > arr[i + 1]) {
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//		end--;
//	}
//}
//int main() {
//	srand((unsigned int)time(NULL));
//	int arr[20] = { 0 };
//	printf("Rand:\n\n");
//	for (int i = 0; i < 20; i++) {
//		arr[i] = rand() % 100 + 1;	
//		printf("%d ", arr[i]);
//		if ((i+1) % 10 == 0) {
//			printf("\n");
//		}
//	}
//	printf("\n");
//	sort(arr, sizeof(arr) / sizeof(arr[0]));
//	printf("Sort:\n\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d ", arr[i]);
//		if ((i+1) % 10 == 0) {
//			printf("\n");
//		}
//	}
//	int num = 0;
//	printf("\nPlease enter the number:");
//	scanf("%d", &num);
//	int re = bin_search(arr, 0, sizeof(arr) / sizeof(arr[0]), num);
//	printf("Search:%d,the index = %d\n",num,re);
//	return 0;
//}


//#include <string.h>
//int add(int x) {
//	return x+=1;
//}
//int num = 10;
//int main() {
//	num += add(num);//num = 11+11;
//	num += add(num);//num = 
//	printf("%d\n", add(num));
//	//int i = 0;
//	//int j = 0;
//	//for (; i < 10; i++, j++) {
//	//	printf("i=%d j=%d\n", i, j);
//	//}
//	return 0;
//}
//int main() {
//
//    int n, m;
//    while (scanf("%d %d", &n, &m) != EOF) {
//        int arr[n][m];
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                scanf("%d", &arr[i][j]);
//            }
//        }
//        for (int j = 0; j < m; j++) {
//            for (int i = 0; i < n; i++) {
//                printf("%d ", arr[i][j]);
//            }
//            printf("\n");
//        }
//    }
//	return 0;
//}


//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    char arr1[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(arr1));
//    return 0;
//}


//int main() {
//	printf("hello world\n");
//
//	return 0;
//}