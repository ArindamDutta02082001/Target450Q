// type 1
// link:https://leetcode.com/problems/rotate-list/
class Solution {
public:
    
    ListNode * func(ListNode * head){
    ListNode * p1=head;
        while(p1->next->next!=NULL)
            p1=p1->next;
       ListNode *t=p1->next;
        p1->next=NULL;
        t->next=head;
        return t;
        
    
    }
      
    ListNode* rotateRight(ListNode* head, int k) {
if(head==NULL)
    return NULL;
        if(head->next==NULL)
            return head;
        
        
        
        
        int l=0;
       ListNode *c=head;
        while(c!=NULL)
        {
            c=c->next;
            l++;
        }
        
       
        if(k>l)
        {
        k=k%l;
        }
            while(k)
            {
                head=func(head);
                k--;
            }
        return head;
        
    }
};


// type 2
// link:https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1
 Node* rotate(Node* head, int k)
    {
        
        if(head==NULL)
    return NULL;
        
        Node * t=head;
        Node * t2=head;
     
        int l=0;
     
        while(t2->next!=NULL){
        t2=t2->next;
        
        }
      
        while(k!=1 && t->next!=NULL )
        {
            t=t->next;
            k--;
            
        }
        if(t->next!=NULL){
        Node *x=t->next;
        t2->next=head;
        t->next=NULL;
        return x;
        }
        else
        return head;
     
    }