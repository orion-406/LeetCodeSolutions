struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int sum;
        int overflow = 0;

        ListNode* ret = new ListNode();
        ListNode* current = ret;

        while (l1 && l2)
        {
            sum = l1->val + l2->val + overflow;
            current->val = sum % 10;
            overflow = (sum >= 10 ? 1 : 0);
            l1 = l1->next;
            l2 = l2->next;
            if (l1 || l2)
            {
                current->next = new ListNode();
                current = current->next;
            }
        }
        
        

        while (l1 || l2)
        {
            if (l1)
            {
                sum = l1->val + overflow;
                current->val = sum % 10;
                overflow = (sum >= 10 ? 1 : 0);
                if (l1->next)
                {
                    current->next = new ListNode();
                    current = current->next;
                }
                l1 = l1->next;
            }
            if (l2)
            {
                sum = l2->val + overflow;
                current->val = sum % 10;
                overflow = (sum >= 10 ? 1 : 0);
                if (l2->next)
                {
                    current->next = new ListNode();
                    current = current->next;
                }
                l2 = l2->next;
            }
        }

        if (overflow)
        {
            current->next = new ListNode(overflow);
        }

        return ret;
    }
};