#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    int **p1=&p;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<p1<<endl;
    cout<<&p<<endl;
    cout<<**p1<<endl;
    return 0;
}