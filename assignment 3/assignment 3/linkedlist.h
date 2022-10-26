//
//  linkedlist.h
//  assignment 3
//
//  Created by Youssef Ibrahim on 10/16/22.
//

#ifndef linkedlist_h
#define linkedlist_h

#include <iostream>
#include <vector>

using namespace std;

struct node
{
    int value;
    int occurences=1;
    node* next=NULL;;
};

class linkedlist
{
    int NOE=0;
    node* t;
    node* head=NULL;
    //node* end=h;
public:
    linkedlist(){};
    void add(int data)
    {
        node*temp=head;
        t=new node;
        t->value=data;
        t->next=NULL;
        if (head==NULL)
        {
            head=t;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=t;
        }
        NOE++;
            
    }
    bool find(int x)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            if(temp->value==x)
            {
                temp->occurences++;
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    void remove(int n)
    {
        node* temp=head;
        node* lagging=NULL;
        int t=1;
        while(t!=n)
        {
            lagging=temp;
            temp=temp->next;
            t++;
        }
        lagging->next=temp->next;
        delete temp;
        NOE--;
        
    }
    void print()
    {
        node* p=head;
        while(p!=NULL)
        {
            cout << p->value << " ("<< p->occurences << ")"<< endl;
            p=p->next;
        }
    }
    int sum()
    {
        int sum=0;
        node* p=head;
        while(p!=NULL)
        {
            sum+=p->value;
            p=p->next;
        }
        
        return sum;
    }

};


#endif /* linkedlist_h */
