//
// Created by lenovo on 2018/9/12.
//

#include <stdio.h>
int MaxSubSeq1 (int A[], int N)
{
    //时间复杂度为O(N^3)
    int thisSum, maxSum = 0;
    int i, j, k;
    //左边界
    for (i = 0; i < N; i++) {
        //右边界
        for (j = 1; j < N ; j++) {
            thisSum = 0;
            for (k = i; k <= j; k++) {
                thisSum += A[k];
            }
            if(thisSum > maxSum){
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}
int MaxSubSeq2(int A[], int N)
{
    //时间复杂度为O(N^2)
    int thisSum, maxSum = 0;
    int i, j;
    for (i = 0;  i < N; i++) {
        thisSum = 0;
        for (j = i; j < N; j++) {
            thisSum += A[j];
            if (thisSum > maxSum){
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}
int FindMax(int A, int B, int C){
    if (A > B){
        if (A > C) return A;
        else return C;
    }else{
        if (B > C) return B;
        else return C;
    }
}
int DivideAndConquer(int A[], int left, int right)
{
    //时间复杂度为O(NlogN)
    int MaxLeftSum, MaxRightSum;//存放左右子问题的解
    int MaxLeftBorderSum, MaxRightBorderSum;//存放跨分界线的结果
    int LeftBorderSum, RightBorderSum;
    int center, i;

    //递归终止条件，，子列只有一个数字
    if(left == right){
        if(A[left]>0) return A[left];
        else return 0;
    }
    center=(left+right)/2; //找到中分点
    //递归求得子列最大和
    MaxLeftSum=DivideAndConquer(A, left, center);
    MaxRightSum=DivideAndConquer(A, center+1, right);

    //求边界子列和
    MaxLeftBorderSum=0;
    LeftBorderSum=0;

    //中线向左扫描
    for ( i = center; i >=left ; i--) {
        LeftBorderSum+=A[i];
        if(LeftBorderSum>MaxLeftBorderSum){
            MaxLeftBorderSum=LeftBorderSum;
        }
    }/*左边扫描结束*/
    MaxRightBorderSum=0;
    RightBorderSum=0;
    //中线向右扫描
    for (i = center+1;  i<=right ; i++) {
        RightBorderSum+=A[i];
        if(RightBorderSum>MaxRightBorderSum){
            MaxRightBorderSum=RightBorderSum;
        }
    }
    return FindMax(MaxLeftSum, MaxRightSum, MaxLeftBorderSum+MaxRightBorderSum);
}
MaxSubSeq4(int A[], int K)
{
    int i;
    int thisSum, maxSum;
    thisSum = maxSum = 0;
    for(i=0;i<K,i++){
        thisSum+=A[i];
        if(thisSum>maxSum){
            maxSum=thisSum;
        }else if(thisSum<0){
            thisSum=0;
        }
    }
    return maxSum;
}
int main() {
    int maxSeq1, maxSeq2, maxSeq3, maxSeq4;
    int arr[] = {5, 10, -11, 2, 8, 0, -9, -1, 8};
    maxSeq1 = MaxSubSeq1(arr, 9);
    maxSeq2 = MaxSubSeq2(arr, 9);
    maxSeq3 = DivideAndConquer(arr, 0, 8);
    maxSeq4 = MaxSubSeq4(arr, 9);
    printf("%d", maxSeq3);
    return 0;
}