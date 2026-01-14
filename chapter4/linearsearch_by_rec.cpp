#include<iostream>
using namespace std;


int linearSearch(int a[],int n,int key){
    //base case
    if(n==0){
        return -1;
    }
    if(a[0]==key){
        return 0;
    }
    //recursive case
    int subIndex=linearSearch(a+1,n-1,key);
    if(subIndex==-1){
        return -1;
    }
    return subIndex+1;

}
int main(){
    int n;
    cout<<"Enter the size of arr : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter the element to be searched : ";   
    cin>>key;
    int result=linearSearch(a,n,key);
    if(result==-1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"Element found at index : "<<result<<endl;
    }
    return 0;
}  //time complexity: O(n)
   //space complexity: O(n)  
