/*�Ӽ���������һ����ѧ��һ�ſεĳɼ�(ÿ�����40�ˣ�����������������)��ʹ�ú������ʵ�������߷ּ���ѧ��*/
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
