#include<stdio.h>
struct student {
	char name[10]; int age; int roll;
};
void searchbyroll(struct student [],int);
void main()
{
	struct student s[10];
	int n, i;
	printf("Enter the value of n\n"); scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Enter the name age and roll of student number  %d\n", i+1);
		scanf("%s%d%d", s[1].name, &s[i].age, &s[i].roll);
	}
	searchbyroll(s,n);
}
void searchbyroll(struct student s[],int n)
{
	int roll,i;
	printf("Enter the roll number of the student\n"); scanf("%d", &roll);
	for (i = 0; i < n; i++)
	{
		if (roll == s[i].roll)
		{
			printf("Name=%s\nage=%d\nRoll=%d", s[i].name, s[i].age, s[i].roll);
		}
	}
}