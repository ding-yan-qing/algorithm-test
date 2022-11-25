/*
public class ListNode
{
    public int val;
    public ListNode next;
    public ListNode (int x)
    {
        val = x;
    }
}*/
using System;
class Solution
{
    public ListNode Merge(ListNode pHead1, ListNode pHead2)
    {
        // write code here
        if(null == pHead1)
        return pHead2;
        if(null == pHead2)
        return pHead1;
        int min = (int)MathF.Min((float)pHead1.val, (float)pHead2.val);
        ListNode head = new ListNode(min -1);
        ListNode temp = head;
        ListNode m = pHead1;
        ListNode n = pHead2;
        while(true){
            if(null == m && null == n){
                break;
            }else if(null == n){
                temp.next = m;
                temp = m;
                m = m.next;
            }else if(null == m){
                temp.next = n;
                temp = n;
                n = n.next;
            }else{
                if(m.val <= n.val){
                    temp.next = m;
                    temp = m;
                    m = m.next;
                }else{
                    temp.next = n;
                    temp = n;
                    n = n.next;
                }
            }
        }
        return head.next;
    }
}