#include <bits/stdc++.h>
using namespace std;

struct Queue {
    stack<int> s1, s2;
    // Add an item to the queue
    void enQueue(int x)
    {
        // Push item into the first stack (s1)
        s1.push(x);
    }
    // Remove an item from the queue
    int deQueue()
    {
        // If both stacks are empty, then exit
        if (s1.empty() && s2.empty()){
            cout << "Q is empty";
            exit(0);
        }

        // If second stack (s2) is empty, move elements from first stack (s1) to second stack (s2)
        if (s2.empty()) {
            while (!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        // Return the top item from secodn stack (s2)
        int x = s2.top();
        s2.pop();
        return x;
    }
    void sizeQueue()
    {
        cout<<"Size of the Queue: "<<s1.size()+s2.size()<<endl;
    }
};

int main()
{
    Queue q;
    int x, data;
    char ch;
    do
    {
    cout<<"\t Main Menu \n";
    cout<<"\t 1. Insertion to Queue \n";
    cout<<"\t 2. Deletion from Queue \n";
    cout<<"\t 3. Size of Queue\n";
    cout<<"\t 4. Quit \n";
    cout<<"Enter your choice: ";
    cin>>x;
    switch(x)
    {
        case 1: cout<<"Enter the value to be inserted in Queue: ";
                cin>>data;
                q.enQueue(data);
                break;
        case 2: cout<<"The deleted element is: "<<q.deQueue()<<endl;
                break;
        case 3: q.sizeQueue();
                break;
        case 4: exit(0);
        default: cout<<"Wrong Choice Entered\n";
    }
    cout<<"Do you want to go to the main menu (y/n): ";
    cin>>ch;
    }
    while(ch=='Y'||ch=='y');
    return 0;
}
