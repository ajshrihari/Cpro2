#include <stdio.h>
#include<math.h>     
#define LIMS 5000010
int pri[LIMS];
int main()
{
    int t,i,j,m,n;
    long long int sum;
    
    int z = 1;
    pri[0]=0;
    pri[1]=0;
    for (i=2;i<LIMS;i++)
    
        pri[i]=1;
    for (i=2;i<=sqrt(LIMS);i++)
    
    
        if (pri[i])
        
            for (j=i;i*j<LIMS;j++)
                pri[i*j]=0;
    
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d %d",&m,&n);
        for(i=m;i<=n;i++)
        {
            if(pri[i]==1)
            {
                sum=sum+i;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}   
