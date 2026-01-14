#include<iostream>
#include<vector>
using namespace std;
vector<int>pair_Sum(vector<int> nums,int target){
    vector<int>ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;

} 
int main(){
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>result=pair_Sum(nums,target);
    if(!result.empty()){
        cout<<"Indices of the elements that sum to "<<target<<" are: "<<result[0]<<" and "<<result[1]<<endl;
    }else{
        cout<<"No pair found that sums to "<<target<<endl;
    }
    return 0;
}