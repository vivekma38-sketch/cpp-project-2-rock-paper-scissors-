#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int arr[n]={10,-20,30,40,-50};
    int max_sum=INT32_MIN;
    int curr_sum=0;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        max_sum=max(max_sum,curr_sum);
        
        if(curr_sum<0){
            curr_sum=0;
        
        }
    }
    cout<<"Maximum subarray sum is: "<<max_sum<<endl;
    return 0;
}