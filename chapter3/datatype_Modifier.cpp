#include <iostream>
using namespace std;
int main() {
    const int constVar = 10;
    volatile int volatileVar = 20;
    static int staticVar = 30;
    register int registerVar = 40;

    cout << "Constant Variable: " << constVar << endl;
    cout << "Volatile Variable: " << volatileVar << endl;
    cout << "Static Variable: " << staticVar << endl;
    cout << "Register Variable: " << registerVar << endl;

    // Modifying volatile variable to demonstrate its use
    volatileVar += 5;
    cout << "Modified Volatile Variable: " << volatileVar << endl;

    return 0;
}