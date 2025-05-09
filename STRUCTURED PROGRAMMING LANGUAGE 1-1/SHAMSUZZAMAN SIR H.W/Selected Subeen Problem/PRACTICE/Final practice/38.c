#include<stdio.h>
#include<string.h>
int main(){
int t,i,n,count;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
        if(count==0 && n>1){
        printf("%d is a prime number ",n);
}else{
printf("%d is not a prime number ",n);
}
}
    return 0;

}





