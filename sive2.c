    #include<stdio.h>
     //sieve of eratosthenes
    long long int arr[5000005];
    int main()
    {
       
       long long int t;
       
    arr[0]=1;
    arr[1]=1;
   
      long long int i=2;
      long long int j;
      while( i<2250)
    {   if(arr[i]==0)
        for( j=i*i;j<=5000005;j+=i)
	{
        arr[j]=1;
	}
	i++;
    }
    scanf("%lld",&t);
    while(t--)
    { long long int s=0;
	    long long int m;
	    long long int n;
            
	    long long int j;
    scanf("%lld %lld",&n,&m);
    for( j=n;j<=m;j++)
    if(arr[j]==0)
    {
    s+=j;
    }
    printf("%lld \n",s);
    }
    return 0;
    }   
