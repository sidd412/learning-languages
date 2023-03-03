#include<stdio.h>
#include<conio.h>
int main()
{
    int Ans ;

    int Ques = 1 ;
    int marks = 0 ;
    printf("who is the precident of United States :");
    printf("   1-Obama   2-Trump    3-Biden     4-None    ");
    scanf("%d",&Ans);
    if (Ans == 3)
    {
      printf("     True answer  . ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else {
        printf("   Wrong Answer  . ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the prime minister of Iran :");
    printf("   1-Hassan rohai   2-kamal ataturk    3-Biden     4-Ibrahim raeesi    ");
    scanf("%d",&Ans);
    if (Ans == 4)
    {
      printf("     True answer  . ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer  . ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the prime minister of Britain");
    printf("   1-Richard branson   2-holiyolk tomson    3-Boris Johansan    4-Ibrahim raeesi    ");
    scanf("%d",&Ans);
    if (Ans == 3)
    {
      printf("     True answer   ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer   ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the precident of USSSR");
    printf("   1-Hassan rohai   3-kamal ataturk    2-Vladimir-putin     4-Ibrahim raeesi    ");
    scanf("%d",&Ans);
    if (Ans == 2)
    {
      printf("     True answer   ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer   ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the prime minister of Pakistan");
    printf("   1-Imraan khan  2-kamal ataturk    3-Nawaj sharif     4- bhutto    ");
    scanf("%d",&Ans);
    if (Ans == 1)
    {
      printf("     True answer   ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer   ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the prime minister of Bangladesh");
    printf("   1-Hassan rohai   2-seikh mujib    3-seikh hassina     4-kamla harish    ");
    scanf("%d",&Ans);
    if (Ans == 3)
    {
      printf("     True answer   ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer   ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the prime minister of Israeel");
    printf("   1-benjamin netanvyaho  2-kamal ataturk    3-Biden     4-nefthali banett    ");
    scanf("%d",&Ans);
    if (Ans == 4)
    {
      printf("     True answer   ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer   ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the prime minister of turkey");
    printf("   1-Hassan rohai   2-kamal ataturk    3-erdtogon     4-Ibrahim raeesi    ");
    scanf("%d",&Ans);
    if (Ans == 3)
    {
      printf("     True answer   ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer   ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the prime minister of china");
    printf("   1-sinjo    2-kamal ataturk    3-suga     4-Jinping    ");
    scanf("%d",&Ans);
    if (Ans == 4)
    {
      printf("     True answer   ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer   ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("who is the prime minister of japan");
    printf("   1-JInping  2-suga   3-Biden     4-Ibrahim raeesi    ");
    scanf("%d",&Ans);
    if (Ans == 4)
    {
      printf("     True answer   ");
      marks = marks + 4 ;
      Ques++ ;
    }
    else{
        printf("   Wrong Answer   ");
        Ques++ ;
        marks = marks - 1 ;
    }
    printf("     ...............total question attempt by you is .....  %d",Ques);
    printf(".................total marks obtain out of 40 is.............. %d",marks);
    if (marks>12)
    {
   printf(".............you are passed...............");
    }
    else{
        printf(" ..............you are fail ......");
    }
    
    
}