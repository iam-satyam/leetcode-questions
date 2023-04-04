/*class Solution {
public:
    ListNode* sortList(ListNode* head) {
        int one=0;
        int two=0;
        int zero=0;
        ListNode* temp=head;
        while(temp!=NULL){
           if(temp->val==0){
               zero++;
               temp=temp->next;
           }
           if(temp->val==1){
               one++;
               temp=temp->next;
           }
           if(temp->val==2){
               two++;
               temp=temp->next;
           }

        }
        temp =head;
        while(temp!=NULL){
            if(zero>0){
                temp->val=0;
                zero--;
                temp=temp->next;

            }
              if(one>0){
                temp->val=0;
                one--;
                temp=temp->next;

            }
              if(two>0){
                temp->val=0;
                two--;
                temp=temp->next;

            }
        }

      return head;
    }
    

};*/
