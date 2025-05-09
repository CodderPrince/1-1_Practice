long long int pascal[51][51];
int i,j;
pascal [1][0]=1;
pascal[2][0]=1;
pascal[2][1]=1;
for(i=3; i<=10; i++)
{
    pascal[i][0]=1;
    for(j=1; j<i-1; j++)
    {
        pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];

    }
    pascal[i][j]=1;
}