#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of arr : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter the element to be searched : ";   
    cin>>key;
    //linear search
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"Element found at index :"<<i<<endl;
            return 0;
        }
    }

    return 0;
}