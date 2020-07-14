#include<stdio.h>
#include<stdlib.h>
void write_result(char *fname,char *lname)
{
	FILE *fp;
	int m;
	/*printf("\n\t\t\tFirst Name:");
	scanf("%s",fname);
	printf("\n\t\t\tLast Name:");
	scanf("%s",lname);*/
	fp=fopen("abc.txt","a+");
	fprintf(fp,"%s %s %d\n",fname,lname,m);
	fclose(fp);
	}
void show_result(){
	FILE *fp;
	int m; char fname[100],lname[100];
	fp=fopen("abc.txt","r");
	while(fscanf(fp,"%s %s %d",fname,lname,&m)!=EOF)
 	printf("\nData inside variables:%s %s %d",fname,lname,m);
	fclose(fp);
}
void instructions()
{
	printf("\n\n\n\t\t");
	printf("1. There are 5 sets of question bank with 7 different questions");
	printf("\n\t\t");
	printf("2. There are 4 options for answer (2 Correct / 2 Wrong)");
	printf("\n\t\t");
	printf("3. Both answers will increase the money you have won by 10 times");
	printf("\n\t\t");
	printf("Both correct naswers will take you to next quesion");
	printf("\n\t\t");
	printf("Any wrong answer will take you out of the game");
	printf("\n\t\t\t");
   	printf("All the best.....");
	printf("\n\t\t");
	printf("Press any key to proceed to game.....")
	getch();
	play_game();
	}
int main()
{
int opt;
	printf("\n\t\t1.Play Game\n\t\t2.Instructions\n\t\t3.Show Result (All Participants)\n\t\t4.Quit");
      scanf("%d",&opt);
	switch(opt)
    {
	case 1:play_game();
			break;
	case 2:Instructions();
		break;
	case 3:show_result();
		break;
	case 4:
             return 0;
	}
	return 0;
}
