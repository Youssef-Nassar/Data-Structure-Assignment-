#include<iostream>
#include<string>
#include<bits/stdc++.h>
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
  Node * front;
  Node *rear;
  Node *temp;
public:
    Queue ();
  void enQueue (char val);
  char dequeue ();
  void displayQueue ();
  char topDisplay ();
};
Queue::Queue ()
{
  front = NULL;
  rear = NULL;
}

void
Queue::enQueue (char val)
{
  if (rear == NULL)
    {
      rear = new Node;
      rear->next = NULL;
      rear->data = val;
      front = rear;
    }
  else
    {
      temp = new Node;
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
    }
}

void
Queue::displayQueue ()
{
  temp = front;
  if ((front == NULL) && (rear == NULL))
    cout << "Queue is empty" << endl;
  else
    {
      while (temp != NULL)
	{
	  cout << temp->data << " ";
	  temp = temp->next;
	}
      cout << endl;
    }
}

char
Queue::dequeue ()
{
  temp = front;
  char deletedData;
  if (front == NULL)
    cout << "Queue is empty!!" << endl;
  else if (temp->next != NULL)
    {
      temp = temp->next;
      deletedData = front->data;
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

char
Queue::topDisplay ()
{
  temp = front;
  char topData;
  if (front == NULL)
    cout << "Queue is empty!!" << endl;
  else
    topData = front->data;
  return topData;
}




int main (){
    Queue q;
    string s = "zhYauc@MapaOwp!";
    const int SIZE = s.length();
    string sUp;

    for(int i=0; i<SIZE; i++)
        sUp += toupper(s[i]);
        
    sort(sUp.begin(), sUp.end());

    for (int j=0; j < SIZE; j++)
        q.enQueue (toupper(sUp[j]));
    
    
    for (int k = 0; k < SIZE; k++)
        cout << q.dequeue();
}
