//betwise operators
#include <iostream>
using namespace std;    
int main(){
    int a = 5;      // In binary:  0101
    int b = 3;      // In binary:  0011

    cout << "a = " << a << ", b = " << b << endl;

    // Bitwise AND
    cout << "a & b = " << (a & b) << endl; // Result: 1 (0001)

    // Bitwise OR
    cout << "a | b = " << (a | b) << endl; // Result: 7 (0111)

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl; // Result: 6 (0110)

    // Bitwise NOT
    cout << "~a = " << (~a) << endl;       // Result: -6 (inverts bits)

    // Left Shift
    cout << "a << 1 = " << (a << 1) << endl; // Result: 10 (1010)

    // Right Shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Result: 2 (0010)

    return 0;
}