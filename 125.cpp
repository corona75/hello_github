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
	printf("�̸� �Է� : ");
	scanf("%s",student2.name);
	printf("���� �Է� : ");
	scanf("%d",&student2.age);
	printf("Ű �Է� : ");
	scanf("%d",&student2.height);
	printf("�̸� : %s, ���� : %d, Ű : %d",student2.name,student2.age,student2.height);
	return 0;
}