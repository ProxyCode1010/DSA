// //Insert at start and end
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     //Constructor
//     Node(int data){
//         this-> data = data;
//         this-> next = NULL;
//     }
// };
// void InsertAtHead(Node* &head, int d){
//     //new node create
//     Node* temp = new Node(d);
//     temp-> next = head;
//     head = temp;
// };
// void InsertAtTail(Node* &tail, int d){
//     //new node create
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;
// }
// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp-> data <<" ";
//         temp = temp-> next;
//     }
//     cout<<endl;
// };
// int main(){
//     //Created a new node
//     Node* node1 = new Node(10);
//     cout<< node1-> data <<endl;
//     cout<< node1-> next <<endl;
//     // //head pointed to node
//     Node* head = node1;
//     // print(head);
//     // InsertAtHead(head, 12);
//     // print(head);
//     // InsertAtHead(head, 15);
//     // print(head);

//     //head pointed to tail
//     Node* tail = node1;
//     print(head);
//     InsertAtTail(tail, 12);
//     print(head);
//     InsertAtTail(tail, 15);
//     print(head);
//     return 0;
// }


// //Insert at mid    //--Throwing error
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     //Constructor
//     Node(int data){
//         this-> data = data;
//         this-> next = NULL;
//     }
//     void InsertAtHead(Node* &head, int d){
//     //new node create
//     Node* temp = new Node(d);
//     temp-> next = head;
//     head = temp;
//     }
// void InsertAtPosition(Node* & tail, Node* & head, int position, int d){
//     //insert at head
//     if(position == 1){
//         InsertAtHead(head, d);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < position-1){
//         temp = temp-> next;
//         cnt++;
//     }
//     //inserting at last position
//     if(temp -> next == NULL){
//         InsertAtTail(tail, d);
//         return;
//     }
//     //creating a node for d
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp -> next = nodeToInsert;
//     }
//     void InsertAtTail(Node* &tail, int d){
//     //new node create
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;
//     }
//     void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp-> data <<" ";
//         temp = temp-> next;
//     }
//     cout<<endl;
//     }
// };
// int main(){
//     //Created a new node
//     Node* node1 = new Node(10);
//     cout<< node1-> data <<endl;
//     cout<< node1-> next <<endl;
//     // //head pointed to node
//     Node* head = node1;
//     // print(head);
//     // InsertAtHead(head, 12);
//     // print(head);
//     // InsertAtHead(head, 15);
//     // print(head);

//     //head pointed to tail
//     Node* tail = node1;
//     print(head);
//     InsertAtTail(tail, 12);
//     print(head);
//     InsertAtTail(tail, 15);
//     print(head);
//     InsertAtPosition(tail,head,1,14);
//     print(head);
//     return 0;
// }


// //Deletion     //--Throwing error
// #include<iostream>
// #include<ostream>
// using namespace  std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     //Constructor
//     Node(int data){
//         this-> data = data;
//         this-> next = NULL;
//     }
//     //destructor
//     ~Node(){
//         int value = this -> data;
//         //memory free
//         if(this->next != NULL){
//             delete next;
//             next = NULL;
//         }
//         cout<<"Memory is free for node with data "<<value<<endl;
//     }
//     void InsertAtHead(Node* &head, int d){
//     //new node create
//     Node* temp = new Node(d);
//     temp-> next = head;
//     head = temp;
//     }
//     void print(Node* &head){
//         Node* temp = head;
//         while(temp != NULL){
//         cout<< temp-> data <<" ";
//         temp = temp-> next;
//         }
//         cout<<endl;
//     }
// void InsertAtPosition(Node* & tail, Node* & head, int position, int d){
//     //insert at head
//     if(position == 1){
//         InsertAtHead(head, d);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < position-1){
//         temp = temp-> next;
//         cnt++;
//     }
//     //inserting at last position
//     if(temp -> next == NULL){
//         InsertAtTail(tail, d);
//         return;
//     }
//     //creating a node for d
//         Node* nodeToInsert = new Node(d);
//         nodeToInsert -> next = temp -> next;
//         temp -> next = nodeToInsert;
//     }
//     void InsertAtTail(Node* &tail, int d){
//     //new node create
//         Node* temp = new Node(d);
//         tail -> next = temp;
//         tail = temp;
//     }
// void deleteNode(int position, Node* & head){
//     //deletion first or start node
//     if(position == 1){
//         Node* temp = head;
//         head = head -> next;
//         //memory free start node
//         temp -> next = NULL;
//         delete temp;
//     }else{
//         //deleting any middle node or last node
//         Node* curr = head;
//         Node* prev = NULL;
//         int cnt = 1;
//         while(cnt < position){
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
            
//         }
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//     }
// }
// };
// int main(){    //Created a new node
//     Node* node1 = new Node(10);
//     cout<< node1-> data <<endl;
//     cout<< node1-> next <<endl;
//     // //head pointed to node
//     Node* head = node1;
//     // print(head);
//     // InsertAtHead(head, 12);
//     // print(head);
//     // InsertAtHead(head, 15);
//     // print(head);

//     //head pointed to tail
//     Node* tail = node1;
//     print(head);
//     InsertAtTail(tail, 12);
//     print(head);
//     InsertAtTail(tail, 15);
//     print(head);
//     InsertAtPosition(tail,head,1,14);
//     print(head);

//     cout<<"Head"<<head-> data<<endl;
//     cout<<"tail"<<tail -> data<<endl;
//     deleteNode(1, head);
//     return 0;
// } 



//Doubly linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     //Constructor
//     Node(int d){
//         this-> data = d;
//         this-> prev = NULL;
//         this-> next = NULL;
//     }
// };
// //Traversing a linked list
// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp-> data<<" ";
//         temp = temp-> next;
//     }
//     cout<<endl;
// }
// //Gives length of linked list
// int getLength(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL){
//         len++;
//         temp = temp-> next;
//     }
//     return len;
// }
// void insertAtHead(Node* &tail, Node* &head, int d){
//     //empty list
//     if(head == NULL){
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         temp-> next = head;
//         head-> prev = temp;
//         head = temp;
//     }
// }
// void insertAtTail(Node* &tail,Node* &head, int d){
//     if(tail == NULL){
//         Node* temp = new Node(d);
//         tail = temp;
//         head = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         tail-> next = temp;
//         temp-> prev = tail;
//         tail = temp;
//     }
// }
// void insertAtPosition(Node* &tail, Node* &head, int position, int d){
//     //insert at start
//     if(position == 1){
//         insertAtHead(tail, head, d);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < position-1){
//         temp = temp-> next;
//         cnt++;
//     }
//     //inserting at last position
//     if(temp-> next == NULL){
//         insertAtTail(tail, head , d);
//         return;
//     }
//     //creating a node for d
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert-> next = temp-> next;
//     temp-> next -> prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert -> prev = temp;
// }
// int main(){
//     // Node* node1 = new Node(10);
//     // Node* head = node1;
//     // Node* tail = node1;

//     //iffff
//     Node* head = NULL;
//     Node* tail = NULL;
//     print(head);
//     cout<<"length is "<<getLength(head)<<endl;

//     insertAtHead(tail, head, 11);
//     cout<<"Head "<<head -> data<<endl;
//     cout<<"Tail "<<tail -> data<<endl;
//     print(head);
//     insertAtHead(tail, head, 12);
//     print(head);
//     cout<<"Head "<<head -> data<<endl;
//     cout<<"Tail "<<tail -> data<<endl;
//     insertAtHead(tail, head, 13);
//     print(head);
//     cout<<"Head "<<head -> data<<endl;
//     cout<<"Tail "<<tail -> data<<endl;

//     insertAtTail(tail, head, 25);
//     print(head);
//     cout<<"Head "<<head -> data<<endl;
//     cout<<"Tail "<<tail -> data<<endl;

//     insertAtPosition(tail, head, 1, 5);
//     print(head);

//     cout<<"Head "<<head -> data<<endl;
//     cout<<"Tail "<<tail -> data<<endl;
//     insertAtPosition(tail, head, 6, 6);
//     print(head);
//     return 0;
// }


// //Deletion a node - Doubly linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     //Constructor
//     Node(int d){
//         this-> data = d;
//         this-> prev = NULL;
//         this-> next = NULL;
//     }
//     ~Node(){
//         int val = this -> data;
//         if(next != NULL){
//             delete next;
//             next = NULL;
//         }
//         cout<<"Memory free for node with data "<<val<<endl;
//     }
// };
// //Traversing a linked list
// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp-> data<<" ";
//         temp = temp-> next;
//     }
//     cout<<endl;
// }
// //Gives length of linked list
// int getLength(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL){
//         len++;
//         temp = temp-> next;
//     }
//     return len;
// }
// void insertAtHead(Node* &tail, Node* &head, int d){
//     //empty list
//     if(head == NULL){
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         temp-> next = head;
//         head-> prev = temp;
//         head = temp;
//     }
// }
// void insertAtTail(Node* &tail,Node* &head, int d){
//     if(tail == NULL){
//         Node* temp = new Node(d);
//         tail = temp;
//         head = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         tail-> next = temp;
//         temp-> prev = tail;
//         tail = temp;
//     }
// }
// void insertAtPosition(Node* &tail, Node* &head, int position, int d){
//     //insert at start
//     if(position == 1){
//         insertAtHead(tail, head, d);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < position-1){
//         temp = temp-> next;
//         cnt++;
//     }
//     //inserting at last position
//     if(temp-> next == NULL){
//         insertAtTail(tail, head , d);
//         return;
//     }
//     //creating a node for d
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert-> next = temp-> next;
//     temp-> next -> prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert -> prev = temp;
// }
// void deleteNode(int position, Node* & head){
//     //deletion first or start node
//     if(position == 1){
//         Node* temp = head;
//         temp-> next -> prev = NULL;
//         head = temp -> next;
//         temp -> next = NULL;
//         delete temp;
//     }else{
//         //deleting any middle node or last node
//         Node* curr = head;
//         Node* prev = NULL;
//         int cnt = 1;
//         while(cnt < position){
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
            
//         }
//         curr -> prev = NULL;
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//     }
// }
// int main(){
//     // Node* node1 = new Node(10);
//     // Node* head = node1;
//     // Node* tail = node1;

//     //iffff
//     Node* head = NULL;
//     Node* tail = NULL;
//     print(head);
//     cout<<"length is "<<getLength(head)<<endl;

//     insertAtHead(tail, head, 11);
//     print(head);
//     insertAtHead(tail, head, 12);
//     print(head);
//     insertAtHead(tail, head, 13);
//     print(head);

//     insertAtTail(tail, head, 25);
//     print(head);

//     insertAtPosition(tail, head, 1, 5);
//     print(head);

//     cout<<"Head "<<head -> data<<endl;
//     cout<<"Tail "<<tail -> data<<endl;
//     insertAtPosition(tail, head, 6, 6);
//     print(head);


//     deleteNode(1, head);
//     print(head);
//     deleteNode(4, head);
//     print(head);
//     deleteNode(4, head);
//     print(head);
//     return 0;
// }



//  //Circular linked list  --Insertion
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     //constructor
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
//     //destructor
//     ~Node(){
//         int value = this-> data;
//         //memory free
//         if(this-> next != NULL){
//             delete next;
//             this -> next = NULL;
//         }
//         cout<<"Memory is free for node with data "<<value <<endl;
//     }
// };
// void insertNode(Node* &tail, int element, int d){
//     //empty list
//     if(tail == NULL){
//         Node* newNode = new Node(d);
//         tail = newNode;
//         newNode -> next = newNode;
//     }
//     else{
//         //non empty list
//         //assuming that the element is present in the last
//         Node* curr = tail;
//         while(curr-> data != element){
//             curr = curr -> next;
//         }
//         //element found -> curr is representing element wala node
//         Node* temp = new Node(d);
//         temp -> next = curr -> next;
//         curr -> next = temp;
//     }
// }
// void print(Node* tail){
//     Node* temp = tail;
//     do{
//         cout<< tail -> data<<" ";
//         tail = tail -> next;
//     }while(tail != temp);
//     cout<<endl;
// }
// int main(){
//     Node* tail = NULL;
//     insertNode(tail, 5, 3);
//     print(tail);

//     insertNode(tail, 3, 5);
//     print(tail);

//     insertNode(tail, 5, 7);
//     print(tail);

//     insertNode(tail, 7, 9);
//     print(tail);

//     insertNode(tail, 5, 6);
//     print(tail);

//     insertNode(tail, 9, 10);
//     print(tail);

//     insertNode(tail, 3, 4);
//     print(tail);
//     return 0;
// }


// //Deletion
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     //constructor
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
//     //destructor
//     ~Node(){
//         int value = this-> data;
//         //memory free
//         if(this-> next != NULL){
//             delete next;
//             this -> next = NULL;
//         }
//         cout<<"Memory is free for node with data "<<value <<endl;
//     }
// };
// void insertNode(Node* &tail, int element, int d){
//     //empty list
//     if(tail == NULL){
//         Node* newNode = new Node(d);
//         tail = newNode;
//         newNode -> next = newNode;
//     }
//     else{
//         //non empty list
//         //assuming that the element is present in the last
//         Node* curr = tail;
//         while(curr-> data != element){
//             curr = curr -> next;
//         }
//         //element found -> curr is representing element wala node
//         Node* temp = new Node(d);
//         temp -> next = curr -> next;
//         curr -> next = temp;
//     }
// }
// void print(Node* tail){
//     Node* temp = tail;
//     //empty list
//     if(tail == NULL){
//         cout<<"List is empty"<<endl;
//     }
//     do{
//         cout<< tail -> data<<" ";
//         tail = tail -> next;
//     }while(tail != temp);
//     cout<<endl;
// }
// void deleteNode(Node* &tail, int value){
//     //empty list
//     if(tail == NULL){
//         cout<<"List is empty, please recheck again "<<endl;
//         return;
//     }
//     else{
//         //non- empty
//         //assuming that "value" is present in the linked list
//         Node* prev = tail;
//         Node* curr = prev -> next;
//         while(curr -> data != value){
//             prev = curr;
//             curr = curr -> next;
//         }
//         prev -> next = curr -> next;

//         //1 Node linked list
//         if(curr == prev){
//             tail == NULL;
//         }
//         // >=2 Node linked list
//         else if(tail == curr){
//             tail = prev;
//         }
//         curr -> next = NULL;
//         delete curr;
//     }
// }
// int main(){
//     Node* tail = NULL;
//     insertNode(tail, 5, 3);
//     print(tail);

//     insertNode(tail, 3, 5);
//     print(tail);

//     insertNode(tail, 5, 7);
//     print(tail);

//     insertNode(tail, 7, 9);
//     print(tail);

//     insertNode(tail, 5, 6);
//     print(tail);

//     insertNode(tail, 9, 10);
//     print(tail);

//     insertNode(tail, 3, 4);
//     print(tail);

//     deleteNode(tail, 3);
//     print(tail);

//     deleteNode(tail, 9);
//     print(tail);

//     deleteNode(tail, 7);
//     print(tail);
//     return 0;
// }



// //Reverse a linked list  -- Code studio question only logic here
// #include<iostream>
// using namespace std;
// // Node* reverseLinkedList(Node* head){                 --Approach 1
// //     if(head == NULL || head -> next == NULL){
// //         return head;
// //     }
// //     Node* prev = NULL;
// //     Node* curr = head;
// //     Node* forward = NULL;
// //     while(curr != NULL){
// //         forward = curr -> next;
// //         curr -> next = prev;
// //         prev = curr;
// //         curr = forward;
// //     }
// //     return prev;
// // }

// // Node* reverse_LinkedList(Node* head){    //---Approach 2
// //     Node* curr = head;
// //     Node* prev = NULL;
// //     reverse(head, curr, prev);
// //     return head;
// // }
// // void reverse(Node* &head, Node* curr, Node* prev){
// //     //base case
// //     if(curr == NULL){
// //         head = prev;
// //         return;
// //     }
// //     Node* forward = curr -> next;
// //     reverse(head, forward, curr);
// //     curr -> next = prev;
// // }

// // Node* reverse_LinkedList(Node* head){    //---Approach 3
// //     return reverse1(head);
// // }
// // void reverse(Node* &head, Node* curr, Node* prev){
// //     //base case
// //     if(curr == NULL){
// //         head = prev;
// //         return;
// //     }
// //     Node* forward = curr -> next;
// //     reverse(head, forward, curr);
// //     curr -> next = prev;
// // }
// // Node* reverse1(Node* head){
// //     //base case
// //     if(head == NULL || head-> next == NULL){
// //         return head;
// //     }
// //     Node* smallList = reverse1(head -> next);
// //     head -> next -> next = head;
// //     head -> next = NULL;
// //     return smallList;
// // }
// int main(){
//     reverse_LinkedList* node = new reverse_LinkedList(d);
//     reverse_LinkedList* head = node;
//     print(head);
// } 



//Reverse doubly linked list -- H.W 



// //Middle of linked list --Codestudio question
// #include<iostream>
// using namespace std;
// // //Approach 1
// // int getLength(Node* head){
// //     int len = 0;
// //     while(head != NULL){
// //         len++;
// //         head = head -> next;
// //     }
// //     return len;
// // }
// // Node *findmiddle(Node* head){
// //     int len = getLength(head);
// //     int ans = (len/2);     //But in case of finding position we find ans = (len/2)+1;  its for finding node

// //     Node* temp = head;
// //     int cnt = 0;
// //     while(cnt<ans){
// //         temp = temp -> next;
// //         cnt++;
// //     }
// //     return temp;
// // }

// // //Approach 2 - More optimised  --using 2 pointer
// // Node* findmiddle(Node* head){
// //     return getmiddle(head);
// // }
// // Node* getMiddle(Node* head){
// //     if(head == NULL || head -> next == NULL){
// //         return head;
// //     }
// //     //2 nodes - needed or not??
// //     if(head -> next-> next == NULL){
// //         return head -> next;
// //     }
// //     Node* slow = head;
// //     Node* fast = head -> next;

// //     while(fast != NULL){
// //         fast = fast -> next;
// //         if(fast != NULL){
// //             fast = fast -> next;
// //         }
// //         slow = slow -> next;
// //     }
// //     return slow;
// // }
// int main(){

// }



// //Reverse linked list in K order  --Code studio question
// #include<iostream>
// using namespace std;
// Node* kReverse(Node* head, int k){
//     //base case
//     if(head == NULL){
//         return NULL;
//     }
//     //step1: reverse first k nodes
//     Node* next = NULL;
//     Node* curr = head;
//     Node* prev = NULL;
//     int count = 0;
//     while(curr != NULL && count < k){
//         next = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }
//     //step2: Recursion takeover
//     if(next != NULL){
//         head -> next = kReverse(next , k);
//     } 
//     //step3: return head of reversed list
//     return prev;
// }
// int main(){

// }



// //Circular list or not    -- code studio
// #include<iostream>
// using namespace std;
// bool isCircularList(Node* head){
//     //empty list
//     if(head == NULL){
//         return true;
//     }
//     Node* temp = head -> next;
//     while(temp != NULL && temp != head){
//         temp = temp -> next;
//     }
//     if(temp == head){
//         return true;
//     }
//     return false;
// }
// int main(){  
//     if(isCircularList(tail)){
//         cout<<"Linked list is circular in nature"<<endl;
//     }
//     else{
//         cout<<"Linked list is not circular"<<endl;
//     }
// }



// //Detect loop    --half main logic code
// #include<iostream>
// using namespace std;
// bool detectLoop(Node* head){
//     if(head == NULL){
//         return false;
//     }
//     map<Node*, bool> visited;
//     Node* temp = head;
//     while(temp != NULL){
//         //cycle is present
//         if(visited[temp] == true){
//             cout<<"Present on element "<<temp->data <<endl;
//             return true;
//         }
//         visited[temp] = true;
//         temp = temp -> next;
//     }
//     return false;
// }
// int main(){
//     if(detectLoop(head)){
//         cout<<"Cycle is present"<<endl;
//     }
//     else{
//         cout<<"No cycle"<<endl;
//     }
// }



// //Floyd cycle detection and find starting node of loop and remove loop from linked list
// #include<iostream>
// using namespace std;
// Node* floydDetectLoop(Node* head){
//     if(head == NULL){
//         return NULL;
//     }
//     Node* slow = head;
//     Node* fast = head;
//     while(slow != NULL && fast != NULL){
//         fast = fast -> next;
//         if(fast != NULL){
//             fast = fast -> next;
//         }
//         slow = slow -> next;
//         if(slow == fast){
//             cout<<"Present at "<<slow-> data<<endl;
//             return slow;
//         }
//     }
//     return NULL;
// }
// Node* getStartingNode(Node* head){
//     if(head == NULL){
//         return NULL;
//     }
//     Node* intersection = floydDetectLoop(head);
//     Node* slow = head;

//     while(slow != intersection){
//         slow = slow -> next;
//         intersection = intersection -> next;
//     }
//     return slow;
// }
// void removeLoop(Node* head){
//     if(head == NULL){
//         return;
//     }
//     Node* startofLoop = getStartingNode(head);
//     Node* temp = startofLoop;

//     while(temp -> next != startofLoop){
//         temp = temp -> next;
//     }
//     temp -> next = NULL;
// }
// int main(){
//     if(floydDetectLoop(head) != NULL){
//         cout<<"Cycle is present"<<endl;
//     }
//     else{
//         cout<<"No cycle"<<endl;
//     }
//     Node* loop = getStartingNode(head);
//     cout<<"Loop start at"<<loop -> data <<endl;

//     removeLoop(head);
//     print(head);
// }



// //Remove duplicate from sorted list
// #include<iostream>
// using namespace std;
// Node* uniqueSortedaList(Node* head){
//     //empty list
//     if(head == NULL){
//         return NULL;
//     }
//     //Non empty list
//     Node* curr = head;
//     while(curr != NULL){
//         if(curr -> next != NULL && curr -> data == curr -> next -> data){
//             Node* next_next = curr -> next -> next;
//             Node* nodeToDelete = curr -> next;
//             delete(nodeToDelete);
//             curr -> next = next_next;
//         }
//         else{
//             //not equal
//             curr = curr -> next;
//         }
//     }
//     return head;
// }
// int main(){

// }



//Remove duplicate from unsorted list  --- Homework



// //Sort linked list of 0s 1s 2s
// #include<iostream>
// using namespace std;
// // //Approach 1
// // Node* sortList(Node* head){
// //     int zerocount = 0;
// //     int onecount = 0;
// //     int twocount = 0;
// //     Node* temp = head;
// //     while(temp != NULL){
// //         if(temp -> data == 0){
// //             zerocount++;
// //         }
// //         else if(temp -> data == 1){
// //             onecount++;
// //         }
// //         else if(temp -> data== 2){
// //             twocount++;
// //         }
// //         temp = temp -> next;
// //     }
// //     temp = head;
// //     while(temp != NULL){
// //         if(zerocount != 0){
// //             temp -> data = 0;
// //             zerocount--;
// //         }
// //         else if(onecount != 0){
// //             temp -> data = 1;
// //             onecount--;
// //         }
// //         else if(twocount != 0){
// //             temp -> data = 2;
// //             twocount--;
// //         }
// //         temp = temp -> next;
// //     }
// //     return head;
// // }

// //Approach 2
// void insertAtTail(Node* &tail, Node* curr){
//     tail -> next = curr;
//     tail = curr;
// }
// Node* sortList(Node *head){
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;

//     Node* curr = head;
//     //create separate list of 0s, 1s and 2s
//     while(curr != NULL){
//         int value = curr -> data;

//         if(value == 0){
//             insertAtTail(zeroTail, curr);
//         }
//         else if(value == 1){
//             insertAtTail(oneTail, curr);
//         }
//         else if(value == 2){
//             insertAtTail(twoTail, curr);
//         }
//         curr = curr -> next;
//     }
//     //merge 3 sublist

//     //1s list non empty
//     if(oneHead -> next != NULL){
//         zeroTail -> next = oneHead -> next;
//     }
//     else{
//         //1s list -> empty
//         zeroTail -> next = twoHead -> next;
//     }
//     oneTail -> next = twoHead -> next;
//     twoTail -> next = NULL;

//     //setup head
//     head = zeroHead -> next;

//     //delete dummy node
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;

//     return head;
// }
// int main(){

// }



// //Merge 2 sorted linked list
// #include<iostream>
// using namespace std;
// Node<int>* solve(Node<int>* first, Node<int>* second){
//     //if only one element is present in first list
//     if(first -> next == NULL){
//         first -> next = second;
//         return first;
//     }

//     Node<int>* curr1 = first;
//     Node<int>* next1 = curr1 -> next;
//     Node<int>* curr2 = second;
//     Node<int>* next2 = curr2 -> next;

//     while(next1 != NULL && curr2 != NULL){
//         if((curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data)){
//             //add node in between the first list
//             curr1 -> next = curr2;
//             next2 = curr -> next;
//             curr2 -> next = next1;
//             //update pointer
//             curr1 = curr2;
//             curr2 = next2;
//         }
//         else{
//             //curr1 and next1 move forward
//             curr1 = next1;
//             next1 = next1 -> next;

//             if(next1 == NULL){
//                 curr1 -> next = curr2;
//                 return first;
//             }
//         }
//     }
//     return first;
// }
// Node<int> sortTwoLists(Node<int>* first, Node<int>* second){
//     if(first == NULL){
//         return second;
//     }
//     if(second == NULL){
//         return first;
//     }
//     if(first -> data <= second -> data){
//         return solve(first, second);
//     }
//     else{
//          return solve(second, first);
//     }
// }
// int main(){

// }



// //Palindrome linked list    -- greeksofgreeks
// #include<iostream>
// #include<vector>
// using namespace std;
// // //Approach 1
// // class solution{
// //     private:
// //     bool checkPalindrome(vector<int> arr){
// //         int n = arr.size();
// //         int s = 0;
// //         int e = n-1;
// //         while(s<=e){
// //             if(arr[s] != arr[e]){
// //                 return 0;
// //             }
// //             s++;
// //             e--;
// //         }
// //         return 1;
// //     }
// //     public:
// //     //Function to check wheather the list is palindrome
// //     bool isPalindrome(Node *head){
// //         vector<int> arr;
// //         Node* temp = head;
// //         while(temp != NULL){
// //             arr.push_back(temp -> data);
// //             temp = temp -> next;
// //         }
// //         return checkPalindrome(arr);
// //     }
// // };

// // //Approach 2
// class Solution{
//     private:
//     Node* getMid(Node* head){
//         Node* slow = head;
//         Node* fast = head -> next;

//         while(fast != NULL && fast -> next != NULL){
//             fast = fast -> next -> next;
//             slow = slow -> next;
//         }
//         return slow;
//     }
//     Node* reverse(Node* head){
//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;
//         while(curr != NULL){
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     public:
//     //function to check wheather the list is palindrome 
//     bool isPalindrome(Node *head){
//         if(head -> next == NULL){
//             return true;
//         }
//         //step 1 -> find middle
//         Node* middle = getMid(head);
//         //step 2 -> reverse list after middle
//         Node* temp = middle -> next;
//         middle -> next = reverse(temp);
//         //step 3 -> compare both halves
//         Node* head1 = head;
//         Node* head2 = middle -> next;
//         while(head2 != NULL){
//             if(head1 -> data != head2 -> data){
//                 return false;
//             }
//             head1 = head1 -> next;
//             head2 = head2 -> next;
//         }
//         //step 4 -> repeat step 2
//         temp = middle -> next;
//         middle -> next = reverse(temp);

//         return true;
//     }
// };
// int main(){

// }



// //Add two numbers represented by linked list
// #incldue<iostream>
// using namespace std;
// // //Approach 1
// // class Solution{
// //     private:
// //     Node* reverse(Node* head){
// //         Node* curr = head;
// //         Node* prev = NULL;
// //         Node* next = NULL;

// //         while(curr != NULL){
// //             next = curr -> next;
// //             curr -> next = prev;
// //             prev = curr;
// //             curr = next;
// //         }
// //         return prev;
// //     }
// //     void insertAtTail(struct Node* &head, struct Node* &tail, int val){
// //         Node* temp = new Node(val);
// //         //empty list
// //         if(head == NULL){
// //             head = temp;
// //             tail = temp;
// //             return;
// //         }
// //         else{
// //             tail -> next = temp;
// //             tail = temp;
// //         }
// //     }
// //     struct Node* add(struct Node* first, struct Node* second){
// //         int carry = 0;
// //         Node* ansHead = NULL;
// //         Node* ansTail = NULL;

// //         while(first != NULL && second != NULL){
// //             int sum = carry + first -> data + second -> data;
// //             int digit = sum % 10;

// //             //create node and add in answer linked list
// //             insertAtTail(ansHead, ansTail, digit);
// //             carry = sum/10;
// //             first = first -> next;
// //             second = second -> next;
// //         }
// //         while(first != NULL){
// //             int sum = carry + first -> data;
// //             int digit = sum % 10;

// //             //create node and add in answer linked list
// //             insertAtTail(ansHead, ansTail, digit);
// //             carry = sum/10;  
// //             first = first -> next
// //         }
// //         while(second != NULL){
// //             int sum = carry + second -> data;
// //             int digit = sum % 10;

// //             //create node and add in answer linked list
// //             insertAtTail(ansHead, ansTail, digit);
// //             carry = sum/10;  
// //             second = second -> next;
// //         }
// //         while(carry != 0){
// //             int sum = carry;
// //             int digit = sum % 10;

// //             //create node and add in answer linked list
// //             insertAtTail(ansHead, ansTail, digit);
// //             carry = sum/10;  
// //         }
// //         return ansHead;
// //     }
// //     public:
// //     //function two add two numbers represented by linked list
// //     struct Node* addTwoLists(struct Node* first, struct Node* second){
// //         //step 1 - reverse input linked list
// //         first = reverse(first);
// //         second = reverse(second);

// //         //step 2 - add 2 linked list
// //         Node* ans = add(first, second);

// //         //step 3
// //         ans = reverse(ans);
// //         return ans;
// //     }
// // };

// //Approach 2 -- More optimized
// class Solution{
//     private:
//     Node* reverse(Node* head){
//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;

//         while(curr != NULL){
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     void insertAtTail(struct Node* &head, struct Node* &tail, int val){
//         Node* temp = new Node(val);
//         //empty list
//         if(head == NULL){
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else{
//             tail -> next = temp;
//             tail = temp;
//         }
//     }
//     struct Node* add(struct Node* first, struct Node* second){
//         int carry = 0;
//         Node* ansHead = NULL;
//         Node* ansTail = NULL;

//         while(first != NULL || second != NULL || carry != 0){
//             int val1 = 0;
//             if(first != NULL){
//                 val1 = second -> data;
//             }
//             int val2 = 0;
//             if(second != NULL){
//                 val2 = second -> data;
//             }
//             int sum = carry + val1 + val2;
//             int digit = sum % 10;

//             //create a node and add in answer linked list
//             insertAtTail(ansHead, ansTail, digit);

//             carry = sum/10;
//             if(first != NULL){
//                 first = first -> data;
//             }
//             if(second != NULL){
//                 second = second -> next;
//             }
//         }
//         return ansHead;
//     }
//     public:
//     //function two add two numbers represented by linked list
//     struct Node* addTwoLists(struct Node* first, struct Node* second){
//         //step 1 - reverse input linked list
//         first = reverse(first);
//         second = reverse(second);

//         //step 2 - add 2 linked list
//         Node* ans = add(first, second);

//         //step 3
//         ans = reverse(ans);
//         return ans;
//     }
// };
// int main(){

// }



// //Clone a linked list with random pointers
// #include<iostream>
// using namespace std;
// // //Approach 1
// // class Solution{
// //     private:
// //     void insertAtTail(Node* &head, Node* &tail, int d){
// //         Node* newNode = new Node(d);
// //         if(head == NULL){
// //             head = newNode;
// //             tail = newNode;
// //             return;
// //         }
// //         else{
// //             tail -> next = newNode;
// //             tail = newNode;
// //         }
// //     }
// //     public:
// //     Node *copyList(Node *head){
// //         //step 1: create a clone list
// //         Node* cloneHead =  NULL;
// //         Node* cloneTail = NULL;

// //         Node* temp = head;
// //         while(temp != NULL){
// //             insertAtTail(cloneHead, cloneTail, temp -> data);
// //             temp = temp -> next;
// //         }
// //         //step 2: create a map
// //         unordered_map<Node*, Node*> oldToNewNode;
// //         Node* originalNode = head;
// //         Node* cloneNode = cloneHead;
// //         while(originalNode != NULL && cloneNode != NULL){
// //             oldToNewNode[originalNode] = cloneNode;
// //             originalNode = originalNode -> next;
// //             cloneNode = cloneNode -> next;
// //         }

// //         originalNode = head;
// //         cloneNode = cloneHead;

// //         while(originalNode != NULL){
// //             cloneNode -> random = oldToNewNode[orginalNode -> random];    //--arb in place of random in greeksofgreeks
// //             originalNode = originalNode -> next;
// //             cloneNode = cloneNode -> next;
// //         }
// //         return cloneHead;
// //     }
// // };

// //Approach 2 --more optimized
// class Solution{
//     private:
//     void insertAtTail(Node* &head, Node* &tail, int d){
//         Node * newNode = new Node(d);

//         if(head == NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             tail -> next = newNode;
//             tail = newNode;
//         }
//     }
//     public:
//     Node *copyList(Node *head){
//         //step1: create a clone list
//         Node *cloneHead = NULL;
//         Node *cloneTail = NULL;

//         Node* temp = head;
//         while(temp != NULL){
//             insertAtTail(cloneHead, cloneTail, temp -> data);
//             temp = temp -> next;
//         }

//         //step2: cloneNodes add in between original list
//         Node *originalNode = head;
//         Node *cloneNode = cloneHead;

//         while(originalNode != NULL && cloneNode != NULL){
//             Node *next = origialNode -> next;
//             originalNOde -> next = cloneNode;
//             originalNode = next;

//             next = cloneNode -> next;
//             cloneNode -> next = originalNode;
//             cloneNode = next;
//         }

//         //step3: random pointer copy
//         temp = head;
//         while(temp != NULL){
//             if(temp -> next != NULL){
//                 temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;   //--arb is place of random in greeksofgreeks
//             }
//             temp = temp -> next -> next;
//         }

//         //step4: reverst changes done in step 2
//         originalNode = head;
//         cloneNode = cloneHead;
//         while(originalNode != NULL && cloneNode != NULL){
//             originalNode -> next = cloneNode -> next;
//             originalNode = originalNode -> next;

//             if(originalNode != NULL){
//                 cloneNode -> next = originalNode -> next;
//             }
//             cloneNode = cloneNode -> next;
//         }

//         //step5: return ans
//         return cloneHead;
//     }
// };
// int main(){

// }



// //Merge sort in singly linked list
// #include<iostream>
// using namespace std;
// Node* findMid(node* head){
//     Node* slow = head;
//     Node* fast = head -> next;
//     while(fast != NULL && fast -> next != NULL){
//         slow = slow -> next;
//         fast = fast -> next -> next;
//     }
//     return slow;
// }
// node* merge(node* left, node* right){
//     if(left == NULL){
//         return right;
//     }
//     if(right == NULL){
//         return left;
//     }
//     node* ans = new node(-1);
//     node* temp = ans;
    
//     //merge 2 sorted linked list
//     while(left != NULL && right != NULL){
//         if(left -> data < right -> data){
//             temp -> next = left;
//             temp = left;
//             left = left -> next;
//         }
//         else{
//             temp -> next = right;
//             temp = right;
//             right = right -> next;
//         }
//     }
//     while(left != NULL){
//         temp -> next = left;
//         temp = left;
//         left = left -> next;
//     }
//     while(right != NULL){
//         temp -> next = right;
//         temp = right;
//         right = right -> next;
//     }
//     ans = ans -> next;
//     return ans;
// }
// node* mergeSort(node* head){
//     //base case
//     if(head == NULL || head -> next == NULL){
//         return head;
//     }
//     //break limited list into 2 halves, after finding mid
//     node *mid = findMid(head);

//     node* left = head;
//     node* right = mid -> next;
//     mid -> next = NULL;

//     //recursive calls to sort both halves
//     left = mergeSort(left);
//     right = mergeSort(right);

//     //merge both left and right halves
//     node* result = merge(left, right);

//     return result;
// }
// int main(){

// }



//Flatten a linked list -- homework(codestudio)