#include <stdio.h>
int main()
{
	int minutes=123;
	int hours=minutes/60;
	int remaining=minutes%60;
	printf("The total hours are %d and minutes are %d",hours, remaining);
}