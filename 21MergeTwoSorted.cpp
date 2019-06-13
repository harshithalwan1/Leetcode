#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l3 {};
        ListNode *l4 {};
        if(l1->val<=l2->val){
            l3 = l1;
            l4 = l2;
        }
        else{
            l3 = l2;
            l4 = l1;
        }
        ListNode *result = l3;
        ListNode *temp {};
        while(l4->next!=nullptr){
            if(l3->next==nullptr){
                l3->next = l4;
                return result;
            }
            
            if(l3->next->val<=l4->val){
                l3 = l3->next;
            }
            else{
                temp = l3->next;
                l3->next = l4;
                l4 = l4->next;
                l3->next->next = temp;
                l3 = l3->next;
            }
        }
        
        while(l3->next!=nullptr){
            if(l4 == nullptr){
                return result;
            }
            if(l3->next->val<=l4->val){
                l3 = l3->next;
            }
            else{
                temp = l3->next;
                l3->next = l4;
                l4 = l4->next;
                l3->next->next = temp;
                l3 = l3->next;
            }

        }
        l3->next = l4;
        // if(l3->val<=l4->val){
        //         l3->next=l4;
        //     }
        return result;
    }

int main(){
    ListNode *list1 = new ListNode(0), *list2 = new ListNode(0);
    ListNode *l1 = list1;
    ListNode *l2 = list2;
    vector<int>arr1 = {-10,-10,-9,-4,1,6,6};
    vector<int>arr2 = {-7};
    for(int i = 0; i<arr1.size(); ++i){
        l1->next = new ListNode(arr1[i]);
        l1 = l1->next;
    }
    l1 = list1->next;
    delete list1;
    for(int i = 0; i<arr2.size(); ++i){
        l2->next = new ListNode(arr2[i]);
        l2 = l2->next;
    }
    l2 = list2->next;
    delete list2;

    ListNode *sum = mergeTwoLists(l1,l2);
    while(sum!=NULL){
        cout<<sum->val<<" ";
        sum = sum->next;
    }
}