//
//  main.cpp
//  assignment 3
//
//  Created by Youssef Ibrahim on 10/16/22.
//

#include <iostream>
#include <vector>
#include "linkedList.h"

using namespace std;

linkedlist linkedlistbasedonvector(vector<int> vec)
{
    linkedlist fromvec;
    for(int i=0;i<vec.size();i++)
    {
        if(fromvec.find(vec[i])!=true)
            fromvec.add(vec[i]);
    }

    return fromvec;
}
void insertafter(int x,int y,vector<int> &vec)
{
    for (int i=0;i<vec.size();i++)
    {
        if(vec[i]==x)
        {
            vec.insert((vec.begin()+i+1),y);
        }
    }
}

int main()
{
    vector <int> vec;
    int n;
    cout<<"enter number of element in the vector\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int f;
        cout << "enter " << i+1 << " element" << endl;
        cin >>f;
        vec.push_back(f);
    }
    int firstvalue,secondvalue;
    cout << "insert first and second value";
    cin >> firstvalue >> secondvalue;
    insertafter(firstvalue,secondvalue,vec);
    
    cout << "-----------\n";
    linkedlist linked;
    linked.add(5);
    linked.add(6);
    linked.add(7);
    linked.add(8);
    linked.add(9);
    linked.add(10);
    linked.remove(3);
    linked.print();
    cout << linked.sum() << endl;
    cout << "-----------\n";
    
    for (int i=0;i<vec.size();i++)
    {
        cout << vec[i] << endl;
    }
    cout << "\n\n\n\n\n\n";
    
    linkedlist fromvec=linkedlistbasedonvector(vec);
    fromvec.print();
    
    return 0;
}
