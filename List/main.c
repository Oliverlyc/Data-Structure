#include <stdio.h>
#include <malloc.h>
#define MAXSIZE 20
//顺序存储结构
typedef int ElementType;
typedef struct LNode *List;
struct LNode{
    ElementType Data[MAXSIZE];
    int Last;
};
//初始化表
List MakeEmpty()
{
    List PtrL;
    PtrL = (List)malloc(sizeof(struct LNode));
    PtrL->Last = -1;
    return PtrL;
}
//查找平均时间复杂度O(n)
int Find(ElementType X, List PtrL)
{
    int i = 0;
    while(i<=PtrL->Last && PtrL->Data[i] != X){
        i++;
    }
    if(i> PtrL->Last) return -1;
    else return i;
}
//插入
void Insert(ElementType X, int i, List PtrL)
{
    int j;
    if(PtrL->Last == MAXSIZE-1){
        printf("表满");
        return;
    }
    if (i<1||i>PtrL->Last+2){
        printf("位置不合法");
        return;
    }
    for(j = PtrL->Last; j>=i-1; j--){
        PtrL->Data[j+1] = PtrL->Data[j];
        PtrL->Data[i-1] = X;//新元素插入
        PtrL->Last++;//Last指向对后元素
        return;
    }

}
void Delete(int i, List PtrL){
    int j;
    if (i<1||PtrL->Last+1){
        printf("不存在第%d个元素", i);
        return;
    }
    for(j=i;j<=PtrL->Last;j++){
        PtrL->Data[j-1] = PtrL->Data[j];//将ai+1~an向前移动
        PtrL->Last--;
        return;
    }
}
int main() {
    printf("Hello, World!\n");
    return 0;
}