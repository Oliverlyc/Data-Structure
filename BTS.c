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
    BinTree Left; //������
    BinTree Right;  //������
};
struct SNode{
    ElementType *Data;
    StackPosition Top;
    int MaxSize;
};
bool isEmpty(BinTree BT);
void PerOrderTraversal(BinTree BT); //�������
void InOrderTraversal(BinTree BT); //�������
void PostOrderTraversal(BinTree BT); //�������
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
        printf("��ջ��");
        return false;
    }else{
        S->Data[++(S->Top)] = X;
        return true;
    }
}
ElementType Pop(Stack S)
{
    if(StackIsFull(S)){
        printf("��ջ��");
        return false;
    }else{
        return (S->Data[(S->Top)--]);
    }
}
/* �������
 * ���ʸ��ڵ�
 * �������������
 * �������������
 * */
void PerOrderTraversal(BinTree BT)
{
    if (BT){
        printf("%d", BT->Data);
        PerOrderTraversal(BT->Left);
        PerOrderTraversal(BT->Right);
    }
}
/*�������
 * �������������
 * ���ʸ��ڵ�
 * �������������
 * */
void InOrderTraval(BinTree BT)
{
    if (BT){
        PerOrderTraversal(BT->Left);
        printf("%d", BT->Data);
        PerOrderTraversal(BT->Right);
    }
}
/*�������
 * �������������
 * �������������
 * ���ʸ��ڵ�
 * */
void PostOrderTraval(BinTree BT)
{
    if (BT){
        PerOrderTraversal(BT->Left);
        PerOrderTraversal(BT->Right);
        printf("%d", BT->Data);
    }
}
/*��������ǵݹ�����㷨
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
        HL = PostOrderGetHeight(BT->Left); //���������
        HR = PostOrderGetHeight(BT->Right); //���������
        MaxH = (HL>HR)?HL:HR; //ȡ�ϴ�����
        return (MaxH + 1); //�����������
    }
    else return 0; //�������Ϊ0
}
BinTree LevelCreateTree()
{
    ElementType Data;
    BinTree BT, T;
    Queue Q = CreateQueue(100);

    scanf("%d", &Data);
    //�������ڵ�
    if (Data != NoInfo){
        //������ڵ㵥Ԫ�����ڵ����
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
