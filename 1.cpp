#include <iostream>
using namespace std;
struct ListNode{
    char val;
    ListNode* next;
    ListNode(char x) : val(x),
    next(nullptr){}
};
bool isPalindrome(ListNode* head){
    if(!head || head->next) return true;
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next && fast->next->next){
        slow= slow->next;
        fast=fast->next->next;
    }
}
int main(){
    cout<<"Hello World"<<endl;
}