#include <iostream>

int main() 
{
    // Ensure that int is at least 4 bytes
    // General syntax: static_assert(constant-expression, "error message");
    static_assert(sizeof(int) >= 4, "int must be at least 4 bytes");
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    return 0;
}