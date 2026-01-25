#include<iostream>
#include<vector>
using namespace std;
void changeA(int *a){//pass by ref using pointer
    *a=20;
}
void changeB(int &b){//pass by ref using alias
    b=20;
}
int main(){
    int a=10;
    int b=15;
    changeA(&a);
    cout<<"inside main fn : "<<a<<endl;
    changeB(b);
    cout<<"inside main fn : "<<b<<endl;
    return 0;
}