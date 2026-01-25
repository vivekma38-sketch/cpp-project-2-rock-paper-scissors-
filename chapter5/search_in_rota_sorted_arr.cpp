#include<iostream>
#include<vector>
using namespace std;
int searchInRotatedSortedArray(const vector<int>& arr,int key){
    int st=0;
    int end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==key){
            return mid;
        }if(arr[st]<=arr[mid]){
            if(arr[st]<=key && key<=arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }else{
            if(arr[mid]<=key && key<=arr[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }return -1;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements in rotated sorted order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to be searched: ";
    cin>>key;

    int result = searchInRotatedSortedArray(arr, key);
    if(result != -1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}   
