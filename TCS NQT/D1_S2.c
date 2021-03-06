#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	if(n>=1 && n<=2000)
	{
		printf("Time Estimated : 25 minutes");
	}
	else if(n>=2000 && n<=4000)
	{
		printf("Time Estimated : 35 minutes");
	}
	else if(n>=4000 && n<=7000)
	{
		printf("Time Estimated : 45 minutes");
	}
	else if(n == 0)
	{
		printf("Time Estimated : O minutes");
	}
	else
	{
		printf("Invalid Output");
	}
}
