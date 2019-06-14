#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

 class MinStack {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    ListNode *head = new ListNode(0);
    //ListNode *sortHead = new ListNode(0);
    //int min {};
    MinStack() {
    }
    
    void push(int x) {
        if(head->next==nullptr) {
            head->next = new ListNode(x);
            //sortHead->next = head->next;
        }
        else{
            ListNode* temp {};
            temp = head->next;
            head->next = new ListNode(x);
            head->next->next = temp;
            //ListNode *traverse = sortHead;
            // while(traverse->next!=nullptr){
            //     if(x >= traverse->next->val){
            //         traverse->next = traverse->next->next;
            //     }
            //     else{

            //     }
            // }
        }
    }
    
    void pop() {
        if(head->next!=nullptr){
            head->next = head->next->next;
        }
    }
    
    int top() {
        int topEle = head->next->val;
        return topEle;
    }
    
    // int getMin() {
    //     return sortHead->next->val;
    // }
    void printList(){
        ListNode *printHead = head;
        int i {};
        while(printHead->next!=nullptr){
            cout<<printHead->next->val<<" ";
            printHead = printHead->next;
        }
        cout<<endl;
    }
};


int main() {
    MinStack* obj = new MinStack();
    obj->push(5);
    obj->push(3);
    obj->push(7);
    obj->push(27);
    obj->push(-3);
    obj->push(10);
    obj->printList();
    obj->pop();
    obj->printList();
    cout<<obj->top()<<endl;
    //cout<<obj->getMin();

}
