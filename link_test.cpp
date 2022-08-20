#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    //float cgpa;
    struct node *next;
}*head;
void createlist(int n)
{
    struct node *newnode,*current;
    int value,i;
    head = (struct node*)malloc(sizeof(struct node));
    if (head == NULL){
        cout<<"Memory is full"<<endl;
    }
    else {
        cout<<"Enter first value of list"<<endl;
        cin>>value;
        head->data = value;
        head->next = NULL;
        current = head;
        for (i=1;i<n;i++){
            newnode = (struct node*)malloc(sizeof(struct node));
            cout<<"Enter value "<<i+1<<endl;
            cin>> newnode->data;
            newnode->next = NULL;
            current->next = newnode;
            current = newnode;
        }
    }
}
void display ( )
{
    struct node *current;
    current=head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current = current->next;
    }
}
int main ()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    createlist(n);
    cout<<"Data in the list are: "<<endl;
    display();
    return 0;
}
