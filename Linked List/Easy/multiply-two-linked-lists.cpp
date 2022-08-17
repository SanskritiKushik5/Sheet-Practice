long long  multiplyTwoLists (Node* l1, Node* l2)
{
    string s1 = "", s2 = "";
    long long int num1 = 0, num2 = 0; 
    long long N= 1000000007;
    
    while(l1){
        num1 = (num1 * 10)%N + l1->data;
        l1 = l1->next;
    }
    while(l2){
        num2 = (num2 * 10)%N + l2->data;
        l2 = l2->next;
    }
    
    return ((num1%N)*(num2%N))%N;
}
