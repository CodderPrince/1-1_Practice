#include <stdio.h>

int main() {
    int a = 1, c = 0;
    
    do {
        if (a % 2 == 0) {
            c++;
            a++;
        }
        
        if (c == 30)
            break;
            
    } while (a <= 100);
    
    printf("c is: %d", c);
    
    return 0;
}
