class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode*curr=head;
        while(curr!=NULL){
            if((curr->next!=NULL)&&curr->val==curr->next->val){
                ListNode* next_next=curr->next->next;
                ListNode*todel=curr->next;
                todel->next=NULL;
                curr->next=next_next;
                


            }
            else{
                 curr=curr->next;
            }
        }
        return head;
        
        
    }
    
};
