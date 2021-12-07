#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    int b[10];
    int i,j;
    for (i = 9,j=0 ; i >=0 ;i--,j++){
            b[j]=a[i];
            a[i]=b[j];               //copied to a [i];
            printf("%d\n",a[i]);
    }
    return 0;
}

