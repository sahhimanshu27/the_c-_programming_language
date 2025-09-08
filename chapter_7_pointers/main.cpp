#include <iostream>

void increment(int& value);
void incementWithoutReference(int value);

int main()
{
    int x = 1020;
    int* p = &x; // p is a pointer to an int, initialized to the address of x
    int x2 = *p; // Dereferencing p to get the value of x, which is 0
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of p (address of x): " << p << std::endl;
    std::cout << "Value pointed to by p: " << *p << std::endl; // Dereferencing p to get the value of x
    std::cout << "Value of x2 (dereferenced p): " << x2 << std::endl;

    x2 = 42; // Changing x2 does not affect x
    std::cout << "After changing x2 to 42:" << std::endl;
    std::cout << "Value of x: " << x << std::endl; // x remains 1020

    x = 84; // Changing the value at the address pointed to by p, which changes x
    std::cout << "After changing x to 84:" << std::endl;
    std::cout << "Value of *p: " << *p << std::endl; // x is now 84

    increment(x); // Passing x by reference to increment function
    std::cout << "After incrementing x:" << x << std::endl;

    incementWithoutReference(x); // Passing x by value to increment function
    std::cout << "After incementWithoutReference x:" << x << std::endl; // x remains unchanged

    return 0;
}

void increment(int& value)
{
    value++;
}

void incementWithoutReference(int value)
{
    value++;
}