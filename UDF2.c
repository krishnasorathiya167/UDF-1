#include<stdio.h>

void division(int x)
{
	if(x%3==0 && x%5==0)
	{
		printf("3 And 5 Both Are Divisible.");
	}
	else
	{
		printf("3 And 5 Both Are Not Divisible.");
	}
}

void main()
{
	int n;
	printf("Enter Value N = ");
	scanf("%d",&n);
	division(x);
}