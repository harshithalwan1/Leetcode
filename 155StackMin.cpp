#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

 class MinStack {
public:
    struct ListNode {
        int val;
        int min;
        ListNode *next;
        ListNode(int x, int m) : min(m), val(x), next(NULL) {}
    };
    ListNode *head {};
    MinStack() {
    }
    
    void push(int x) {
        if(head==nullptr) {
            head = new ListNode(x,x);
        }
        else{
            int min = head->min;
            if(x<head->min){
                min = x;
            }
            ListNode* temp {};
            temp = head;
            head = new ListNode(x,min);
            head->next = temp;            
        }
    }
    
    void pop() {
        if(head!=nullptr){
            head = head->next;
        }
    }
    
    int top() {
        int topEle = head->val;
        return topEle;
    }
    
    int getMin() {
        return head->min;
    }
    void printList(){
        ListNode *printHead = head;
        while(printHead!=nullptr){
            cout<<printHead->val<<" ";
            printHead = printHead->next;
        }
        cout<<endl;
    }
};


int main() {
    MinStack* obj = new MinStack();
    obj->push(5);
    obj->push(3);
    cout<<obj->getMin()<<endl;
    obj->push(7);
    obj->push(27);
    obj->push(10);
    obj->push(-30);
    obj->printList();
    obj->pop();
    obj->printList();
    cout<<obj->top()<<endl;
    cout<<obj->getMin();

}
