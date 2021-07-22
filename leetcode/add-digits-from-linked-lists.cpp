
class ListNode
{
    public:
    int val;
    ListNode* next;
};


class Solution {
	public:
    void insert_at_end(ListNode** head_ref, int new_data){
        ListNode* new_node = new ListNode();
        new_node->val = new_data;

        ListNode* pointerToLastNode;
        pointerToLastNode = (*head_ref);
        if(pointerToLastNode == nullptr){
            (*head_ref) = new_node;
            return;
        }
        while(pointerToLastNode->next != nullptr){
            pointerToLastNode = pointerToLastNode->next;
        }
        pointerToLastNode->next = new_node;
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum;
        int carryover = 0;
        ListNode* current1 = l1;
        ListNode* current2 = l2;

        ListNode* result;

        while(!(current1 == nullptr && current2 == nullptr)){
            sum = 0;
            if(current1 != nullptr){
                sum += current1->val;
                current1 = current1->next;
            }
            if(current2 != nullptr){
                sum += current2->val;
                current2 = current2->next;
            }
            sum += carryover;
            carryover = 0;
            if (sum >= 10){
                sum = sum % 10;
                carryover = 1;
            }
            insert_at_end(&result, sum);
        }
        if(carryover == 1){
            insert_at_end(&result, 1);
        }
        return result;
    }
};


