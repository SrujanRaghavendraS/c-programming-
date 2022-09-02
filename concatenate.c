#include<stdio.h>
#include<string.h>
void concate(char[], char[]);
void main()
{
	char str1[10], str2[10];
	printf("Enter string 1\n"); scanf("%s", str1);
	printf("Enter string 2\n"); scanf("%s", str2);
	concate(str1, str2);
	printf("String after concatenation is %s", str1);
}
void concate(char str1[], char str2[])
{
	int i, j;
	for ( i = strlen(str1),  j = 0; i <= (strlen(str2)+strlen(str1)); i++, j++)
	{
		str1[i] = str2[j];
		
	}
	str2[j] = "\0";
}