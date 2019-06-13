#include<iostream>
#include<string>
#include<vector>
#include<vector>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        
        ListNode *l3 = new ListNode(0);
        ListNode *result = l3;
        int carry {};       
        while(l1->next!=NULL || l2->next!=NULL){
            if(l1->next==NULL){
                if(l2->val + carry < 10){
                    l3->val = l2->val + carry;
                    carry = 0;
                }
                else{
                    l3->val = l2->val + carry - 10;
                    carry = 1;
                }
            }
            else if(l2->next==NULL){
                if(l1->val + carry < 10){
                    l3->val = l1->val + carry;
                    carry = 0;
                }
                else{
                    l3->val = l1->val + carry - 10;
                    carry = 1;
                }
            }

            else {
                if(l1->val + l2->val + carry < 10){
                    l3->val = l1->val + l2->val + carry;
                    carry = 0;
                }
                else{
                    l3->val = l1->val + l2->val + carry - 10;
                    carry = 1;
                }
            }
            l3->next = new ListNode(0);
                l3 = l3->next;
                l1 = l1->next;
                l2 = l2->next;
        }
        if(carry==1){
            l3->val = 1;
            l3->next = new ListNode(0);
        }
    
        return result; 
    }
 

int main() {
    ListNode *list1 = new ListNode(0), *list2 = new ListNode(0);
    ListNode *l1 = list1;
    ListNode *l2 = list2;
    vector<int>arr1 = {2,4,3};
    vector<int>arr2 = {5,6,2,5};
    for(int i = 0; i<arr1.size(); ++i){
        l1->val = arr1[i];
        l1->next = new ListNode(0);
        l1 = l1->next;
    }
    for(int i = 0; i<arr2.size(); ++i){
        l2->val = arr2[i];
        l2->next = new ListNode(0);
        l2 = l2->next;
    }
    // while(list1->next!=NULL){
    //     cout<<list1->val<<" ";
    //     list1 = list1->next;
    // }
    // cout<<endl;
    // while(list2->next!=NULL){
    //     cout<<list2->val<<" ";
    //     list2 = list2->next;
    // }
    // cout<<endl;
    ListNode *sum = addTwoNumbers(list1,list2);
    while(sum->next!=NULL){
        cout<<sum->val<<" ";
        sum = sum->next;
    }
}