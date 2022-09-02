#include<stdio.h>
void swap(int, int);
void swapp(int*, int*);
void main()
{
	int a, b, ch;
	printf("Enter the values of a and b\n"); scanf("%d%d", &a, &b);
	printf("Enter your choise\n1)Swapby passing values\n2)swap by passing reference\n");
	scanf("%d", &ch);
	if (ch == 1)
	{
		swap(a, b);
		
	}
	else if (ch == 2)
	{
		swapp(&a, &b);
		printf("Values after swapping are a=%d,b=%d\n", a, b);
	}
}
void swap(int a, int b)
{
	int t;
	t = a; a = b; b = t;
	printf("values after swapping are A=%d,b=%d\n", a, b);
}
void swapp(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b; *b = temp;
}
