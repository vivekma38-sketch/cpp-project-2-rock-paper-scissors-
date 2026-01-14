#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={3,-4,5,4,-7};
    int max_sum=INT32_MIN;
    for(int st=0;st<n;st++){
        int curr_sum=0;
        for(int end=st;end<n;end++){
            curr_sum+=arr[end];
            max_sum=max(max_sum,curr_sum);


    }
}
    cout<<"Maximum subarray sum is: "<<max_sum<<endl;
    return 0;
}