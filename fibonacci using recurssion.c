#include<stdio.h>
int fib(int);
void main()
{
	int i, f, n;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		f = fib(i);
		printf("%d\t", f);
	}
}
int fib(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fib(n-1) + fib(n - 2);
}