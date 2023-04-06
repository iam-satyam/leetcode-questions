class Solution {
   ListNode* getmid(ListNode *head){
       ListNode* fast=head->next;
     ListNode* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next; 
        fast=fast->next->next;
      
     }
    return slow; 

   }

   ListNode* reverse(ListNode* curr){
       
       
       ListNode*prev=NULL;
       ListNode* nxt=NULL;
      
       while(curr!=NULL){
        nxt=curr->next;
           curr->next =prev;
           prev=curr;
           curr=nxt; }
       return prev;
   }
public:
    bool isPalindrome(ListNode* head) {
    if( head==NULL||head->next==NULL) return true;

    ListNode* middle= getmid(head); 
    ListNode *temp1= middle->next;
    ListNode*head2 = reverse(temp1);
    ListNode*head1=head;
   
    while(head2!=NULL){
        if(head1->val!=head2->val){
             return false;
        }
        else{
             head2=head2->next;
            head1=head1->next;
         }
        
    }
    

    
    return true;
    

    
      
        
    }
};
