#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cout<<"Enter the Size of the array : ";
cin>>n;
int a[n],i,high,low,mid;
for(i=0;i<n;i++){
    cin>>a[i];
}
high = a[0];
for(i=0;i<n;i++){
    if(a[i]>high){
        high = i;
    }
}
low = a[0];
for(i=0;i<n;i++){
    if(a[i]<low){
        low = i;
    }
}
int y ;
cout<<"Enter The Number You Searching : ";
cin>>y;
while(1){

    mid =( high + low ) / 2 ;
    if(a[mid]<y){
        low = a[mid] ;
    }
    else if(a[mid]>y){
        high = a[mid] ;
    }
    else if(a[mid] == y){
        cout<<"You Number is in "<<mid;
        break;
    }


}

}
