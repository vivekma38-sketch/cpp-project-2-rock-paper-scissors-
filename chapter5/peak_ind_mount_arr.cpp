#include<iostream>
#include<vector>
using namespace std;
int PeakIndexInMountainArray(const vector<int>& arr){
    int st=1;
    int end=arr.size()-2;
    while(st<end){
        int mid=st+(end-st)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]<arr[mid-1]){
            return mid;
        }
        if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){
            st=mid+1;
        }else{
            end=mid-1;
        }

    }return st;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements in mountain order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int peakIndex = PeakIndexInMountainArray(arr);
    cout<<"Peak index is "<<peakIndex<<endl;

    return 0;
}