```
class Solution {
public:
ListNode* reverseKGroup(ListNode* head, int k) {
stack<int> st;
ListNode* temp1=head;
ListNode* temp2=head;
int n = 0;
while(temp1!=NULL){
n++;
temp1=temp1->next;
}
temp1=head;
​
int i =0;
while(i<n){
if(n-i>=k){
for(int r=0;r<k;r++){
st.push(temp1->val);
temp1=temp1->next;
}
for(int l=0;l<k;l++){
temp2->val=st.top();
st.pop();
temp2=temp2->next;
}
i+=k;
}
else{
return head;
}
}
return head;
}
};
```