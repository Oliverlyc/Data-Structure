#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
//一元多项式加法 乘法
//typedef int ElementType;
//typedef struct Node *PtrToNode;
//struct Node {
//    ElementType Ceof;
//    ElementType Expon;
//    PtrToNode   Next;
//};
//typedef PtrToNode List;
//
//List readList()
//{
//    List L,tmp,head;
//    int n;
//    L = (List)malloc(sizeof(List));
//    L->Next = NULL;
//    head = L;
//    scanf("%d", &n);
//    if (n>0){
//        for (int i = 0; i < n; i++) {
//            tmp = (List)malloc(sizeof(List));
//            scanf("%d%d", &(tmp->Ceof), &(tmp->Expon));
//            tmp->Next = NULL;
//            L->Next = tmp;
//            L = tmp;
//        }
//    }
//    return head;
//}
//
//void printList(List L)
//{
//    List tmp = L->Next;
//    if(!tmp){
//        printf("0 0\n");
//    }else{
//        while(tmp){
//            if(tmp->Next != NULL){
//                printf("%d %d ", tmp->Ceof, tmp->Expon);
//            }else{
//                printf("%d %d\n", tmp->Ceof, tmp->Expon);
//            }
//            tmp = tmp->Next;
//        }
//    }
//
//}
//
//List addList(List L1, List L2)
//{
//    List L, head, t1, t2;
//    L = (List)malloc(sizeof(List));
//    L->Next = NULL;
//    head = L;
//    t1 = L1->Next;
//    t2 = L2->Next;
//    while (t1 != NULL && t2 != NULL){
//        List tmp = (List)malloc(sizeof(List));
//        tmp->Next = NULL;
//        if(t1->Expon > t2->Expon){
//            tmp->Ceof = t1->Ceof;
//            tmp->Expon = t1->Expon;
//            L->Next = tmp;
//            L = tmp;
//            t1 = t1->Next;
//        }else if(t1->Expon < t2->Expon){
//            tmp->Ceof = t2->Ceof;
//            tmp->Expon = t2->Expon;
//            L->Next = tmp;
//            L = tmp;
//            t2 = t2->Next;
//        }else if(t1->Expon == t2->Expon){
//            if((t1->Ceof + t2->Ceof) == 0){
//                t1 = t1->Next;
//                t2 = t2->Next;
//            }else{
//                tmp->Ceof = t1->Ceof + t2->Ceof;
//                tmp->Expon = t1->Expon;
//                L->Next = tmp;
//                L = tmp;
//                t1 = t1->Next;
//                t2 = t2->Next;
//
//            }
//        }
//    }
//    if(t1 == NULL){
//        L->Next = t2;
//    }else if(t2 == NULL){
//        L->Next = t1;
//    }
//    return head;
//}
//List multiByNode(List L1, struct Node L2)
//{
//    List L, head, t1;
//    L = (List)malloc(sizeof(List));
//    L->Next = NULL;
//    head = L;
//    t1 = L1->Next;
//     while(t1){
//         List tmp = (List)malloc(sizeof(List));
//         tmp->Next = NULL;
//         tmp->Ceof = t1->Ceof*L2.Ceof;
//         tmp->Expon = t1->Expon + L2.Expon;
//         L->Next = tmp;
//         L = tmp;
//         t1 = t1->Next;
//     }
//     return head;
//}
//List multiList (List L1, List L2)
//{
//    List L, head, t1, t2, tmp;
//    L = (List)malloc(sizeof(List));
//    L->Next = NULL;
//    head = L;
//    t1 = L1->Next;
//    t2 = L2->Next;
//    if (t1 != NULL && t2 != NULL){
//        tmp = multiByNode(L1, *t2);
//        t2 = t2->Next;
//        while(t2){
//            List tmp1 = multiByNode(L1, *t2);
//            tmp = addList(tmp, tmp1);
//            t2 = t2->Next;
//        }
//        L->Next = tmp->Next;
//    }
//    return head;
//}
//int main()
//{
//    List L1, L2, lAdd, lMulti;
//    L1 = readList();
//    L2 = readList();
//    lMulti = multiList(L1, L2);
//    lAdd = addList(L1, L2);
//    printList(lMulti);
//    printList(lAdd);
//    return 0;
//}
//struct arr{
//    int max;
//    int low;
//    int high;
//}array;
//struct arr maxSeq(int a[], int N){
//    int thisSum;
//    int check = 1;
//    array.max = 0;
//    for (int i = 0; i < N; i++) {
//        thisSum = 0;
//        if(a[i]>= 0){
//           check = 0;
//        }
//        for (int j = i; j < N; j++) {
//            thisSum +=a[j];
//            if(thisSum>array.max){
//                array.max=thisSum;
//                array.low = a[i];
//                array.high = a[j];
//            }
//        }
//    }
//    if(check) {
//        array.low = a[0];
//        array.high = a[N - 1];
//    }else if(array.max == 0){
//        array.low = 0;
//        array.high = 0;
//    }
//    return array;
//}
//int main(){
//    int N,i;
//    int a[10000];
//    struct arr max;
//    scanf("%d",&N);
//    for(i=0;i<N;i++){
//        scanf("%d",&a[i]);
//    }
//    max = maxSeq(a,N);
//    printf("%d %d %d",max.max,max.low,max.high);
//    return 0;
//}

