#include <stdio.h>
#include <stdlib.h>
int prime(int n)
{
	int i;
	for (i=2;i<n;i++)
	{
		if (n%i==0)
		{
			return 0;
			
		}
	
	return 1;
	}
	
	
}
int main()
{
	int T;
	
	scanf("%d",&T);
	int N=T;
	int sumlist[T];
	int sum=0;
	int n,m;
	while(T>0)
	{
		int i;
		scanf("%d %d",&n,&m);
		for ( i=n; i<=m;i++)
		{
			if(prime(i)==1)
			{
				sum+=i;
			}
		}
		sumlist[T]=sum;
		
		T--;
		
	}
	
	
	int j;
	for ( j= 0;j<N;j++ )
	printf("%d",sumlist[j]);
	return 0;
}

