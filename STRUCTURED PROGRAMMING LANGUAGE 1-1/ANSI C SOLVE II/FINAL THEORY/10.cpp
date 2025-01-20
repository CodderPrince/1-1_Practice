// slack byte

#include <iostream>
#include <stddef.h>

using namespace std;

struct s
{
    char a;
    char b;
    int c;
};

int main()
{
    struct s p;
    cout << "Total memory used in(bytes): " << sizeof(p) << endl;
    return 0;
}