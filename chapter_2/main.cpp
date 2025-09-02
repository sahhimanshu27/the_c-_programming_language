#include <iostream>  // Required for input/output (std::cout, std::endl)

// Calculate the square of a number
// Marked as constexpr so it can be evaluated at compile time if the input is known at compile time
constexpr double square(double x) {
    return x * x;
}

// Print the square of a number to the console
void print_square(double x) {
    std::cout << "The square of " << x << " is " << square(x) << std::endl;
}

// Demonstrates the use of const, constexpr, and compile-time expressions
void constants_example() {
    const int dmv = 17;           // 'const' means the value cannot change (but not guaranteed compile-time)
    int var = 17;                 // Regular integer (mutable)

    // 'constexpr' ensures this expression is computed at compile time if possible
    constexpr double max1 = 1.4 * square(dmv);  
    
    // Print the computed constant
    std::cout << "max1: " << max1 << std::endl;
}

// Demonstrates the char pointer and counting occurrences of a character in a string
int count_x(char* p, char x){
    // Count occurrences of character x in the string pointed to by p
    int count = 0;
    if (p == nullptr) return 0; // Handle null pointer
    
    while (*p != '\0') {
        if (*p == x) {
            count++;
        }
        p++;
    }
    return count;
}

// Print the result of counting a character in a string
void char_pointer_example() {
    char str[] = "Hello, World!";
    std::cout << "In string : " << str << " l " << "occurs " << count_x(str, 'l') << " times" << std::endl;
}

// Main function: program execution starts here
int main() {
    // Demonstrate the square function with runtime values
    print_square(5.0);
    print_square(10.123);

    // Show constants and constexpr usage
    constants_example();

    // Show char pointer usage
    char_pointer_example();

    return 0; // Indicate successful execution
}
