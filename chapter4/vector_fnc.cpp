#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vec={'a','b','c','d'};
    cout<<"size="<<vec.size()<<endl;
    vec.push_back('e');//adds element at the end
    cout<<"After push_back size="<<vec.size()<<endl;
    for(char val :vec){
        cout<<val<<" ";
    }
    vec.pop_back();//removes last element
    cout<<endl<<"After pop_back size="<<vec.size()<<endl;
    for(char val :vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<vec.front()<<endl; //first element
    cout<<vec.back()<<endl;  //last element
    cout<<vec.at(2)<<endl; //element at index 2

    return 0;
}
