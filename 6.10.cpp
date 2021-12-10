#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int i,j,temp;

    for(i=0,j=9; i<5;i++,j--){              //if i <10;swaps 10 times;wrong ans
        temp = a[j];                             // if i <5; swaps 5 times;mirrors till middle; thus right ans
        a[j] = a[i];
        a[i] = temp;
    }

    for (i=0; i<10 ; i++){
        printf ("%d\n",a [i]);
    }
    return 0;
}
