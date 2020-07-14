#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<conio.h>
#include<string.h>
void delay()
{
    int x;
    for(int i=0;i<100000000;i++)
        x=i;
}
int fun1()
{
    char str[500],fname[100],lname[100];
    int opt1,opt2;
    long long int m=0;
   printf("\n\n\t\t\tFirst Name: ");
   scanf("%s",fname);
   strcpy(str,fname);
   printf("\n\t\t\tLast Name:");
   scanf("%s",lname);
   printf("\n\t\tTOH AAIYE AARAMBH KARTE HAIN ISS ADBHUT KHEL KO,JISKA NAAM HAI KAUN BANEGA CROREPATI\n\n");
   printf("\n\t\tPehla SAWAAL 10000 RUPESS ON Your Screen NOW!!!!!\n\n\n");
   printf("\t\tWhich of the follow are Success Mantras\n");
   printf("\n\t\t(1) Confidence \t\t(2) Management\n\t\t(3)Respect\t\t (4) Software\n\t\t");
   scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==3 )|| (opt1==3&& opt2==1))
   {printf("\n\t\t\tWell Played\n"); m=m+10000;}
   else {printf("\t\t\tOOOH!!!! GALAT JAWAAAB\n \t\t %s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
  printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}

  printf("\n\n\n\t\tWhy do We need to read Good Books?\n\n");
  printf("\t\t(1)It is Good for Your Brain\t\t(2) It improves your Communication Skills\n\t\t(3)It helps to kill or pass time\t(4)To look attractive\n\n\t\t");
  scanf("%d %d",&opt1,&opt2);
  if((opt1==1&& opt2==2 )|| (opt1==2&& opt2==1))
   {printf("\n\t\t\tCongratulations...Keep Going!!!!\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
   printf("\n\t\tGet Ready for the next Question");
   for(int i=0;i<6;i++)
   {delay(); printf(". ");}
   printf("\t\t On Your Screen Now!!\n\n");
    printf("\t\tWhat are the six thinking hats ?\n\n");
    printf("\t\t(1)It is a great magician trick\t\t(2)It is a good decision making technique\n\t\t(3)Method of wearing six hats\t\t(4)Method involving group discussion\n\t\t");
    scanf("%d %d",&opt1,&opt2);
  if((opt1==2&& opt2==4 )|| (opt1==4&& opt2==2))
   {printf("\n\t\t\t 1 LAKH RUPEE\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    printf("\n\t\tNext question on your screen now!!!!!!");
    for(int i=0;i<6;i++)
   {delay(); printf(". ");}
    printf("\n\n\n\t\tThe most powerful way to build self-confidence is:\n\t(1) Comparing yourself with others\t\t\t(2) Hearing others tell you how good you are\n\t(3) Having done something before and succeeded.\t\t(4) Do one thing that scares you every day.\n\t\t");
  scanf("%d %d",&opt1,&opt2);
   if(((opt1==3&& opt2==4 )|| (opt1==4&& opt2==3)) &&(opt1!=opt2))
   {printf("\n\t\t\tBoht Badhiyaa"); m=m*10+m;}

    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
     for(int i=0;i<6;i++)
   {delay(); printf(". ");}
    printf("\n\n\t\tNext Question:\n\n\t\tA man has to study 4 books English,Chemistry,Biology,Physics on 4 different days \n\t\tfrom Thursday to Sunday.Order of books is as follows :\n\n\t\t*Chemistry is studied on day before the day of English\n\n\t\t*Biology is studied after the day of Physics\n\n\t\tWhich of following are correct orders of books?\n\t\t(1)Chemistry,Biology,English,Physics\n\n\t\t(2)Biology,Chemistry,English,Physics\n\n\t\t(3)Physics,Chemistry,Biology,English\t\t\n\n\t\t(4)Chemistry,Physics,English,Biology\n\t\t");
    scanf("%d %d",&opt1,&opt2);
   if((opt1==3&& opt2==4 )|| (opt1==4&& opt2==3) &&(opt1!=opt2))
   {printf("\n\t\t Absolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    printf("\n\t\tYou are very close:");for(int i=0;i<6;i++)
   {delay(); printf(". ");}
    printf("\n\n\t\tWhat is the value of a and b in series 28 25 5 21 18 5 14 a b ?\n\t\t(1) a=5\t\t(2) a=11\n\t\t(3) b=5\t\t(4) b=10\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==3 )|| (opt1==3&& opt2==1) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    printf("\n\t\tFinal Question On your screen now!!!!");for(int i=0;i<6;i++)
   {delay(); printf(". ");}
    printf("\n\n\n\t\t#include <stdio.h>\n\t\tint main() {\n\t\tint a = 4;\n\t\ta = a << 1;\n\t\treturn 0;\n\t\t}\n\t\t(1) 8\t\t\t(2) 2\n\t\t(3) 0010\t\t(4) 1000\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==4 )|| (opt1==4&& opt2==1) &&(opt1!=opt2))
     {printf("\n\n\n\t\t\t\t\t\t OHHH ,YEH KYA!!!");
    for(int i=0;i<10;i++)
   {delay(); printf(". ");}
           printf("\n\t\t\tAap Jeet chuke hain %d \t\t \n",m); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    write_result(fname,lname,m);  getch(); main();
}

int fun2()
{
    char str[500],fname[100],lname[100];
    int opt1,opt2;
    long long int m=0;
      printf("\n\n\t\t\tFirst Name: ");
   scanf("%s",fname);
   strcpy(str,fname);
   printf("\n\t\t\tLast Name:");
   scanf("%s",lname);
   printf("\n\t\tTOH AAIYE AARAMBH KARTE HAIN ISS ADBHUT KHEL KO,JISKA NAAM HAI KAUN BANEGA CROREPATI\n\n");
   printf("\n\t\tPehla SAWAAL 10000 RUPESS ON Your Screen NOW!!!!!\n\n\n");
   printf("\t\tConsider a number 10.Check whether its 1st and 3rd bit are set or not?\n");
   printf("\n\t\t(1) 1st set is set \t\t(2) 1st bit is clear\n\t\t(3)3rd set is set\t\t (4) 3rd bit is clear\n\t\t");
   scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==3 )|| (opt1==3&& opt2==1))
   {printf("\n\t\t\tWell Played\n"); m=m+10000;}
   else {printf("\t\t\tOOOH!!!! GALAT JAWAAAB\n \t\t %s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
  printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}

  printf("\n\n\n\t\tPositive self talk is:\n\n");
  printf("\t\t(1)Self defeating\t\t\t\t\t(2)Saying positive thing about yourself\n\t\t(3)Saying positive thing about yourself to others\t(4)Noticing what your inner voice is saying\n\t\t");
  scanf("%d %d",&opt1,&opt2);
  if((opt1==2&& opt2==4 )|| (opt1==4&& opt2==2))
   {printf("\n\t\t\tCongratulations...Keep Going!!!!\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
   printf("\n\t\tGet Ready for the next Question");
   for(int i=0;i<6;i++)
   {delay(); printf(". ");}
   printf("\t\t On Your Screen Now!!\n\n");
    printf("\t\tSCD TEF UGH a WKL b\n\n\t\tValue of a and b is :\n\n");
    printf("\t\t(1) a = VIJ \t\t\t(2) a = WIK \n\t\t(3) b = XMO \t\t\t(4) b = XMN \n\t\t");
    scanf("%d %d",&opt1,&opt2);
  if((opt1==1&& opt2==4 )|| (opt1==4&& opt2==1))
   {printf("\n\t\t\t 1 LAKH RUPEE\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
    printf("\n\t\tNext question on your screen now!!!!!!");
     //printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\t\tTo improve analytical skills,one must :\n\n\t\t(1)Do not challenge yourself with some new problems\t\t(2)Think out of the box\n\t\t(3)Break complex problems into simpler form\t\t\t(4)Try only once\n\t\t");
  scanf("%d %d",&opt1,&opt2);
   if((opt1==3&& opt2==2 )|| (opt1==2&& opt2==3) &&(opt1!=opt2))
   {printf("\n\t\t\tBoht Badhiyaa\n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
     printf("\n\t\tQuestion on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\n\t\tSTATEMENT 1 -The prices of food grains and other essential commodities in the open market have risen\n\t\tsharply during the past three months.\n\n\t\tSTATEMENT 2 -The political party in opposition has given a call for general strike to protest against\n\t\tthe government's economic policy\n\n\t\t(1)Statement II is the cause\n\n\t\t(2)Statement I is its effect\n\n\t\t(3)Statement II is its effect\t\t\n\n\t\t(4)Statement I is the cause \n\t\t");
    scanf("%d %d",&opt1,&opt2);
   if((opt1==3&& opt2==4 )|| (opt1==4&& opt2==3) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t "); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
    printf("\n\t\tYou are very close:");
     for(int i=0;i<6;i++)
   {delay(); printf(". ");}
    printf("\n\n\n\t\tResearch is:\n\n\t\t(1) Searching again and again\t\t\t\t(2)Finding solution to any problem\n\t\t(3)Working in a way to search for truth of any problem\t\t(4)investigate systematically\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==4&& opt2==3 )|| (opt1==3&& opt2==4) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
    printf("\n\t\tFinal Question On your screen now!!!!");
     for(int i=0;i<6;i++)
   {delay(); printf(". ");}
    printf("\n\t\tIn a certain code, 'bi nie pie' means 'some good jokes' : 'nie bat lik' means 'some real stories' ;\n\t\tand 'pie lik tol' means 'many good stories'.\n\n\t\tWhich word in code means some and good?\n\n\t\t(1)nie is some\t\t\t(2)pie is good\n\t\t(3) pie is some\t\t\t(4)bi is some\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==2)|| (opt1==2&& opt2==1) &&(opt1!=opt2))
   {printf("\n\n\n\t\t\t\t\t\t OHHH ,YEH KYA!!!");
    for(int i=0;i<10;i++)
   {delay(); printf(". ");}
           printf("\n\t\t\tAap Jeet chuke hain %d \t\t \n",m); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
    write_result(fname,lname,m);  getch(); main();
}

int fun3()
{
   char str[500],fname[100],lname[100];
    int opt1,opt2;
    long long int m=0;
      printf("\n\n\t\t\tFirst Name: ");
   scanf("%s",fname);
   strcpy(str,fname);
   printf("\n\t\t\tLast Name:");
   scanf("%s",lname);

   printf("\n\t\tTOH AAIYE AARAMBH KARTE HAIN ISS ADBHUT KHEL KO,JISKA NAAM HAI KAUN BANEGA CROREPATI\n\n");
   printf("\n\t\tPehla SAWAAL 10000 RUPESS ON Your Screen NOW!!!!!\n\n\n");
   printf("\t\tWhat is the meaning of RESPECT?\n");
   printf("\n\t\t(1)Positive feeling for another person or thing.\t\t(2) Use foul language\n\t\t(3)admire deeply,qualities,achievements.\t\t (4)A person that tells that they are dumb\n\t\t");
   scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==3 )|| (opt1==3&& opt2==1))
   {printf("\n\t\t\tWell Played\n"); m=m+10000;}
   else {printf("\t\t\tOOOH!!!! GALAT JAWAAAB\n \t\t %s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
  printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}

  printf("\n\n\n\t\tAs x increases, y increases:\n\n");
  printf("\t\t(1) Inversely proportional\t\t\t\t(2) Directly proportiona\n\t\t(3)Positive correlation\t\t\t\t(4)Negative correlation\n\n\t\t");
  scanf("%d %d",&opt1,&opt2);
  if((opt1==2&& opt2==3 )|| (opt1==3&& opt2==2))
   {printf("\n\t\t\tCongratulations...Keep Going!!!!\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
   printf("\n\t\tGet Ready for the next Question");
   for(int i=0;i<6;i++)
   {delay(); printf(". ");}
   printf("\t\t On Your Screen Now!!\n\n");
    printf("\t\t Which of the following are storage devices?\n\n");
    printf("\t\t(1)Printer\t\t\t(2)Chip\n\t\t(3)Compact Disk\t\t\t(4)Monitor\n\t\t");
    scanf("%d %d",&opt1,&opt2);
  if((opt1==2&& opt2==3 )|| (opt1==3&& opt2==2))
   {printf("\n\t\t\t 1 LAKH RUPEE\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    printf("\n\t\tNext question on your screen now!!!!!!");
     //printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\t\tDaya has a brother Anil, Daya is the son of Chandra. Bimal is Chandra`s father\n\n\t\tWhich of the following statements are true?\n\t\t(1)Anil is grandson of Bimal\t\t(2)Daya is grandson of Bimal\n\t\t(3)Anil is son of Bimal\t\t\t(4)Chandra is son of Anil.\n\t\t");
  scanf("%d %d",&opt1,&opt2);
   if((opt1==2&& opt2==1 )|| (opt1==1&& opt2==2) &&(opt1!=opt2))
   {printf("\n\t\t\tBoht Badhiyaa\n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
     printf("\n\t\tQuestion on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\n\t\t Which skills are required in troubleshooting?\n\t\t(1)Being introvert\t\t\t\t(2)Decision Making\n\t\t(3)Being aggressive\t\t\t\t(4)Team Work\n\t\t");
    scanf("%d %d",&opt1,&opt2);
   if((opt1==2&& opt2==4 )|| (opt1==4&& opt2==2) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    printf("\n\t\tYou are very close:");
     //printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\n\t\tIf in a certain language, MADRAS is coded as NBESBT, how is BOMBAY and PUNJAB coded in that code ?\n\n\t\t(1)BOMBAY : CQNCBZ\t\t(2)PUNJAB : QVOKBC\n\t\t(3)PUNJAB : QVOMBC\t\t(4)BOMBAY : CPNCBZ\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==4&& opt2==2 )|| (opt1==2&& opt2==4) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m);write_result(fname,lname,m);  getch(); main(); return 0;}
    printf("\n\t\tFinal Question On your screen now!!!!");
     //printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\t\tWhich of the following syntax is correct for command-line arguments?\n\n\t\t(1)int main(int var, char *varg[])\t\t\t(2)int main(int argc, char *argv[])\n\t\t(3)int main() {int argc, char *argv[]; }\t\t(4)int main(char *argv[], int argc)\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==2)|| (opt1==2&& opt2==1) &&(opt1!=opt2))
     {printf("\n\n\n\t\t\t\t\t\t OHHH ,YEH KYA!!!");
    for(int i=0;i<10;i++)
   {delay(); printf(". ");}
           printf("\n\t\t\tAap Jeet chuke hain %d \t\t \n",m); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
    write_result(fname,lname,m);  getch(); main();
}

int fun4()
{
    char str[500],fname[100],lname[100];

    int opt1,opt2;
    long long int m=0;
   printf("\n\n\t\t\tFirst Name: ");
   scanf("%s",fname);
   strcpy(str,fname);
   printf("\n\t\t\tLast Name:");
   scanf("%s",lname);
   printf("\n\t\tTOH AAIYE AARAMBH KARTE HAIN ISS ADBHUT KHEL KO,JISKA NAAM HAI KAUN BANEGA CROREPATI\n\n");
   printf("\n\t\tPehla SAWAAL 10000 RUPESS ON Your Screen NOW!!!!!\n\n\n");
   printf("\t\tRespecting others means:\n");
   printf("\n\t\t(1)Helping others\t\t(2)Making fun of others\n\t\t(3)Being crue\t\t\t(4)Using nice words\n\t\t");
   scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==4 )|| (opt1==4&& opt2==1))
   {printf("\n\t\t\tWell Played\n"); m=m+10000;}
   else {printf("\t\t\tOOOH!!!! GALAT JAWAAAB\n \t\t %s won : Rs. %d",str,m); write_result(fname,lname,m); getch();  main(); return 0;}
  printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}

  printf("\n\n\n\t\tSTATEMENT 1-A huge truck overturned on the middle of the road last night\n\n\t\tSTATEMENT 2-The police had cordoned of entire area in the locality this morning for half of the day.\n\n");
  printf("\t\t(1)Statement I is its effect.\t\t\t\t(2)Statement II is its effect\n\t\t(3)Statement I is the cause\t\t\t\t(4)Statement II is the cause\n\n\t\t");
  scanf("%d %d",&opt1,&opt2);
  if((opt1==2&& opt2==3 )|| (opt1==3&& opt2==2))
   {printf("\n\t\t\tCongratulations...Keep Going!!!!\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m); getch();  main(); return 0;}
   printf("\n\t\tGet Ready for the next Question");
   for(int i=0;i<6;i++)
   {delay(); printf(". ");}
   printf("\t\t On Your Screen Now!!\n\n");
    printf("\t\tWhat is the full form of WWW & URL?\n\n");
    printf("\t\t(1) WWW :World Wide Website\t\t\t\t(2) URL :Universal Resource Locator\n\t\t(3) URL :Uniform Resource Locato\t\t\t(4) WWW :World Wide Web\n\t\t");
    scanf("%d %d",&opt1,&opt2);
  if((opt1==4&& opt2==3 )|| (opt1==3&& opt2==4))
   {printf("\n\t\t\t 1 LAKH RUPEE\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m); getch();  main(); return 0;}
    printf("\n\t\tNext question on your screen now!!!!!!");
     //printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\t\tA,B,C and are 4 persons in family.A is daughter of B.B is son of C.C is father of D.D is a male\n\n\t\tWhich of the following statements are true?\n\n\t\t(1)D and B are brothers.\t\t(2)If D is daughter of B,then A and D are sisters.\n\t\t(3) C is uncle of A\t\t\t(4)A is daughter of D\n\t\t");
  scanf("%d %d",&opt1,&opt2);
   if((opt1==2&& opt2==1 )|| (opt1==1&& opt2==2) &&(opt1!=opt2))
   {printf("\n\t\t\tBoht Badhiyaa\n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m); getch(); main(); return 0;}
     printf("\n\t\tQuestion on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\t\tNext Question:\n\t\tConsider the series 1, 2, 3, 5, 8, a, b.\n\n\t\tWhat is the value of a and b?\n\t\t(1)b=3\t\t\t(2) a=13\t\t\t(3)b=21\t\t\t(4)a=11\n\t\t");
    scanf("%d %d",&opt1,&opt2);
   if((opt1==2&& opt2==4 )|| (opt1==4&& opt2==2) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
    printf("\n\t\t\You are very close:");
     //printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\n\t\t# include <stdio.h>\n\t\tint main()\n\t\t{char str1[] =\"CodeQuotient\";\n\t\tchar str2[] = {'C', 'o', 'd', 'e', 'Q', 'u', 'o', 't', 'i', 'e', 'n', 't'};\n\t\treturn 0;\n\t\t}\n\n\t\tWhich are the following statements are correct?\n\n\t\t(1)sizeof(str1)=13\t\t(2)sizeof(str2)=12\n\t\t(3)sizeof(str2)=13\t\t(4)sizeof(str1)=12\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==2 )|| (opt1==2&& opt2==1) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m); getch();   main(); return 0;}
    printf("\n\t\tFinal Question On your screen now!!!!");
     //printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\n\t\tIf (1-p) is the root of equation  x^2+px+(1-p)=0.Find its roots\n\n\t\t(1) 0\t\t\t(2)2\n\t\t(3) -1\t\t\t(4)1\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==3)|| (opt1==3&& opt2==1) &&(opt1!=opt2))
     {printf("\n\n\n\t\t\t\t\t\t OHHH ,YEH KYA!!!");
    for(int i=0;i<10;i++)
   {delay(); printf(". ");}
           printf("\n\t\t\tAap Jeet chuke hain %lld \t\t \n",m); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    write_result();  main();
}
int fun5()
{
    char str[500],fname[100],lname[100];

    int opt1,opt2;
    long long int m=0;
   printf("\n\n\t\t\tFirst Name: ");
   scanf("%s",fname);
   strcpy(str,fname);
   printf("\n\t\t\tLast Name:");
   scanf("%s",lname);
   printf("\n\t\tTOH AAIYE AARAMBH KARTE HAIN ISS ADBHUT KHEL KO,JISKA NAAM HAI KAUN BANEGA CROREPATI\n\n");
   printf("\n\t\tPehla SAWAAL 10000 RUPESS ON Your Screen NOW!!!!!\n\n\n");
   printf("\t\tRespecting others means:\n");
   printf("\n\t\t(1)Helping others\t\t(2)Making fun of others\n\t\t(3)Being crue\t\t\t(4)Using nice words\n\t\t");
   scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==4 )|| (opt1==4&& opt2==1))
   {printf("\n\t\t\tWell Played\n"); m=m+10000;}
   else {printf("\t\t\tOOOH!!!! GALAT JAWAAAB\n \t\t %s won : Rs. %d",str,m); write_result(fname,lname,m); getch();  main(); return 0;}
   printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}

  printf("\n\n\n\t\tAs x increases, y increases:\n\n");
  printf("\t\t(1) Inversely proportional\t\t\t\t(2) Directly proportiona\n\t\t(3)Positive correlation\t\t\t\t\t(4)Negative correlation\n\n\t\t");
  scanf("%d %d",&opt1,&opt2);
  if((opt1==2&& opt2==3 )|| (opt1==3&& opt2==2))
   {printf("\n\t\t\tCongratulations...Keep Going!!!!\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
   printf("\n\t\tGet Ready for the next Question");
   for(int i=0;i<6;i++)
   {delay(); printf(". ");}
   printf("\t\t On Your Screen Now!!\n\n");
    printf("\t\tSCD TEF UGH a WKL b\n\n\t\tValue of a and b is :\n\n");
    printf("\t\t(1) a = VIJ \t\t\t(2) a = WIK \n\t\t(3) b = XMO \t\t\t(4) b = XMN \n\t\t");
    scanf("%d %d",&opt1,&opt2);
  if((opt1==1&& opt2==4 )|| (opt1==4&& opt2==1))
   {printf("\n\t\t\t 1 LAKH RUPEE\n"); m=m*10+m;}
   else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
   printf("\n\t\tNext question on your screen now!!!!!!");
     //printf("\n\t\t2nd Question on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\t\tA,B,C and are 4 persons in family.A is daughter of B.B is son of C.C is father of D.D is a male\n\n\t\tWhich of the following statements are true?\n\n\t\t(1)D and B are brothers.\t\t(2)If D is daughter of B,then A and D are sisters.\n\t\t(3) C is uncle of A\t\t\t(4)A is daughter of D\n\t\t");
  scanf("%d %d",&opt1,&opt2);
   if((opt1==2&& opt2==1 )|| (opt1==1&& opt2==2) &&(opt1!=opt2))
   {printf("\n\t\t\tBoht Badhiyaa\n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m); getch(); main(); return 0;}
     printf("\n\t\tQuestion on Your Screen Now!!!");
  for(int i=0;i<4;i++)
  {delay(); printf(" .");}
    printf("\n\t\tNext Question:\n\t\tConsider the series 1, 2, 3, 5, 8, a, b.\n\n\t\tWhat is the value of a and b?\n\t\t(1)b=3\t\t\t(2) a=13\t\t\t(3)b=21\t\t\t(4)a=11\n\t\t");
    scanf("%d %d",&opt1,&opt2);
   if((opt1==2&& opt2==4 )|| (opt1==4&& opt2==2) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main(); return 0;}
    printf("\n\t\tYou are very close:");for(int i=0;i<6;i++)
   {delay(); printf(". ");}
    printf("\n\n\t\tWhat is the value of a and b in series 28 25 5 21 18 5 14 a b ?\n\t\t(1) a=5\t\t(2) a=11\n\t\t(3) b=5\t\t(4) b=10\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==3 )|| (opt1==3&& opt2==1) &&(opt1!=opt2))
   {printf("\n\tAbsolutely Correct!!!\t\t \n"); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    printf("\n\t\tFinal Question On your screen now!!!!");for(int i=0;i<6;i++)
   {delay(); printf(". ");}
    printf("\n\n\n\t\t#include <stdio.h>\n\t\tint main() {\n\t\tint a = 4;\n\t\ta = a << 1;\n\t\treturn 0;\n\t\t}\n\t\t(1) 8\t\t\t(2) 2\n\t\t(3) 0010\t\t(4) 1000\n\t\t");
        scanf("%d %d",&opt1,&opt2);
   if((opt1==1&& opt2==4 )|| (opt1==4&& opt2==1) &&(opt1!=opt2))
     {printf("\n\n\n\t\t\t\t\t\t OHHH ,YEH KYA!!!");
    for(int i=0;i<10;i++)
   {delay(); printf(". ");}
           printf("\n\t\t\tAap Jeet chuke hain %d \t\t \n",m); m=m*10+m;}
    else{printf("\n\t\tOOOH!!!! GALAT JAWAAAB\n\t\t%s won : Rs. %d",str,m); write_result(fname,lname,m);  getch(); main();return 0;}
    write_result(fname,lname,m);  getch(); main();
}
int delay2(int x)
{
    int y;
    for(int i=0;i<x;i++)
        y=i;
}
void play_game(){
    int r;
    //system("cls");
    srand(time(0));
        r=rand()%5-1;

       if(r==1)
            fun1();
        else if(r==2)
            fun2();
        else if(r==3)
            fun3();
        else if(r==4)
            fun4();
            else fun5();
}
void write_result(char *fname,char * lname,long long int m)
{
	FILE *fp;

	/*printf("\n\t\t\tFirst Name:");
	scanf("%s",fname);
	printf("\n\t\t\tLast Name:");
	scanf("%s",lname);
	scanf("%d",&m);*/
	fp=fopen("abc.txt","a+");
	fprintf(fp,"%s %s %lld\n",fname,lname,m);
	fclose(fp);
	}
void show_result(){
	FILE *fp;
	long long int m; char fname[100],lname[100];
	system("cls");
	fp=fopen("abc.txt","r");
	printf("\n\n\n\n\n\t\t");
	printf("\tFIRST NAME      LAST NAME                 PRIZE\n");
	while(fscanf(fp,"%s %s %lld",fname,lname,&m)!=EOF)
 	printf("\n\t\t\t%-15s %-25s %lld",fname,lname,m);
 	getch();
	fclose(fp);
	main();
}
void print(char str[500])
{
    int i=0;
    long long int x=9000000;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
        delay2(x);
        x=x+200;
    }
}
void instructions()
{
    system("cls");
	print("\n\t\n\n\n\t\t");
	print("1. There are 5 sets of question bank with 7 different questions");
	print("\n\n\t\t\t");
	print("2. There are 4 options for answer (2 Correct / 2 Wrong)");
	print("\n\n\t\t");
	print("3. Both answers will increase the money you have won by 10 times");
	print("\n\n\t\t\t");
	print("Both correct answers will take you to next question");
	print("\n\n\t\t\t");
	print("Any wrong answer will take you out of the game");
	print("\n\n\t\t\t\t");
   	print("All the best.....");
	print("\n\n\t\t\t");
	print("Press any key to proceed to game.....");
    getch();
    system("cls");
	play_game();
	}
void reset()
{
 FILE *fp;
 fp=fopen("abc.txt","w");
 fclose(fp);
 main();
}
void high()
{
    long long int m2,m;
    char fname[100],name[100],lname[100];
    FILE *fp;
    fp=fopen("abc.txt","r+");
        fscanf(fp,"%s %s %lld",fname,lname,&m2);
    	while(fscanf(fp,"%s %s %lld",fname,lname,&m)!=EOF)
 	      if(m>m2)
            {m2=m; strcpy(name,fname); strcat(name," "); strcat(name,lname);}
          printf("\n\n\t\t%s has the highest score -> %lld",name,m2);
    fclose(fp);
    getch();
    main();
}
int main()
{
   int i,j,r,opt;
   system("cls");
   printf("***********************************************************************************************************************");
   printf("\n\n\n\n\n\n\n\t\t\t\t\t\tWELCOME TO KBC\n\n\t\t");
    for(j=0;j<80;j++)
    {
        delay2(10000000);
        printf("%c",177);
    }

	printf("\n\n\n\t\t\n\t\t1.Play Game\n\t\t2.Instructions\n\t\t3.Show Result (All Participants)\n\t\t4.Reset Score\n\t\t5.Highest Marks\n\t\t6.Quit\n\n\t\t\t\t");
      scanf("%d",&opt);
	switch(opt)
    {
	case 1:play_game();
			break;
	case 2:instructions();
		break;
	case 3:show_result();
		break;
		case 4:reset();
		break;
		case 5:
            high();
            break;
	case 6:
            return 0;
	}
    //play_game();
    return 0;
  // fun4();
}

