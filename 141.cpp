//  C和C++程序员面试秘笈 第8章 面试题10
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p1 = head, *p2 = head;
        if(head == NULL || head -> next == NULL)
            return false;
        do{
            p1 = p1 -> next;
            p2 = p2 -> next -> next;
        }while(p2 && p2 -> next && p1 != p2);
            
        if (p1 == p2)
            return true;    
        else
            return false;
    }
};