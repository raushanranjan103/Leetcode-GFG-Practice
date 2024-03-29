// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};


 // } Driver Code Ends
/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/



   
class Solution
{
    public:
    vector<int>res1;
vector<int>res2;
    void raushan(Node* r1)
    {
        if(r1!=NULL)
        {
            raushan(r1->left);
            res1.push_back(r1->data);
            raushan(r1->right);
        }
    }
    void ravi(Node* r2)
    {
        if(r2!=NULL)
        {
            raushan(r2->left);
            res1.push_back(r2->data);
            raushan(r2->right);
        }
    }
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
    //     raushan(r1);
    //     ravi(r2);
    //     for(auto i:res1)
    //     cout<<i<<" ";
    //     cout<<endl;
    //     for(auto i:res2)
    //     cout<<i<<" ";
    //     int n=res1.size();
    //     int m=res2.size();
    //     if(n==m)
    //     {
    //     for(int i=0;i<n;i++)
    //     {
    //         if(res1[i]!=res2[i])
    //         {
    //             return false;
    //         }
    //     }
    //     }
    //   return true;
     if(r1==NULL && r2==NULL)
       return true;
       if((r1==NULL&&r2!=NULL)||(r1!=NULL&&r2==NULL))
       return false;
    //   if(r1==NULL || r2==NULL)
    //   return false;
       
       return((r1->data==r2->data) && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right));
        }
};

// { Driver Code Starts.

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string str, str1;
        getline(cin, str);
        Node *rootA = buildTree(str);
        getline(cin, str1);
        Node *rootB = buildTree(str1);
        Solution ob;
        if (ob.isIdentical(rootA, rootB)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}  // } Driver Code Ends