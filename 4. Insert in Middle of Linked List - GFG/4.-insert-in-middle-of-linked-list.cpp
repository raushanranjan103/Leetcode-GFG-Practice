// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
int len(Node * head){   //function to get the length of linked list 

    Node* temp = head;
    int c= 0;
    while(temp!= NULL){
        
        temp = temp->next;
        c++;
    }
    return c;
}
Node* insertInMiddle(Node* head, int x)
{
	int length = len(head);
	if(length%2)
	{
	    length=length/2 +1;
	}
	else
	length=length/2;
	int pos = length/2;
	int i =0;
	Node* temp = head;
for(int i=0;i<length-1;i++)
{
    temp=temp->next;
}
	Node* new_node = new Node(x);
	new_node->next = temp->next;
	temp->next = new_node;

	return head;
}