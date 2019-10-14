#include<stdio.h>
#include<stdlib.h>
#define M 100

/*
** Program to find n'th term of fibonacci series using Dynamic Programming
** Made by - Abhishek Chand
*/

long F[M];

long fibo(int n)
{
	if(F[n]==-1)
		return F[n]=fibo(n-1)+fibo(n-2);
	return F[n];
}

int main()
{
	int i,n;
	F[0]=0;
	F[1]=1;
	long ans;
	printf("Enter the term to calculate:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		F[i]=-1;
	ans=fibo(n);
	printf("\n%dth term of fibonacci series is %ld",n,ans);
	
	return 0;
}
