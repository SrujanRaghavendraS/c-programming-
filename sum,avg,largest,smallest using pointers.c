#include<stdio.h>
int sum(int[],int);
int largest(int[]);
int smallest(int[]);
void main()
{
	int n, a[10], i, s, l, sm;float avg;
	printf("Enter the value of n\n"); scanf("%d", &n);
	printf("Enter %d elements \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	s = sum(a, n); printf("Sum=%d\n", s);avg=s/n; printf("Average=%f\n", avg);
	l = largest(a, n); printf("Largest element=%d\n", l);
	sm = smallest(a, n); printf("Smallest element =%d\n", sm);
}int sum(int a[],int n)
{
	int* ptr,s=0,i;
	ptr = a;
	for (i = 0; i < n; i++)
	{
		s = s + *(ptr + i);
	}return s;
}
int largest(int a[], int n)
{
	int* ptr,l,i; ptr = a; l = *ptr;
	for (i = 0; i < n; i++)
	{
		if (*(ptr + i) > l)
			l = *(ptr + i);
	}return l;
}
int smallest(int a[], int n)
{
	int* ptr, l, i; ptr = a; l = *ptr;
	for (i = 0; i < n; i++)
	{
		if (*(ptr + i) < l)
			l = *(ptr + i);
	}return l;
}