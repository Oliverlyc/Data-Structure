// 队列头文件
#include<malloc.h>
typedef int Postion;
typedef struct QNode *PtrToQNode;
typedef int ElementType;
typedef enum{true = 1, false} bool;
struct QNode
{
    ElementType *Data;
    Postion Front,Rear;
    int MaxSize;
};
typedef PtrToQNode Queue;
//创建队列
Queue CreateQueue(int MaxSize)
{
    Queue Q = (Queue)malloc(sizeof(struct QNode));
    Q->Data = (ElementType *)malloc(MaxSize*sizeof(ElementType));
    Q->Front = Q->Rear = 0;
    Q->MaxSize = MaxSize;
    return Q;
}
bool QueueIsFull(Queue Q)
{
    return((Q->Rear+1)%Q->MaxSize == Q->Front);
}
bool AddQ(Queue Q, ElementType X)
{
    if(QueueIsFull(Q)){
        printf("队列满");
        return false;
    }else{
        Q->Rear = (Q->Rear+1)%Q->MaxSize;
        Q->Data[Q->Rear] = X;
        return true;
    }
}