#include<stdio.h>
#include<math.h>

int main()
{
	unsigned long int n,a,i,sum=0,j,x,m;
	int t;
	scanf("%d", &t);
	for(i=0;i<t;i++)
        {
		scanf("%llu", &n);
		sum=0;
		for(j=1;j<n;j++){
			if((n%j)==0){
				sum = sum+j;
			}
		}
		if(sum==n)
		{
			printf("YES, %llu is a perfect number!\n",n);
		}
		else
		{
		   printf("NO, %llu is not a perfect number!\n",n);
		}

	}
}
