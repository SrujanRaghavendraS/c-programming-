#include<stdio.h>
void toh(int, char, char, char);
void main()
{
	int num;
	printf("Enter the number of disks\n"); scanf("%d", &num);
	printf("The sequence of moving the disks are as follows \n");
	toh(num, 'A', 'B', 'C');
}
void toh(int num, char from, char to, char aux)
{
	if (num == 1)
	{
		printf("Move the disk 1 from %c to %c \n", from, to);
		return;
	}
	toh(num - 1, from, aux, to);
	printf("Move the disk %d from %c to %c\n", num, from, to);
	toh(num - 1, aux, to, from);
}