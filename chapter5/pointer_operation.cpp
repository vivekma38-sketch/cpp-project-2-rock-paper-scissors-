#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int*ptr2;
    int*ptr1=ptr2+2;
    cout<<ptr1-ptr2<<endl; //output:2
    cout<<(ptr1<ptr2)<<endl; //output:0
    cout<<(ptr1>ptr2)<<endl; //output:1
    return 0;
}