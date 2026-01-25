#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr; //array name as pointer
    for(int i=0;i<5;i++){
        cout<<"Value at index "<<i<<" : "<<*(p+i)<<endl;
    }
    return 0;
}