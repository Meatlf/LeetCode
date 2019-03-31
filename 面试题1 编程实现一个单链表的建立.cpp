// 链表节点的定义
typedef struct node{         
        int data;   // 节点内容
        node *next; // 下一个点
}node;

// 创建单链表
node *create(){

        head = (node *)malloc(sizeof(node));
        
}