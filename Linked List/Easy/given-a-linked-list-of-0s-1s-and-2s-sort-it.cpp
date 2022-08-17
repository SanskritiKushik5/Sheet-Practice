class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        vector<int> temp;
        Node* samp = head;
        Node* samp2 = head;
        while(samp!=NULL){
            temp.push_back(samp->data);
            samp = samp->next;
        }
        sort(temp.begin(), temp.end());
        int i=0;
        while(samp2!=NULL){
            samp2->data = temp[i];
            samp2 = samp2->next;
            ++i;
        }
        return head;
    }
};
