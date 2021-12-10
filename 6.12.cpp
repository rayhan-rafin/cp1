#include<stdio.h>
int main()
{
    double a[10]={55,68,85,52,85,55,55,70,80,90};
    int i,j,k;

    for (j=50;j<=100;j++){
        k = 0;
            for (i=0;i<=9;i++){
                if (a[i]==j){
                    k++;
                }
            }
            printf("%d student got %d\n",k,j);
    }
    return 0;
}
