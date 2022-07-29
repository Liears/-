class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        while (head) {
            ans.push_back(head->val);
            head = head->next;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};