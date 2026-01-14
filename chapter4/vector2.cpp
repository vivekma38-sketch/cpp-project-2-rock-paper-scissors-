#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec(4,1);
    vec.push_back(5);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}