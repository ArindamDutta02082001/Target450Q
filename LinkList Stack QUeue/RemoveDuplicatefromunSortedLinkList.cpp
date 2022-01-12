// link:https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
// CODE LIBRARY
Node * removeDuplicates( Node *head) 
    {
        
        if(head==NULL)
        {
            return NULL;
        }
        map<int,int>m;
    
        Node * p1=head;
        Node * p2=head->next;
    m[p1->data]=1;    
        while(p2!=NULL)
        {
            if(m[p2->data]==1)
            {
                p1->next=p2->next;
                p2=p2->next;
                
            }
            else
            {
                m[p2->data]=1;
                p1=p1->next;
                 p2=p2->next;
            }
        }
     return head;
}