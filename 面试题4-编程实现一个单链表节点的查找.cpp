// 查找单链表 pos 位置的节点，返回节点指针
// pos 从 0 开始，0 返回 head 指针
node *search_node(node *head, int pos){
    node *p = head -> next;
    if (pos < 0)                            // pos位置不正确
    {
        printf("incorrect position to search node!\n");
        return NULL;
    }
    if (pos == 0){                          // 在 head 位置，返回 head
        return head;
    }
    if (p == NULL){                         
        printf("Link is empty!\n");         // 链表为空
        return NULL;
    }

    while(--pos){
        if((p = p -> next) == NULL){        // 超出链表返回
            printf("incorrect position to search node!\n");
            break;
        }
    }
    return p;
}