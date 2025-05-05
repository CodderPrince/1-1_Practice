#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    
    // Extracting a substring starting from index 7 to the end of the string
    std::string substr1 = str.substr(7);
    std::cout << "Substring 1: " << substr1 << std::endl; // Output: "World!"

    // Extracting a substring starting from index 0 with length 5
    std::string substr2 = str.substr(0, 5);
    std::cout << "Substring 2: " << substr2 << std::endl; // Output: "Hello"

    // Extracting a substring starting from index 7 with length 5
    std::string substr3 = str.substr(7, 5);
    std::cout << "Substring 3: " << substr3 << std::endl; // Output: "World"

    return 0;
}
