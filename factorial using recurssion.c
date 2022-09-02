#include<stdio.h>
int fact(int);
void main()
{
	int n,f;
	printf("Enter the number whose factorial is to be calculated \n"); scanf("%d", &n);
	if (n < 0)
	{
		printf("Input Error\n");
		exit(1);
	}
	f = fact(n);
	printf("The factorial of %d is %d", n, f);
}
int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}