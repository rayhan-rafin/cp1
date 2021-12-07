#include<stdio.h>
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int i;
    for (i = 9 ; i >=0 ;i--){
        printf("%dth number is %d\n",i+1,a[i]);
    }
    return 0;
}
