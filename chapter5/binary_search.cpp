#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements in sorted array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to be searched";
    cin>>key;
    //linear search
    // for(int i=0;i<n;i++){
    //     if(arr[i]==key){
    //         cout<<"Element found at index "<<i<<endl;
    //         break;
    //     }
    //     if(i==n-1){
    //         cout<<"Element not found"<<endl;
    //     }
    
    //binary search
    int left=0; 
    int right=n-1;
    bool found=false;   
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==key){
            cout<<"Element found at index "<<mid<<endl;
            found=true;
            break;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }

    if(!found){
        cout<<"Element not found"<<endl;
    }

    return 0;
}