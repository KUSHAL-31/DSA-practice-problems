#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
    int sum=0;
    int count=1;

    void insert(node*&head,int val){
        node*n = new node();
        n->data=val;
        n->next=NULL;
        if(head==NULL){
        head = n;
        return;
        }
        n->next=head;
        head = n;
    }

    void print(node*head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    int addElelements(node*head){
        if(head==NULL){
            return 0;
        }
        node*temp=head;
        while (temp!=NULL)
        {
            sum+=temp->data*pow(10,count-1);
            count++;
            temp=temp->next;
        }
        return sum;   
    }
};

using namespace std;
int main(){
    node*head1=NULL;
    node n1;
    n1.insert(head1,3);
    n1.insert(head1,4);
    n1.insert(head1,2);
    int t1 = n1.addElelements(head1);
    // cout<<endl;

    node n2;
    node*head2=NULL;
    n2.insert(head2,4);
    n2.insert(head2,6);
    n2.insert(head2,5);
    int t2 = n2.addElelements(head2);

    cout<<t1+t2<<endl;
    return 0;
}