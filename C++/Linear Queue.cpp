#include<bits/stdc++.h>
using namespace std ;
int main(){
int s , rear=-1 , fr=-1;
cout<<"Enter The Size of Queue : ";
cin>>s;
int a[s];
while(1){
    cout<<"\n\nType..\n1 to enqueue\n2 to dequeue\n3 to check if the queue is Empty\n4 to check the queue is Full\n5 to print the queue\n0 to exit\n";
    int o ;
    cin>>o;
    if(o == 1){
        if(rear==s-1){
            cout<<"Over Flow";
        }
        else {
            rear ++;
            fr = 0 ;
            cout<<"Enter The Value You Want to Enqueue : ";
            cin>>a[rear];
        }
    }
    else if(o==2){
        if(fr == -1 || fr == rear+1){
            cout<<"Under Flow";
        }
        else{
            a[fr]==0;
            fr++;
            cout<<"Value of "<<a[fr]<<"Deleted";
        }
    }
    else if(o==3){
        if(fr == -1){
            cout<<"Queue is Empty";
        }
        else {
        cout<<"Queue is not Empty";
    }
    }
    else if(o==4){
        if(rear == s - 1){
            cout<<"Queue is Full";
        }
        else{
            cout<<"Queue Is not Full";
        }
    }
    else if(o==5){
        for(int i = fr ; i <= rear ; i++ ){
            cout<<a[i]<<"\n";
        }
    }
    else if(o==0){
        break ;
    }
    else{
        cout<<"Command is Wrong";
    }



}

}



