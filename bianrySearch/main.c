#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;
typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );

Position BinarySearch(List t,ElementType X)
{
    int mid, low, hig;
    low = 1;
    hig = t->Last;
    while(low <= hig){
        mid = (low+hig)/2;
        if(t->Data[mid] == X){
            return mid;
        }else if(t->Data[mid] > X){
            low = low+1;
            hig = mid-1;
        }else if(t->Data[mid] < X){
            low = mid+1;
            hig = hig-1;
        }else{
            return NotFound;
        }
    }
}
int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

