#include<stdio.h>
int gcd(int);
void main()
{
	int n1, n2, g;
	printf("Enter the values of n1 and n2\n"); scanf("%d%d", &n1, &n2);
	g = gcd(n1, n2);
	printf("The gcd of %d & %d is %d", n1, n2, g);
}
int gcd(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	else
		return gcd(n2, n1 % n2);
}