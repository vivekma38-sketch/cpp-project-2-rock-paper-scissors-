#include<iostream>
using namespace std;
int main(){
    int marks[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;

    }   int sz=sizeof(marks)/sizeof(marks[0]);
    cout<<"Size of array is "<<sz<<endl;
    return 0;
}