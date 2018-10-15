#include <stdio.h>
#include <malloc.h>
#include <Queue.h>
#define NoInfo 0
typedef struct TNode *Position;
typedef struct SNode *PtrToSNode;
typedef Position BinTree;
typedef PtrToSNode Stack;
typedef int ElementType;
typedef int StackPosition;

typedef enum { true=1, false} bool;
struct TNode{
    ElementType Data;
    BinTree Left; //左子树
    BinTree Right;  //右子树
};
struct SNode{
    ElementType *Data;
    StackPosition Top;
    int MaxSize;
};
bool isEmpty(BinTree BT);
void PerOrderTraversal(BinTree BT); //先序遍历
void InOrderTraversal(BinTree BT); //中序遍历
void PostOrderTraversal(BinTree BT); //中序遍历
Stack CreateStack(int MaxSize)
{
    Stack S = (Stack)malloc(sizeof(struct SNode));
    S->Data = (ElementType *)malloc(sizeof(MaxSize* sizeof(ElementType)));
    S->Top = -1;
    S->MaxSize = MaxSize;
    return S;
}
bool StackIsEmpty(Stack S)
{
    return (S->Top == -1);
}
bool StackIsFull(Stack S)
{
    return (S->Top == S->MaxSize-1);
}
bool Push(Stack S, ElementType X)
{
    if (StackIsFull(S)){
        printf("堆栈满");
        return false;
    }else{
        S->Data[++(S->Top)] = X;
        return true;
    }
}
ElementType Pop(Stack S)
{
    if(StackIsFull(S)){
        printf("堆栈空");
        return false;
    }else{
        return (S->Data[(S->Top)--]);
    }
}
/* 先序遍历
 * 访问根节点
 * 先序遍历左子树
 * 先序遍历右子树
 * */
void PerOrderTraversal(BinTree BT)
{
    if (BT){
        printf("%d", BT->Data);
        PerOrderTraversal(BT->Left);
        PerOrderTraversal(BT->Right);
    }
}
/*中序遍历
 * 中序遍历左子树
 * 访问根节点
 * 中序遍历右子树
 * */
void InOrderTraval(BinTree BT)
{
    if (BT){
        PerOrderTraversal(BT->Left);
        printf("%d", BT->Data);
        PerOrderTraversal(BT->Right);
    }
}
/*后序遍历
 * 后序遍历左子树
 * 后序遍历右子树
 * 访问根节点
 * */
void PostOrderTraval(BinTree BT)
{
    if (BT){
        PerOrderTraversal(BT->Left);
        PerOrderTraversal(BT->Right);
        printf("%d", BT->Data);
    }
}
/*中序遍历非递归遍历算法
 *
 * */
void InOrderTravalWithStack(BinTree BT)
{
    int MaxSize = 100;
    Stack S = CreateStack(MaxSize);
    while(BT || !StackIsEmpty(S)){
        while(BT){
            Push(S, BT);
            BT = BT->Left;
        }
        if(!StackIsEmpty(S)){
            BT = Pop(S);
            printf("%5d", BT->Data);
            BT = BT->Right;
        }
    }
}
int PostOrderGetHeight(BinTree BT)
{
    int HL, HR, MaxH;
    if(BT){
        HL = PostOrderGetHeight(BT->Left); //左子树深度
        HR = PostOrderGetHeight(BT->Right); //右子树深度
        MaxH = (HL>HR)?HL:HR; //取较大的深度
        return (MaxH + 1); //返回树的深度
    }
    else return 0; //空树深度为0
}
BinTree LevelCreateTree()
{
    ElementType Data;
    BinTree BT, T;
    Queue Q = CreateQueue(100);

    scanf("%d", &Data);
    //建立根节点
    if (Data != NoInfo){
        //分配根节点单元，根节点入队
        BT = (BinTree)malloc(sizeof(struct TNode));
        BT->Data = Data;
        BT->Left = BT->Right = NULL;
        AddQ(Q, BT);
    }else{
        return NULL;
    }

    
    while(!QueueIsEmpty(Q)){
        /* code */
    }
    
}
int main() {
    printf("Hello, World!\n");
    return 0;
}
