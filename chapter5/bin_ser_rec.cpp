#include<iostream>
#include<vector>
using namespace std;
int binarySearch(const vector<int>& arr, int st, int end, int key){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            return binarySearch(arr,mid+1,end,key);
        }
        else{
            return binarySearch(arr,st,mid-1,key);
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements in sorted order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to be searched: ";
    cin>>key;

    int result = binarySearch(arr, 0, n-1, key);
    if(result != -1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}