#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include"add.h"
struct Stu//struct 结构体关键字  Stu结构体标签    struct Stu结构体类型
{
	char name[20];
	short age;
};
int main()
{
	struct Stu s = { "刘克",24 };
	printf("%d\n", s.age);
	return 0;
}
//int fun()
//{
//	static int count = 1;
//	return count++;
//}
//int main()
//{
//	int a = 0;
//	a = fun() ;
//	int b = 1;
//	printf("%d\n", a);
//	/*int a = 1;
//	int b = a++;
//	printf("%d\n", b);*/
//	//char c = 1;
//	//printf("%u\n", sizeof(!c));
//	//int i = 0;
//	//int a = 0;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	//i = a++ && ++b && d++;//&&逻辑与这个操作符，如果左边计算出0那么右边就不会进入计算
//	//printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = ++a ;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	//int a = -1;
//	//int c = 5545;
//	////整数的二进制表示：原码，反码，补码（正数三个一样）
//	////存储在内存中的是补码
//	////10000000000000000000000000000001 -原码
//	////11111111111111111111111111111110 -反码-最高符号位不变，其余取反
//	////11111111111111111111111111111111 -补码-反码加一得到补码-算术移位最高位补符号位，所以b的补码和a相同
//	////
//	////
//	//int b = 0;
//	//b = a << 1;
//	////printf("%d\n", b);
//	//printf("%d\n", a & c);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);//虽然和上面第一个和第二个相同，但意义不同，这个表示整个数组的地址，只是在表示上都是从首元素开始所以看起来一样
//	//数组名是数组首元素的地址
//	//两个例外：1.sizeof(数组名)--数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//	//2.&数组名--数组名代表整个数组，&数组名，取出的是整个数组的地址
//	return 0;
//}
//int main()
//{
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));
//	////sizeof 计算arr所占空间的大小（计算变量，数组，类型的大小，单位是字节-操作符）
//	//printf("%d\n", strlen(arr));
//	////strlen 求字符串的长度 \0之前的字符个数，（只能求字符串的长度-库函数-使用得引头文件）
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值⭐
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//void test()
//{
//    static int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)// == 不能用来比较字符串是否相等，应该使用一个库函数-strcmp并且要声明#include<string.h>
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (3 == i)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int s = 1;
//	scanf("%d", &n);
//	for (; i <= n; i++)
//	{
//		s *= i;
//	}
//	printf("%d", s);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		
//		for (j=0; j < 10; j++)
//		{
//			printf("hh\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("n =%d, m =%d", n, m);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	
//	while(i<=100)
//	{
//		int a = i % 2;
//		if (1 == a)
//			printf(" %d", i);
//		 i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (0 == a)//赋值时常量放在前面避免少打一个=的情况
//	{
//		if (2 == b)
//			printf("haha\n");
//		else
//			printf("hehe\n");
//	}
//	else
//		printf("heihei\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char str[50];
//	int len;
//
//	strcpy(str, "This is runoob.com");
//
//	len = strlen(str);
//	printf("|%s|的长度是 |%d|\n", str, len);
//
//	return(0);
//}
//int main()
//{
//	//char arr1[] = "abc";
//	char arr2[] = { 1,1,2 };
//	/*printf("%d\n", strlen(arr1));*/
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	/*printf("%d\n", strlen("\12"));*/
//	printf("%c\n", '\x62');
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	printf("%c\n",ch);
//	return 0;
//}

//int main()
//{
//	//int a = 20;
//	printf("%c\n",'a');
//	return 0;
//}
//int main()
//{
//	float f = 1.2;
//	printf("%f\n",f);
//	return 0;
//}
//int main()
//{
//	double d = 12.55;
//	printf("%lf\n", d);
//	return 0;
//}

//%d-打印整型
//%c-打印字符
//%f-打印浮点数字-打小数
//%p-以地址的形式打印
//%x-打印十六进制数字
//%o- 。。。
//%s-打印字符串
#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//
//}