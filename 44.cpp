//linear data type jo ki collection of nodes se bnta hai
//node is type of encapsulation which include data type,function etc
//node contain a data and address of next node
//why linked list--> 10 ke size ke array ko run time ke dauran change nhi kr skte ki isko 100 size ka array bana do
//but in vector(dynamic array) me 5 ke size la array full ho jane ke baad vo apna size double kr deta hai,but it is not optimal
//linked list is dynamic data structure
//it will grow nd shrink array on run time
//apki memory wastage nhi ho rhi
//yaha insertion nd deletion me array ko shift nhi krna hota
//type of linked list single,doubly,circular,circular doubly linked list


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
// };
// int main(){
//     node *node1= new node();
//     cout<<node1->data<<endl;
//     cout<<node1-> next<<endl;
//     return 0;
// } 


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){ 
//         this->data=data;
//         this->next=NULL;
//     }
// };
// int main(){
//     node* node1= new node(10);
//     cout<<node1->data<<endl;
//     cout<<node1-> next<<endl;
//     return 0;
// } 


//singly linked list
//jaha apne pass sirf ek single pointer hota haizage jane ke liye next pointer hota hai aur ek data stored kr shkte hai iss prakar ke list ko single linked list bolte hai
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// int main(){
//     node* node1= new node(10);
//     cout<<node1 -> data<<endl;
//     cout<<node1-> next<<endl;
//     return 0;
// }



//insertion
#include<iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
//constructor
Node (int data) {
this->data = data;
this->next = NULL;
}
};
void insertAtHead (Node* &head, int d) {
// new node create
Node* temp = new Node (d);
temp->next = head;
head = temp;
}

void print (Node* &head) {
Node* temp = head;
while(temp != NULL) {
cout << temp -> data<< " ";
temp = temp ->next;
}
cout << endl;
}
int main() {
//created a new node
Node* node1 = new Node (10);
cout << node1 -> next << endl;
//head pointed to nodel
Node* head = node1;
print (head);
insertAtHead (head, 12);
print (head);
insertAtHead (head, 15);
print (head);
return 0;
}




// #include<iostream>
// using namespace std;
// class Node {
// public:
// int data;
// Node* next;
// //constructor
// Node (int data) {
// this->data = data;
// this->next = NULL;
// }
// };
// void insertAtHead (Node* &head, int d) {
// // new node create
// Node* temp = new Node (d);
// temp->next = head;
// head = temp;
// }

// void insertAtTail(Node* &tail, int d) {
// // new node create
// Node* temp = new Node (d);
// tail -> next = temp;
// tail = temp;
// }

// void print (Node* &head) {
// Node* temp = head;
// while(temp != NULL) {
// cout << temp -> data<< " ";
// temp = temp ->next;
// }
// cout << endl;
// }
// int main() {
// //created a new node
// Node* node1 = new Node (10);
// //head pointed to nodel
// Node* head = node1;
// Node* tail = node1;
// print (head);
// insertAtTail(tail,14);
// print(head);
// insertAtTail(tail,16);
// print(head);
// return 0;
// }





// #include<iostream>
// using namespace std;
// class Node {
// public:
// int data;
// Node* next;
// //constructor
// Node (int data) {
// this->data = data;
// this->next = NULL;
// }
// };
// void insertAtHead (Node* &head, int d) {
// // new node create
// Node* temp = new Node (d);
// temp->next = head;
// head = temp;
// }

// void insertAtTail(Node* &tail, int d) {
// // new node create
// Node* temp = new Node (d);
// tail -> next = temp;
// tail = temp;
// }

// void print (Node* &head) {
// Node* temp = head;
// while(temp != NULL) {
// cout << temp -> data<< " ";
// temp = temp ->next;
// }
// cout << endl;
// }

// void insertAtPosition (Node* &tail,Node* & head, int position, int d) {
// if (position == 1) {
// insertAtHead (head, d);
// return;
// }
// Node* temp = head;
// int cnt = 1;
// while(cnt < position-1) {
// temp = temp->next;
// cnt++;
// }
// if (temp->next == NULL) {
// insertAtTail(tail, d);
// return;
// }
// //creating a node for d
// Node* nodeToInsert = new Node(d);
// nodeToInsert ->next = temp -> next;
// temp->next = nodeToInsert;
// }

// int main() {
// //created a new node
// Node* node1 = new Node (10);
// //head pointed to nodel
// Node* head = node1;
// Node* tail = node1;
// print (head);
// insertAtTail(tail,14);
// print(head);
// insertAtTail(tail,16);
// print(head);

// insertAtPosition(tail,head,4,22);
// print(head);
// cout << "head" << head -> data << endl;
// cout << "tail " << tail -> data << endl;
// return 0;
// }



// #include<iostream>
// using namespace std;
// class Node {
// public:
// int data;
// Node* next;
// //constructor
// Node (int data) {
// this->data = data;
// this->next = NULL;
// }
// //destructor
// ~Node(){
// int value = this -> data;
// //meory free
// if(this->next != NULL) {
// delete next;
// this->next = NULL;
// }
// cout << "memory is free for node with data " << value << endl;
// }
// };

// void deleteNode(int position, Node* & head) {
// //deleting first or start node
// if (position == 1) {
// Node* temp = head;
// head=head ->next;
// //memory free start ndoe
// temp -> next = NULL;
// delete temp;
// }
// else
// {
// //deleting any middle node or last node
// Node* curr = head;
// Node* prev = NULL;
// int cnt = 1;
// while(cnt < position) {
// prev = curr;
// curr = curr ->next;
// curr -> next = NULL;
// cnt++;
// }
// prev->next = curr ->next;
// delete curr;
// }
// }

// void insertAtHead (Node* &head, int d) {
// // new node create
// Node* temp = new Node (d);
// temp->next = head;
// head = temp;
// }

// void insertAtTail(Node* &tail, int d) {
// // new node create
// Node* temp = new Node (d);
// tail -> next = temp;
// tail = temp;
// }

// void print (Node* &head) {
// Node* temp = head;
// while(temp != NULL) {
// cout << temp -> data<< " ";
// temp = temp ->next;
// }
// cout << endl;
// }

// void insertAtPosition (Node* &tail,Node* & head, int position, int d) {
// if (position == 1) {
// insertAtHead (head, d);
// return;
// }
// Node* temp = head;
// int cnt = 1;
// while(cnt < position-1) {
// temp = temp->next;
// cnt++;
// }
// if (temp->next == NULL) {
// insertAtTail(tail, d);
// return;
// }
// //creating a node for d
// Node* nodeToInsert = new Node(d);
// nodeToInsert ->next = temp -> next;
// temp->next = nodeToInsert;
// }
// int main() {
// //created a new node
// Node* node1 = new Node (10);
// //head pointed to nodel
// Node* head = node1;
// Node* tail = node1;
// print (head);
// insertAtTail(tail,14);
// print(head);
// insertAtTail(tail,16);
// print(head);

// insertAtPosition(tail,head,4,22);
// print(head);
// cout << "head" << head -> data << endl;
// cout << "tail " << tail -> data << endl;

// deleteNode(1,head);
// print(head);
//but it is not valid on tail coit not update the tail value

// return 0;
// }




// #include<iostream>
// using namespace std;
// class Node {
// public:
// int data;
// Node* prev;
// Node* next;
// //constructor
// Node(int d) {
// this->data = d;
// this->prev = NULL;
// this->next = NULL;
// }
// };
// //transversing a linked list
// void print(Node* head) {
// Node* temp = head;
// while (temp != NULL) {
// cout << temp -> data<< " ";
// temp = temp -> next;
// }
// cout << endl;
// }
// //give length of linked list
// int getLength (Node* head) {
// int len = 0;
// Node* temp = head ;
// while(temp != NULL) {
// len++;
// temp = temp ->next;
// }
// return len;
// }
// void insertAtHead (Node* &head, int d) {
// Node* temp = new Node(d);
// temp->next = head;
// head -> prev = temp;
// head = temp;
// }
// int main() {
// Node* node1 = new Node (10);
// Node* head = node1;
// print(head);
// cout<<getLength(head)<<endl;
// insertAtHead(head, 11);
// print (head);
// insertAtHead(head, 13);
// print (head);
// insertAtHead(head, 8);
// print (head);
// return 0;
// }



// #include<iostream>
// using namespace std;
// class Node {
// public:
// int data;
// Node* prev;
// Node* next;
// //constructor
// Node(int d) {
// this->data = d;
// this->prev = NULL;
// this->next = NULL;
// }
// };
// //transversing a linked list
// void print(Node* head) {
// Node* temp = head;
// while (temp != NULL) {
// cout << temp -> data<< " ";
// temp = temp -> next;
// }
// cout << endl;
// }
// //give length of linked list
// int getLength (Node* head) {
// int len = 0;
// Node* temp = head ;
// while(temp != NULL) {
// len++;
// temp = temp ->next;
// }
// return len;
// }
// void insertAtHead (Node* &head, int d) {
// Node* temp = new Node(d);
// temp->next = head;
// head -> prev = temp;
// head = temp;
// }
// void insertAtTail (Node* &tail, int d) {
// Node* temp = new Node(d);
// tail -> next = temp;
// temp -> prev = tail;
// tail = temp;
// }
// int main() {
// Node* node1 = new Node (10);
// Node* head = node1;
// Node* tail = node1;
// print(head);
// cout<<getLength(head)<<endl;
// insertAtHead(head, 11);
// print (head);
// insertAtHead(head, 13);
// print (head);
// insertAtHead(head, 8);
// print (head);

// insertAtTail(tail,25);
// print(head);
// return 0;
// }




// #include<iostream>
// using namespace std;
// class Node {
// public:
// int data;
// Node* prev;
// Node* next;
// //constructor
// Node(int d) {
// this->data = d;
// this->prev = NULL;
// this->next = NULL;
// }
// };
// //transversing a linked list
// void print(Node* head) {
// Node* temp = head;
// while (temp != NULL) {
// cout << temp -> data<< " ";
// temp = temp -> next;
// }
// cout << endl;
// }
// //give length of linked list
// int getLength (Node* head) {
// int len = 0;
// Node* temp = head ;
// while(temp != NULL) {
// len++;
// temp = temp ->next;
// }
// return len;
// }
// void insertAtHead (Node* &head, int d) {
// Node* temp = new Node(d);
// temp->next = head;
// head -> prev = temp;
// head = temp;
// }
// void insertAtTail (Node* &tail, int d) {
// Node* temp = new Node(d);
// tail -> next = temp;
// temp -> prev = tail;
// tail = temp;
// }
// void insertAtPosition (Node* &tail,Node* &head, int position, int d) {
// //insert at Start
// if (position == 1) {
// insertAtHead (head, d);
// return;
// }
// Node* temp = head;
// int cnt = 1;
// while(cnt < position-1) {
// temp = temp->next;
// cnt++;
// }
// //inserting at Last Position
// if (temp->next == NULL) {
// insertAtTail(tail,d);
// return;
// }
// //creating a node for d
// Node* nodeToInsert = new Node (d);
// nodeToInsert -> next = temp -> next;
// temp-> next = nodeToInsert;
// temp ->next = nodeToInsert;
// nodeToInsert -> prev = temp;
// }

// int main() {
// Node* node1 = new Node (10);
// Node* head = node1;
// Node* tail = node1;
// print(head);
// cout<<getLength(head)<<endl;
// insertAtHead(head, 11);
// print (head);
// insertAtHead(head, 13);
// print (head);
// insertAtHead(head, 8);
// print (head);

// insertAtTail(tail,25);
// print(head);

// insertAtPosition(tail, head, 2, 100);
// print (head);
// return 0;
// }



// #include<iostream>
// using namespace std;
// class Node {
// public:
// int data;
// Node* prev;
// Node* next;
// //constructor
// Node(int d) {
// this->data = d;
// this->prev = NULL;
// this->next = NULL;
// }
// };
// //transversing a linked list
// void print(Node* head) {
// Node* temp = head;
// while (temp != NULL) {
// cout << temp -> data<< " ";
// temp = temp -> next;
// }
// cout << endl;
// }
// //give length of linked list
// int getLength (Node* head) {
// int len = 0;
// Node* temp = head ;
// while(temp != NULL) {
// len++;
// temp = temp ->next;
// }
// return len;
// }
// void insertAtHead (Node* &tail,Node* &head, int d) {
//     if(head == NULL){
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         temp->next = head;
//         head -> prev = temp;
//         head = temp;
// }
//     }

// void insertAtTail (Node* &tail,Node* &head, int d) {
//     cout<<"tail "<<tail<<endl;
//     if(tail == NULL){
//         Node* temp = new Node(d);
//         tail = temp;
//         head = temp;
//     }
//     else{
//         Node* temp = new Node(d);
// tail -> next = temp;
// temp -> prev = tail;
// tail = temp;
//     }

// }
// void insertAtPosition (Node* &tail,Node* &head, int position, int d) {
// //insert at Start
// if (position == 1) {
// insertAtHead (tail,head, d);
// return;
// }
// Node* temp = head;
// int cnt = 1;
// while(cnt < position-1) {
// temp = temp->next;
// cnt++;
// }
// //inserting at Last Position
// if (temp->next == NULL) {
// insertAtTail(tail,head,d);
// return;
// }
// //creating a node for d
// Node* nodeToInsert = new Node (d);
// nodeToInsert -> next = temp -> next;
// temp-> next -> prev = nodeToInsert;
// temp ->next = nodeToInsert;
// nodeToInsert -> prev = temp;
// }

// int main() {
// Node* head = NULL;
// Node* tail = NULL;
// print(head);
// cout<<getLength(head)<<endl;
// insertAtHead(tail,head, 11);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// insertAtHead(tail,head, 13);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// insertAtHead(tail,head, 8);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// insertAtTail(tail,head,25);
// print(head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// insertAtPosition(tail, head, 2, 100);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// return 0;
// }





// #include<iostream>
// using namespace std;
// class Node {
// public:
// int data;
// Node* prev;
// Node* next;
// //constructor
// Node(int d) {
// this->data = d;
// this->prev = NULL;
// this->next = NULL;
// }
// ~Node(){
//     int value = this -> data;
//     if(next != NULL){
//         delete next;
//         next = NULL; 
//     }
//     cout<<"Memory free for node with data "<<value<<endl;
// }
// };
// //transversing a linked list
// void print(Node* head) {
// Node* temp = head;
// while (temp != NULL) {
// cout << temp -> data<< " ";
// temp = temp -> next;
// }
// cout << endl;
// }
// //give length of linked list
// int getLength (Node* head) {
// int len = 0;
// Node* temp = head ;
// while(temp != NULL) {
// len++;
// temp = temp ->next;
// }
// return len;
// }
// void insertAtHead (Node* &tail,Node* &head, int d) {
//     if(head == NULL){
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         temp->next = head;
//         head -> prev = temp;
//         head = temp;
// }
//     }

// void insertAtTail (Node* &tail,Node* &head, int d) {
//     cout<<"tail "<<tail<<endl;
//     if(tail == NULL){
//         Node* temp = new Node(d);
//         tail = temp;
//         head = temp;
//     }
//     else{
//         Node* temp = new Node(d);
// tail -> next = temp;
// temp -> prev = tail;
// tail = temp;
//     }

// }
// void insertAtPosition (Node* &tail,Node* &head, int position, int d) {
// //insert at Start
// if (position == 1) {
// insertAtHead (tail,head, d);
// return;
// }
// Node* temp = head;
// int cnt = 1;
// while(cnt < position-1) {
// temp = temp->next;
// cnt++;
// }
// //inserting at Last Position
// if (temp->next == NULL) {
// insertAtTail(tail,head,d);
// return;
// }
// //creating a node for d
// Node* nodeToInsert = new Node (d);
// nodeToInsert -> next = temp -> next;
// temp-> next -> prev = nodeToInsert;
// temp ->next = nodeToInsert;
// nodeToInsert -> prev = temp;
// }

// void deleteNode(int position, Node* & head) {
// //deleting first or start node
// if (position == 1) {
// Node* temp = head;
// temp->next->prev = NULL;
// head = temp ->next;
// temp ->next = NULL;
// delete temp;
// }
// else
// {
// //deleting any middle node or last node
// Node* curr = head;
// Node* prev = NULL;
// int cnt = 1;
// while(cnt < position) {
// prev = curr;
// curr = curr ->next;
// cnt++;
// }
// curr -> prev = NULL;
// prev ->next = curr -> next;
// curr -> next = NULL;
// delete curr;
// }
// }

// int main() {
// Node* head = NULL;
// Node* tail = NULL;
// print(head);
// cout<<getLength(head)<<endl;
// insertAtHead(tail,head, 11);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// insertAtHead(tail,head, 13);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// insertAtHead(tail,head, 8);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// insertAtTail(tail,head,25);
// print(head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// insertAtPosition(tail, head, 2, 100);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;

// deleteNode(1,head);
// print (head);
// cout << "head "<< head -> data << endl;
// cout << "tail "<< tail -> data << endl;
// return 0;
// }




// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(int d){
//         this->data = d;
//         this -> next = NULL;
//     }
//     ~Node(){
//         int value = this ->data;
//         if(this -> next != NULL){
//             delete next;
//             next = NULL;
//         }
//         cout<<"Memory free for node with data "<<value<<endl;
//     }
// };
// void insertNode (Node* &tail, int element, int d) {
// //empty list
// if(tail == NULL) {
// Node* newNode = new Node (d);
// tail = newNode;
// newNode -> next = newNode;
// }
// else{
// //non-empty list
// //assuming that the element is present in the list
// Node* curr = tail;
// while(curr->data != element) {
// curr = curr -> next;
// }
// //element found -> curr is representing element wala node
// Node* temp = new Node (d);
// temp -> next = curr -> next;
// curr -> next = temp;
// }
// }

// void print (Node* tail) {
// Node* temp = tail;
// do{cout << tail->data <<" ";
// tail = tail -> next;
// }
// while(tail!= temp);
// cout<<endl;
// }

// int main(){
//     Node* tail = NULL;
//     insertNode(tail,5,3);
//     print(tail);
//     insertNode(tail,3,5);
//     print(tail);
//     insertNode(tail,5,7);
//     print(tail);
//     insertNode(tail,7,9);
//     print(tail);
//     insertNode(tail,5,6);
//     print(tail);
//     return 0;
// }




