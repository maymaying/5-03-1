#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//1
	system("pause");
	return 0;
}
*/


/*
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");//��������
	if (b == 0xb600)
		printf("b");//��������
	if (c == 0xb6000000)
		printf("c");
	system("pause");//���Ϊ��c
	return 0;
}
*/


/*
int main()
{
	//char a = -1;//char����ռ1���ֽ�   1111 1111 1111 1111 1111 1111 1111 1111
	//printf("%u\n", a);//%u���޷�������  ռ4���ֽ�   4294967295

	//char a = 1;//���Ϊ��1
	//printf("%u\n", a);
    
	//1���������0������2�Ķ��ٴη�
	unsigned char a = -1;//���Ϊ��255
	printf("%u\n", a);
	system("pause");//��������
	return 0;
}
*/


/*
struct stu{
	char name[64];
	char sex;
	int age;
	int numner;
};
int main()
{
	//struct stu tom = { "tom", 'm', 20, 1234 };
	//printf("%s\n", tom.name);
	//printf("%d\n", tom.age);

	struct stu tom = { "tom", 'm', 20, 1234 };
	struct stu *p = &tom;
	printf("%s\n", (*p).name);
	printf("%d\n", p->age);
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++; //a = 1,b = 2,c = 3,d = 4   
	//i = a++||++b||d++;//a = 1,b = 3,c = 3,d = 4  
	printf("a = %d,b = %d,c = %d,d = %d\n", a, b, c, d);
	system("pause");
	return 0;
}
*/


/*
int main()
{
int a = 10;
int x = ++a;
int y = --a;
printf("x=%d,y=%d\n", x, y);//x=11,y=10
system("pause");
return 0;
}

int main()
{
int a = 10;
int m = a++;
int n = a--;
printf("m=%d,n=%d\n",m, n);//m=10,n=11
system("pause");
return 0;
}
*/


/*
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//4
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(ch));//10
	test1(arr);
	test2(ch);
	system("pause");
	return 0;
}
*/


/*
//��һ�������洢���ڴ��еĶ�������1�ĸ���
int count_bits1(int x)
{
	int count = 0;
	while (x)
	{
		if (x % 2 == 1)
		{
			count++;
		}
		x = x / 2;
	}
	return count;
}

int count_bits2(int x)
{
	int count = 0;
	int i = 0;
	while (i < sizeof(int)*8)
	{
		if (x & (1<<i))
		{
			count++;
		}
		i++;
	}
	return count;
}

int count_bits3(int x)
{
	int count = 0;
	while (x)//1���������0 - 1 = 0���������1  (������)
	{
		x = x&(x - 1);//�м�������λ��ѭ������
		count++;
	}
	return count;
}
int main()
{
	int x = 1234;
	int num = count_bits3(x);
	printf("%d\n", num);
	system("pause");
	return 0;
}
*/


/*
int main()
{


//int x = 1;
//printf("%d\n", sizeof(int));
//printf("%d\n", sizeof(x));
////printf("%d\n", sizeof int);//�﷨����
//printf("%d\n", sizeof x);

//int x = 1;
//printf("0x%p\n", &x);//0x00DEF994  %p��ӡ��ַ

////������������ֵ
//int a = 10;
//int b = 20;
//printf("a = %d b = %d\n", a, b);
//a = a^b;
//b = a^b;
//a = a^b;
//printf("a = %d b = %d\n", a, b);

//int num1 = 1;
//int num2 = 2;
//printf("%d\n", num1 & num2);//0
//printf("%d\n", num1 | num2);//3
//printf("%d\n", num1 ^ num2);//3

//int a = -1;
//printf("%d\n", a >> 1);//-1    ������λ

//unsigned int a = -1;
//printf("%u\n", a);// �޷�������-> �߼���λ  4294967295

//unsigned int a = -1;
//printf("%u\n", a>>1);//2147483647  ������Сһ��

system("pause");
return 0;
}
*/
