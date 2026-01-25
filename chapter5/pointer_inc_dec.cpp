#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int a = 10;
    int *p = &a;
    cout << p << endl; // address of a
    p++;               // incrementing pointer
    cout << p << endl; // address of a+4 (assuming int is 4

    p--;               // decrementing pointer
    cout << p << endl; // address of a
    p = p + 2;
    cout << p << endl; // address of a+8
    return 0;
}