#include <stdio.h>
int main ()
{
    int n,m,i;
    printf ("how many input :");
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        scanf ("%d",&m);
        if (m%11==0){
            continue;
        }
        printf ("%d\n",m);
    }
    return 0;
}

