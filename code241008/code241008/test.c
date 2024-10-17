#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {
	if (1) {
		printf("a");
	}
	if (1) {
		printf("b");
	}
	return 0;
}



//#include <stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		if (a < b) {
//			int tmp = a;
//			a = b;
//			b = tmp;
//		}
//		if (a < c) {
//			int tmp = a;
//			a = c;
//			c = tmp;
//		}
//		if (b < c) {
//			int tmp = b;
//			b = c;
//			c = tmp;
//		}
//		printf("%d %d %d\n", a, b, c);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//		if (i % 50 == 0) {
//			printf("\n");
//		}
//
//	}
//	return 0;
//}




//int main() {
//    printf("%d\n", 3 % 5);
//    //int M = 0;
//    //while (scanf("%d", &M) != EOF) {
//    //    M % 5 == 0 ? printf("YES\n") : printf("NO\n");
//    //}
//    return 0;
//}

//int main() {
//    int iq = 0;
//    while (scanf("%d", &iq) != EOF) {
//        iq < 140 ? iq : printf("Genius");
//    }
//    return 0;
//}
//


//void main() {
//	printf("(are u ok\??)");// \?就是一个普普通通的问号
//	printf("%c", '\'');// \'就是一个普通的单引号，''默认是一对，中间夹得是一个字符，""同理
//	//printf("\a\a");
//	printf("\b");
//	//return 0;
//}
//int main(int argc, char* argv[]) {
//	printf("argc=%d\n", argc);
//	printf("%s\n", *argv);
//	return 0;
//}

//int main(int argc, char* argv[]) {
//	int i;
//	printf("参数个数：%d\n", argc);
//	printf("程序名称：%s\n", argv[0]);
//	for (i = 1; i < argc; i++) {
//		printf("参数 %d: %s\n", i, argv[i]);
//	}
//	return 0;
//}

//#include<stdbool.h>
//#include<stdio.h>
//int main() {
//	//bool flag = true;
//	if (true) {
//		printf("%d",true);
//	}
//	else {
//		printf("hehe");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int num = 10;
//	//size_t
//	printf("%llu", sizeof num);
//	printf("%zd", sizeof(int));
//	return 0;
//}
//#include<stdbool.h>
//#include<stdio.h>
//int main() {
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(bool));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	unsigned num = -111;
//	printf("%zd\n", sizeof(num));
//	printf("%d\n", num);
//	printf("%u\n", num);
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	//int x = 10;
//	//float y = 2;
//	//printf("%f\n", x / y);
//	int x = 6;
//	//int y = 4.0;
//	int z = x / 4.0;
//	//printf("%d\n", y);
//	printf("z=%d\n", z);
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int num = 2.99;
//	printf("%f", num);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	float x = 4;
//	scanf("%d", &x);
//
//	return 0;
//}