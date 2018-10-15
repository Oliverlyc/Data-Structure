#include <stdio.h>
#include <malloc.h>
//链式存储结构
typedef struct LNode *List;
typedef int ElementType;
struct LNode{
    ElementType Data;
    List Next;
};
//求表长
int Length(List PtrL){
    List p = PtrL;//p指向表的第一个结点
    int j = 0;
    while(p){
        p = p->Next;
        j++;
    }
    return j;

}
//按序号查找
List FindKth(int K, List PtrL)
{
    List p = PtrL;
    int i = 1;
    while (p != NULL && i<K){
        p = PtrL->Next;
        i++;
    }
    if (i == K){
        return p;//返回指针
    }else{
        return NULL;
    }
}
//按值查找
List Find(ElementType X, List PtrL)
{
    List p = PtrL;
    while(p!=NULL && p->Data != X){
        p = p->Next;
    }
}
List Insert(ElementType X, int i, List PtrL)
{
    List p,s;
    //新结点插在表头,没有第0个所以要先判断
    if(i==1){
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = PtrL;
        return s;
    }
    p = Find(i-1, PtrL);
    if (p==NULL){
        printf("参数i错误");
        return NULL;
    }else{
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = p->Next;
        p->Next = s;
        return PtrL;
    }
}
List Delete(int i, List PtrL)
{
    List p,s;
    if(i == 1){
        s = PtrL;
        if(PtrL!=NULL){
            PtrL = PtrL->Next;
        }else{
            return NULL;
        }
        free(s);//释放结点
        return PtrL;
    }
    p = FindKth(i-1, PtrL);
    if(p === NULL){
        printf("第%d个结点不存在", i-1);
        return NULL;
    }else if(p->Next == NULL){
        printf("第%d个结点不存在", i);
        return NULL;
    }else{
        s = p->Next;
        p->Next = s->Next;
        free(s);
        return NULL;
    }
}
int main() {
    struct LNode L;
    List PtrL;
    printf("Hello, World!\n");
    return 0;
}