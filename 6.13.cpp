#include<stdio.h>
int main()
{
    int mark[]={20,20,35,48,50,70,70,80,20,95};
    int student[101];
    int i;

    for (i=0;i<101;i++){
        student[i]=0;
    }
   for(i=0;i<10;i++){
     student[mark[i]]++;      //when mark of index 0,1,2 or 20,20,35 applied increases the index number 20,20,35 value by 1 each time of student array
   }
   for (i=0;i<=100;i++){
    printf ("mark:%d\tstudent number:%d\n",i,student[i]);
   }
   return 0;
}
