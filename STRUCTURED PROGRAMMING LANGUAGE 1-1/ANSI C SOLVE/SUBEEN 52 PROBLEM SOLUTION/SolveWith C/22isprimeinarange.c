#include <stdio.h>
int main() {
    int t; // Number of test cases
    scanf("%d", &t); // Read number of test cases
    while (t--) {
        int a, b; // Input a and b for each test case
        scanf("%d %d", &a, &b);
        int count = 0; // Counter for prime numbers
        for (int num = a; num <= b; num++)
        /*jehetu range er moddhe kaj korte hobe tai je number theke start hobe ar je number
        e end hobe ta declare kore dite hobe*/
        {
            int isPrime = 1; // Assume num is prime
            if (num <= 1) 
            {
                isPrime = 0; // 1 is not prime
            }
            /*jehetu 1 prime na and er nicher kono number negative or 0 jegulo prime na*/
            for (int i = 2; i * i <= num; i++) 
            /*condition ta emon kore set kora hoyese minimum number=4 na howa porjonto ei loop
            kaj korbe na karon i*i= 2*2=4 er soman hote hobe or tar theke boro hote hobe taholei 
            ei loop ta kaj korbe ar ei loop e kintu i er man 1 kore increase kora hobe ar majhe ekta
            n=9 
            1. 9/2!=0 tahole check korbe 2x2=4<9 then i=3
            2. 9/3==0*/
            {
                if (num % i == 0) {
                    isPrime = 0; // num is not prime
                    break;
                }
            }
            count = count + isPrime; // Add 1 if current number is prime
        }

        printf("%d\n", count); // Print count for each test case
    }

    return 0;
}
