#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

struct Product
{
    int Code;
    float cost;
    int quan;
};

int main()
{
    FILE *file = fopen("products.txt", "w");
    if (file == NULL)
    {
        cout << "Failed to open file\n";
        return 1;
    }
    int n = 3;
    Product produc[n];
    cout << "Enter products details\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << ":\n";
        cout << "Product code: ";
        cin >> produc[i].Code;
        cout << "Cost : $";
        cin >> produc[i].cost;
        cout << "Quantity: ";
        cin >> produc[i].quan;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "Product: %d\n", i + 1);
        fprintf(file, "Product Code: %d\n", produc[i].Code);
        fprintf(file, "Cost: $%.2f\n", produc[i].cost);
        fprintf(file, "Quantity: %d\n\n", produc[i].quan);
    }

    fclose(file);
    cout << "\nWritten successfully!\n\n";

    return 0;
}
