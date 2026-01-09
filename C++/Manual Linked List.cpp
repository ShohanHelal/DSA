#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void beginsert()
{
    struct node *tem;
    int val;
    tem = new node;
    cout<<"Enter the value...\n";
    cin>>val;
    tem->data = val;
    tem->next = head;
    head = tem;
    cout<<"Value Inserted!!!";
}

void insertAtTheEnd()
{
    struct node *newNode = new node;
    struct node *tem = new node;
    tem = head;
    while(tem->next!=NULL)
    {
        tem = tem->next;
    }
    cout<<"Enter the Value...\n";
    int val;
    cin>>val;
    newNode->data=val;
    newNode->next=NULL;
    tem->next=newNode;
    cout<<"Value Inserted!!!";
}

void insertAnyMid()
{
    if (head == NULL)
    {
        cout << "Creating first node.\n";
        head = new node;
        cout << "Enter value: ";
        cin >> head->data;
        head->next = NULL;
        return;
    }

    int counter = 0;
    struct node *tem = head;
    while (tem != NULL)
    {
        counter++;
        tem = tem->next;
    }

    cout << "Enter the place: ";
    int pal;
    cin >> pal;

    cout << "Enter the value: ";
    int val;
    cin >> val;

    if (pal > counter + 1 || pal <= 0)
    {
        cout << "Not a valid place";
        return;
    }

    struct node *newNode = new node;
    newNode->data = val;

    if (pal == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        tem = head;
        for (int i = 1; i < pal - 1; i++)
        {
            tem = tem->next;
        }
        newNode->next = tem->next;
        tem->next = newNode;
    }

    cout << "Value Inserted\n";

}
void deleteHead()
{
    if(head==NULL)
    {
        cout<<"List is empty";
        return ;
    }

    struct node *tem = head;
    head = tem->next;
    tem->data = NULL;
    delete tem;
    cout<<"Head has been Deleted";
}
void deleteEnd()
{
    struct node *tem = head;
    struct node *pre = head;
    int counter = 0;
    while(tem->next!=NULL)
    {
        counter++;
        tem = tem->next;
    }
    for(int i = 1 ; i<counter ; i++ )
    {
        pre = pre->next;
    }
    pre->next = NULL;
    delete tem;
    cout<<"end has been Deleted";
}
void deleteAny()
{

    struct node *tem = head;
    struct node *pre = head;
    int pos, counter = 0;
    cout<<"Enter Position";
    cin>>pos;
    while(tem->next!=NULL)
    {
        counter++;
        tem = tem->next;
    }
    if(pos>counter)
    {
        cout<<"Invalid position";
    }
    tem = head;
    for(int i = 1 ; i<=pos-1 ; i++ )
    {
        tem = tem->next;
    }
    for(int i = 1 ; i<pos-1 ; i++ )
    {
        pre = pre->next;
    }

    pre->next = tem->next;
    delete tem;


}
void display()
{


    struct node *tem;
    tem = head;
    while(tem != NULL )
    {
        cout<<tem->data<<"\t"<<tem->next<<"\n";
        tem = tem ->next;
    }
}

int main()
{
    int choice=0;
    int menu = 1;
    while(menu)
    {
        cout<<"\n\n*********Main Menu*********\n";
        cout<<"\nChoose one option from the following list ...\n";
        cout<<"\n===============================================\n";
        cout<<"\n1.Insert in Beginning\n2.Show\n3.Insert in the End\n4.Insert Anywhere in Middle\n5.Delete Head\n6.Delete End\n7.Delete from any place\n0.Exit\n";
        cout<<"\nEnter your choice....\n";
        cin>>choice;
        switch(choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            display();
            break;
        case 3:
            insertAtTheEnd();
            break;
        case 4:
            insertAnyMid();
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
            break;

        default:
            cout<<"Please enter valid choice...";
        }
    }
    return 0;
}
