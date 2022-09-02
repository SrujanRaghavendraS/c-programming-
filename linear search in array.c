#include<stdio.h>
int search(int[], int, int);
void main()
{
	int a[10], i, n,s,r=0;
	printf("Enter the value of n\n"); scanf("%d", &n);
	printf("Enter %d elements \n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter the search element\n"); scanf("%d", &s);
	r = search(a, n, s);
	if (r == 0)
		printf("Element is not present \n");
	else
		printf("Element is present in the array\n");
}
int search(int a[], int n, int s)
{
	for (int i = 0; i < n; i++)
	{
		if (s == a[i])
		{
			return 1; exit(1);
		}
		
	}
}