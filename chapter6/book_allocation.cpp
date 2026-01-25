#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> &arr,int n,int m,int maxallowedpages){
    int stu=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxallowedpages){
            return false;
        }
        if(pages+arr[i]>maxallowedpages){
            stu++;
            pages=arr[i];
            if(stu>m){
                return false;
            }
        }else{
            pages+=arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> &arr,int n,int m){//O(nlogN*n) N=range of sum of pages
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){//O(n)
        sum+=arr[i];
    }
    int start=0,end=sum,ans=-1;
    while(start<=end){//O(logN)
        int mid=start+(end-start)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
}return ans;
}int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter number of pages in each book: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int m;
    cout<<"Enter number of students: "; 
    cin>>m;
    int result=allocateBooks(arr,n,m);
    if(result==-1){
        cout<<"Allocation not possible"<<endl;
    }else{
        cout<<"Minimum number of pages allocated to a student: "<<result<<endl;
    }
    return 0;
}