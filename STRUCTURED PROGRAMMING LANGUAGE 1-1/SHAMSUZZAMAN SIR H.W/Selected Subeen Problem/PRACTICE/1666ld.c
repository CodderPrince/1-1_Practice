#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d",&t);
getchar();
while(t--){
 char str1[1001],str2[1001];
   int i,j=0;
  gets(str1);

for(i=0;i<strlen(str1);i++){
  if(str1[i]!=' '){
    str2[j]=str1[i];
    j++;
  }
  else if(j>0){
    str2[j]='\0';
    strrev(str2);
    printf("%s ",str2);
    j=0; }
    else
    { 
        printf(" ");

    }
     }
    if(j>0){
        str2[j]='\0';
        strrev(str2);
        printf("%s ",str2);
        j=0;
    }
    printf("\n");
}
  return 0;


}
