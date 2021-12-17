#include<iostream>


using namespace std;

class Node
{
    public:
        int data;
        Node *next;


        Node()
        {
            data = 0;
            next = NULL;
        }

};

class LinkedList
{
    public:
        Node *head, *new_node, *temp;
        
        LinkedList()
        {        
            head = new_node = temp = 0;
        }

        void create()
        {
            int i=1;
            while(true)
            {
                new_node = new Node;
                cout<<"\nEnter (Node "<<i<<") Data: ";
                cin>>new_node->data;
                new_node->next = 0;
                i++;
                if(head == 0)
                {
                    head = temp = new_node;
                }
                else
                {
                    temp->next = new_node;
                    temp = new_node;
                }
                
                cout<<"\nTo add another node press 1:  ";
                int ch;
                cin>>ch;

                if(ch!=1)
                {                    
                    break;
                }
            }
            clear(new_node,temp);   
        }
        
        void traverse()
        {
            int i = 1;
            temp = head;
            while(temp!=0)
            {
                cout<<"Node "<<i<<": "<<temp->data<<endl;
                temp = temp->next;
                i++;
            }
            clear(0,temp);
        }
        
        void insert()
        {
            int i = 1;
            temp = head;
            while(temp->next!=0)
            {
                temp = temp->next;
                i++;
            }
    
            new_node = new Node;
            cout<<"\nEnter (Node "<<i+1<<") Data: ";
            cin>>new_node->data;
            new_node->next = 0;
            temp->next = new_node;
            
            clear(new_node,temp);
        }
        
        
        void clear(Node *new_node = 0, Node *temp = 0)
        {
            new_node = 0;
            temp = 0;
        }
};


int main()
{
    int ch;
    LinkedList LL;
    LL.create();
    while(true)
    {
        cout<<"\n\t Operations\n";
        cout<<"1. Traverse"<<endl;
        cout<<"2. Insert"<<endl;
        cout<<"(Press any numbers except (1,2,3) to exit)"<<endl;
        cout<<"Operation: ";
        cin>>ch;
        cout<<endl;
        
        switch(ch)
        {
            case 1:
                    LL.traverse();break;
            case 2:
                    LL.insert();break;
            default:
                    exit(0);
        }
    }
  return 0; 
}
