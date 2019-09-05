#include<bits/stdc++.h>
using namespace std;

class List
{
public:
    int data;
    List *next;
    List()
    {
        next = NULL;
    }

List *head = NULL;
void insert(int num) {
    /* Create a new Linked List node */
    List *newNode = new List; //(struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    /* Next pointer of new node will point to head node of linked list  */
    newNode->next = head;
    /* make new node as new head of linked list */
    head = newNode;
}

/* It returns a new linked list, after copying nodes in reverse order  */
List *reverseCopy(List *head) {
    List *newHead = NULL, *temp;
    /* Input Validation */
    if (head == NULL) {
       printf("Error : Invalid node pointer !!!\n");
       return;
    }

    while(head != NULL) {
        temp = new List; //(struct node*) malloc(sizeof(struct node));
        temp->data = head->data;
        temp->next = newHead;
        newHead = temp;
        head = head->next;
    }

    return newHead;
}

int compareLinkedList(List *LLOne, List *LLTwo){
    while (LLOne != NULL && LLTwo != NULL) {
        if (LLOne->data != LLTwo->data)
            return 0;

        /* current node of both Linked List is same,
        hence we will continue comparision till we
        find unequal nodes or end of both LL*/
        LLOne = LLOne->next;
        LLTwo = LLTwo->next;
    }

    /* If both Linked list are equal then
    both pointer should be NULL here */
    return (LLOne == NULL && LLTwo == NULL);
}

/*
Prints a linked list from head node till tail node
*/
void printLinkedList(List *nodePtr) {
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf("-->");
  }
}

int main() {
    List *reverseLL;
    int i, nodeCount, temp;
    initialize();
    /* Creating a linked List*/
    printf("Enter number of Nodes in Linked List\n");
    scanf("%d", &nodeCount);
    printf("Enter %d integers\n", nodeCount);
    for(i = 0; i < nodeCount; i++){
        scanf("%d", &temp);
        insert(temp);
    }

    printf("\nLinked List\n");
    printLinkedList(head);

    /* Reverse Input Linked List */
    reverseLL = reverseCopy(head);

    if(compareLinkedList(head, reverseLL)){
        printf("\nPalindrome Linked List\n");
    } else {
        printf("\nNot a Palindrome Linked List\n");
    }

    return 0;
}
