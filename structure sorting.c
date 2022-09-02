#include<stdio.h>
struct student {
	char name[10]; int per;
};
void sort(struct student [], int);
void main()
{
	struct student s[10];
	int i, n;
	printf("Enter the number of students\n");
	scanf("%d", &n);
	printf("Enter the details of %d students\n", n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the name and percentage of student number %d\n",i+1);
		scanf("%s %d", s[i].name,& s[i].per);
	}
	sort(s, n);
	printf("Structures after sorting is \n");
	for (i = 0; i < n; i++)
		printf("%s %d", s[i].name, s[i].per);
}
void sort(struct student s[], int n)
{
	struct student temp; 
	int i, j;
	
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (s[j].per>s[j+1].per)
			{
				temp = s[j + 1]; s[j + 1] = s[j]; s[j] = temp;
			}
		}
	}
}