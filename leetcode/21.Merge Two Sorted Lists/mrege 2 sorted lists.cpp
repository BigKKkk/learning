/*
Merge two sorted linked lists and return it as a new list.
The new list should be made by splicing together the nodes of the first two lists.
*/
/**
 * Definition for single-linked list.
 * struct ListNode{
 *      int val;
 *      ListNode *next;
 *      ListNode(int x) : val(x), next(NULL) {}
 * }
 */
class Solution{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        ListNode *l3 = new ListNode(0);
        ListNode *l4 = l3;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val <= l2->val)
            {
                l4->next = l1;
                l1 = l1->next
            } 
            else
            {
                l4->next = l2;
                l2 = l2->next;
            }
            l4 = l4->next;
        }
        if (l1 != NULL)
        {
            l4->next = l1;
        }
        else
        {
            l4->next = l2;
        }
        return l3->next;
    }
}
/**
* @file （本文件的文件名eg：mib.h） * @brief （本文件实现的功能的简述）
*	@version 1.1	（版本声明）
*	@author	（作者，eg：张三）
*	@date	（文件创建日期，eg：2010年12月15日）
*/

函数头注释：

/** *@ Description:向接收方发送SET请求
*	@param req - 指向整个SNMP SET 请求报文.
*	@param ind - 需要处理的subrequest 索引.
*	@return 成功：SNMP_ERROR_SUCCESS，失败：SNMP_ERROR_COMITFAIL
*/

