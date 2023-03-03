#include<stdio.h>
#include<conio.h>
float main()
{
int a ;
    int maxximum_marks ,obtain_marks ;
    int x;
    int course,stream ;
    printf("enter the maxximum marks and obtain marks ");
    scanf("%d%d",&maxximum_marks,&obtain_marks);
    x= (obtain_marks*100)/(maxximum_marks);
    printf("percentage of marks is %d",x);
    if (x>35 && x<=50)
    {
        printf(" ..............welcome ! you are passed with third divison ............");
    
    }
    else if (x>50 && x<=65)
    {
      printf("..............welcome ! you are passed with second divison..............");
    }
    else if (x>65 && x<=100)
    {
           printf("...............welcome ! you are passed with first divison..............");
    }
    else{
        printf("...............sorry ! you are fail . try again with better prepration..............");
    return 0 ;
    }
    printf(" now choce your course of gradudation by entering A ,B ,C or D .  ");
    printf("   1- B.tech         2-B.sc      3-B.a     4-B.ba       5-B.voc");
    scanf("%d",&course);
    if (course = 1)
    {
       printf("     welcome you are admitted in a professional course B.Tech   .");
       printf("chose your stream");
       printf("   1-CSE     2-IT   3-ECE   4-EE   5-CE   6-ME");
       scanf("%d",&stream);
       printf("   you are most welcome in this stream");
       
    }
    else if (course = 2)
    {
       printf("     welcome you are admitted in a professional course B.Sc   .");
       printf("   you are most welcome in this stream");
       
    }
      else if (course = 3)
    {
       printf("     welcome you are admitted in a non professional course B.A   .");
       printf("   you are most welcome in this stream");
       
    }
    else if (course = 4)
    {
       printf("     welcome you are admitted in a professional course B.Ba   .");
       printf("   you are most welcome in this stream");
       
    }
    else if (course = 5)
    {
       printf("     welcome you are admitted in a professional course B.Voc   .");
       printf("   you are most welcome in this stream");
       
    }
    else{
    printf("      ..............this course is not avaliable in our institute..............");
    }
}