#include<stdio.h>
void sort(int[], int);
void main()
{
	int n,  i,a[10];
	printf("Enter the value of n\n"); scanf("%d", &n);
	printf("enter %d elements \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Array before sorting \n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	sort(a, n);
	printf("\nElements after sorting\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
}
void sort(int a[], int n)
{
	int* ptr,i,j,t;
	ptr = a;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (*(ptr + j) > *(ptr + j + 1))
			{
				t = *(ptr + j); *(ptr + j) = *(ptr + j + 1); *(ptr + j + 1)=t;
			}
		}
	}
}