#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> nums){
int n=nums.size();
int freq=0,ans=0;
for(int i=0;i<n;i++){
    if(freq==0)
    ans=nums[i];
    if(nums[i]==ans){
        freq++;
    }else{
        freq--;
    }
}return ans;
}
int main(){
    vector<int>nums={2,2,1,1,1,2,2};
    int result=majorityElement(nums);
    cout<<"The majority element is: "<<result<<endl;
    return 0;
}