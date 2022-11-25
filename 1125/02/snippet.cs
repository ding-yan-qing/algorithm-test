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
class Solution
{
    public ListNode ReverseList(ListNode pHead)
    {
        // write code here
        ListNode pre = null;
        ListNode cur = pHead;
        ListNode next = null;

        while(cur != null){
            next = cur.next;
            cur.next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
}