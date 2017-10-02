#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int a[5000005];
 
int main() {
 
    
	   
    int T, N, M, i, j, flag, k;
    long long int count;
    scanf("%d", &T);
    for(k=0;k<5000005;k++){
        a[k]=0;
    }
    for(k=2;k<2240;k++){
        if(a[k]!=1){
            for(j=k*k;j<=5000000;j+=k){
                a[j]=1;
            }
        }
    }
    int i;
    for(i=2; i<=5000000; i++)
	{
		if(prime[i]==1)
			cum[i]=cum[i-1]+i;
		else cum[i]=cum[i-1];
	}
    
    while(T--){
        count=0;
        scanf("%d %d", &N, &M);
        if(N==1)
            N++;
        for(i=N;i<=M;i++){
            if(a[i]==0){
                count+=i;
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}
 
