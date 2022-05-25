#include<iostream>
#include<string>
using namespace std;

struct Node
{
    char data;
    Node *next;
};


//Queue
class Queue
{
    private:
         Node* front;
         Node* rear; 
         Node* temp;
    public:
        Queue();
        void enQueue (char val); 
        char dequeue (); 
        void displayQueue();
        char topDisplay ();
};
Queue :: Queue()
{
    front = NULL;
    rear = NULL;
}
void Queue ::  enQueue (char val) 
{
        if (rear == NULL) 
        {
            rear = new Node;
            rear -> next = NULL;
            rear -> data = val;
            front = rear;
        }
        else 
        {
            temp = new Node;
            rear -> next = temp;
            temp -> data = val;
            temp -> next = NULL;
            rear = temp;
        }
}

void Queue :: displayQueue()
{
        temp = front;
        if ((front == NULL) && (rear == NULL))
            cout<<"Queue is empty"<<endl;
        else 
        {
            while (temp != NULL) 
            {
                cout<<temp -> data << " ";
                temp = temp -> next;
            }
            cout<<endl;
        }
    }
char Queue :: dequeue ()
{
        temp = front;
        char deletedData;
        if (front == NULL)
        cout<<"Queue is empty!!" << endl;
        else if (temp->next != NULL) 
        {
            temp = temp->next;
            deletedData = front -> data;
            delete (front);
            front = temp;
        }
        else 
        {
            deletedData = front->data;
            delete (front);
            front = NULL;
            rear = NULL;
        }
        return deletedData;
    }
    
char Queue :: topDisplay ()
{
        temp = front;
        char topData == NULL;
        if (front == NULL)
        cout<<"Queue is empty!!" << endl;
        else 
            topData = front -> data;
        return topData;
    }


int main()
{
    Queue q;
    string s = "zhYauc@MapaOwp!";
    int size = 0;
    
    for(int i = 0; i <= s.length; i++){
        for(int j = 0; j <= size; j++){
            if(q.topDisplay() == NULL)
                q.dequeue(s[i]);
            else if(){
                
            }        
        }
        
        
    }
    
}
