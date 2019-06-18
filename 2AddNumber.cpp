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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode* l3 {};
        int carry {};
        if(l1->val + l2->val < 10){
            l3 = new ListNode(l1->val+l2->val);
            carry = 0;
        }
        else{
            l3 = new ListNode(l1->val+l2->val-10);
            carry = 1;
        }
        ListNode* head = l3;
        l1 = l1->next;
        l2 = l2->next;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val + l2->val + carry < 10){
                l3->next = new ListNode(l1->val+l2->val+carry);
                carry = 0;
            }
            else{
                l3->next = new ListNode(l1->val+l2->val+carry-10);
                carry = 1;
            }
            l3 = l3->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr){
            if(l1->val + carry < 10){
                l3->next = new ListNode(l1->val + carry);
                carry = 0;
            }
            else{
                l3->next = new ListNode(l1->val + carry - 10);
                carry = 1;
            }
            l3 = l3->next;
            l1 = l1->next;
        }
        while(l2!=nullptr){
            if(l2->val + carry < 10){
                l3->next = new ListNode(l2->val + carry);
                carry = 0;
            }
            else{
                l3->next = new ListNode(l2->val + carry - 10);
                carry = 1;
            }
            l3 = l3->next;
            l2 = l2->next;
        }
        if(carry) l3->next = new ListNode(carry);
        return head;
    }

ListNode* Insert(vector<int> list){
    ListNode* dummyRoot = new ListNode(0);
    ListNode* ptr = dummyRoot;
    for(int item : list) {
        ptr->next = new ListNode(item);
        ptr = ptr->next;
    }
    ptr = dummyRoot->next;
    delete dummyRoot;
    return ptr;
}

void print(ListNode* head){
    while(head != nullptr){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main() {
    vector<int> vec1 = {0};
    vector<int> vec2 = {7,3};
    ListNode* l1 = Insert(vec1);
    ListNode* l2 = Insert(vec2);
    print(l1);
    print(l2);
    print(addTwoNumbers(l1,l2));
}
