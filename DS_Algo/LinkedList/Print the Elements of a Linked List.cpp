#include <bits/stdc++.h>

using namespace std;


void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
