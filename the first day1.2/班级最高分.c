/*从键盘上输入一个班学生一门课的成绩(每班最多40人，具体人数自行输入)，使用函数编程实现输出最高分及其学号*/
#include<stdio.h>
#define N 40
void Findmax(float score[],long num[],int n,float *pMaxScore,long *pMaxNum);//define a function
int main(void)
{
   float score[N],maxscore;
   int n,i;
   long num[N],maxnum;
   printf("please enter the number of students:\n");
   scanf("%d",&n);
   printf("please enter the student id and score:\n");
   for(i=0;i<n;i++)
   {
       scanf("%ld %f",&num[i],&score[i]);
   }
   Findmax(score,num,n,&maxscore,&maxnum);
   printf("maxscore=%.f,maxnum=%ld",maxscore,maxnum);
}
void Findmax(float score[],long num[],int n,float *pMaxScore,long *pMaxNum)
{
    int i;
    *pMaxScore=score[0];
    *pMaxNum=num[0];
    for(i=1;i<n;i++)
    {
       if(score[i]>*pMaxScore)
       {
           *pMaxScore=score[i];
           *pMaxNum=num[i];
       }
    }
}
