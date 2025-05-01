 #include<stdio.h>
 int main()
 {
     int T ;
     scanf("%d",&T);
     while(T--)
     {
         int i,num;
         long long int factorial=1;
         scanf("%d",&num);
         for(i=2 ; i<=num ; i++)
         {
             factorial=factorial*i;
         }
         printf("%lld",factorial);
         printf("\n");
     }
     return 0;
 }
