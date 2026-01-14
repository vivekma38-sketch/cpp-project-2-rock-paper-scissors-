#include<iostream>
using namespace std;
void changeinARR(int a[],int n){
    cout<<"Inside function before change "<<endl;
    for(int i=0;i<n;i++){
        a[i]=a[i]+5;
    }
}

int main(){
    int arr[5]={10,20,30,40,50};
    cout<<"Before function call "<<endl;
    
    changeinARR(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}