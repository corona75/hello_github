#include<stdio.h>

typedef struct student
{
	char name[10];
	int age;
	int height;
} Student;

int main()
{
	Student student2;
	printf("이름 입력 : ");
	scanf("%s",student2.name);
	printf("나이 입력 : ");
	scanf("%d",&student2.age);
	printf("키 입력 : ");
	scanf("%d",&student2.height);
	printf("이름 : %s, 나이 : %d, 키 : %d",student2.name,student2.age,student2.height);
	return 0;
}