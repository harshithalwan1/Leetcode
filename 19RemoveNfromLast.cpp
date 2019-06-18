#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<stdio.h>
#include<list>
#include<iterator>


using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* head {};


ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = head;
        ListNode* travarse = head;
        while(n){
            travarse = travarse->next;
            n--;
        }
        if(travarse==nullptr){
            ListNode* temp = head;
            head = head->next;
            free(temp);
            return head;
        }
        while(travarse->next!=nullptr){
            travarse = travarse->next;
            start = start->next;
        }
        ListNode* temp = start->next;
        start->next = start->next->next;
        free(temp);
        return head;
    }

ListNode* Insert(int x){
    if(head == nullptr){
        head = new ListNode(x);
    }
    else{
        ListNode* temp = new ListNode(x);
        temp->next = head;
        head = temp;
    }
    return head;
}

void print(ListNode* head){
    while(head != nullptr){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main() {
    head = Insert(1);
    head = Insert(2);
    head = Insert(3);
    head = Insert(4);
    head = Insert(5);
    // head = Insert(34);
    // head = Insert(17);
    print(head);
    head = removeNthFromEnd(head,5);
    print(head);
}
