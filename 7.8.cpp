#include<stdio.h>
int test(int ary[],int n);
int main()
{
    int ary[] = {1,5,6,4,7,7,8,4,6,5};
    int n = 10;
    int max = test (ary,n);
    printf ("%d",max);
    return 0;
}
int test (int ary[],int n)
{
    int i;
    int max = ary [0];
    for (i=1;i<n;i++){
        if (ary [i] > max){
            max = ary [i];
        }
    }
    return max;
}
