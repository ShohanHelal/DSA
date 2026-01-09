#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
int counter = 0;
struct node *head = NULL;
void begInsert()
{
    struct node *newNode = new node;
    cout<<"Enter The Value\n";
    int val;
    cin>>val;
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL){
        head->prev = newNode;
    }
    head = newNode;
    cout<<"Value Inserted\n";
    counter++;
    }
void endInsert(){
    if(head==NULL){
    struct node *newNode = new node;
    cout<<"Enter The Value\n";
    int val;
    cin>>val;
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    head = newNode;
    cout<<"Value Inserted\n";
    counter++;
    return ;
    }
    struct node *tem = head;
    while(tem->next!=NULL){
        tem = tem->next;
    }
    struct node *newNode = new node;
    cout<<"Enter The Value\n";
    int val;
    cin>>val;
    newNode->data=val;
    newNode->prev=tem;
    newNode->next=NULL;
    tem->next=newNode;
    cout<<"Value Inserted\n";
    counter++;

}
void insertAnyMid(){
    if(head == NULL){
    struct node *newNode = new node;
    cout<<"Enter The Value\n";
    int val;
    cin>>val;
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;
    head = newNode;
    cout<<"Value Inserted\n";
    counter++;
    return ;
    }
    struct node *tem=head;
    struct node *newNode = new node;
    int pos;
    cout<<"Enter Position\n";
    cin>>pos;
    if(pos>counter){
        cout<<"Invalid Position\n";
    }
    for(int i = 1 ; i<pos-1 ; i++){
        tem = tem->next;
    }
    cout<<"Enter Value\n";
    int val;
    cin>>val;
    newNode->data = val;
    newNode->prev = tem;
    newNode->next = tem->next;
    tem->next = newNode;
    cout<<"Value Inserted\n";
    counter++;
}
void deleteHead(){
    if(head == NULL){
        cout<<"List is empty\n";
        return ;
    }
    struct node *tem = head;
    head = head->next;
    delete tem;
    head->prev=NULL;
    cout<<"Value Deleted\n";
    counter--;

}
void deleteEnd(){
   if(head == NULL){
        cout<<"List is empty\n";
        return ;
    }
    struct node *tem = head;
    struct node *ptem = new node;
    while(tem->next!=NULL){
        tem = tem->next;
    }
    ptem = tem->prev;
    ptem->next = NULL;
    delete tem;
    cout<<"Value Deleted\n";
    counter--;
}
void deleteAny(){
    if(head == NULL){
        cout<<"List is empty\n";
        return ;
    }
    struct node *tem = head;
    struct node *ptem = new node;
    struct node *ntem = new node;
    cout<<"Enter Position\n";
    int pos;
    cin>>pos;
    if(pos>counter){
        cout<<"Invalid Position\n";
        return;
    }
    for(int i = 1 ; i < pos; i++){
        tem = tem->next;
    }
    ptem = tem->prev;
    ntem = tem->next;
    ptem ->next = ntem;
    ntem ->prev = ptem;
    delete tem;
    cout<<"Value Deleted\n";
    counter--;
}

void show(){
    if(head == NULL){
        cout<<"List is empty\n";
        return ;
    }
    struct node *tem = head;
    while(tem!= NULL){
        cout<<tem->data<<"\tPrevious : "<<tem->prev<<"\tNext : "<<tem->next<<"\n";
        tem = tem->next;
    }
}


int main()
{
    int opt;
    int menu = 1;
    while(menu)
    {
        cout<<"\n\n********Main Menu********\n";
        cout<<"choose options From Below\n1.Insert at the Begging\n2.Insert the End\n3.Insert Middle\n4.Show\n5.Delete Head\n6.Delete at the End\n7.Delete from Anyplace\n0.exit\n";
        cout<<"Enter your choice...\n";
        cin>>opt;
        switch(opt)
        {
        case 1:
            begInsert();
            break;
        case 2:
            endInsert();
            break;
        case 3:
            insertAnyMid();
            break;
        case 4:
            show();
            break;
        case 5:
            deleteHead();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deleteAny();
            break;
        case 0:
            menu = 0;
        }
    }
}
