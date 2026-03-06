#include<bits/stdc++.h>
using namespace std;
int ternarySearch(int arr[],int l,int h,int key){
int mid1=l+((h-l)/3);
int mid2=h-((h-l)/3);

if(arr[mid1]==key){
    return mid1;
}
else if(arr[mid2] == key){
    return mid2;
}
else if(arr[mid1]>key){
    ternarySearch(arr,l,mid1-1,key);
}
else if(arr[mid2]<key){
    ternarySearch(arr,mid2+1,h,key);
}
else if(key>arr[mid1] && key < arr[mid2]){
    ternarySearch(arr,mid1+1,mid2-1,key);
}
}
int main(){
int n;
cout<<"Enter The Size of the Array : ";
cin>>n;
int arr[n];

cout<<"Enter the Values Of the Array : ";
for(int i=0 ; i < n ; i++ ){
    cin>>arr[i];
}
cout<<"Enter the Target value : ";

int key;
cin>>key;
int flag = ternarySearch(arr,arr[0],arr[n-1],key);
if(flag !=-1){
    cout<<"The key value found in = "<<flag;
}
return 0;
}
