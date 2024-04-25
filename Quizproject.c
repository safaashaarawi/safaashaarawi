#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i ,j;
int score=0;
int total=0;
int x,y,z;
char name[100];
char dicition;
int edit_score(void);
void highest_score(void);
int firstlevel(void);
int secondlevel(void);
int thirdlevel(void);
int home(void);
void randmessage(int w);
void show_score();
void help(void);
int firstlevel()
{   system("CLS");
    printf("\n\t\t\t\tWelcome to first level\n");
    printf("\t\t\t----------------------------------------\n");
srand(time(0)) ;
 int  answer , count = 0 ;
 for (  i = 1 ; i <= 20 ; i ++ )
{
  x = rand()%9+1  ;  y = rand()%9+1 , z = x * y  ;
  int cho1=z+20,cho2=z+2,cho3=z+10,cho4=z+1 ;
int q = rand()%4+1 ;
  switch(q)
{
case 1 :
    cho1 = z ;
    break ;
case 2 :
    cho2 = z ;
    break ;
case 3 :
    cho3 = z ;
    break ;
case 4 :
    cho4 = z ;
    break ;
}

printf("\n %d- What do you think %d Times  %d is  = \n\n Enter your answer \n  " , i , x , y ) ;
printf(" A- %d \t\t  B- %d \t\t  C- %d \t\t  D- %d \n\n ", cho1 , cho2 , cho3 , cho4 ) ;

scanf("%d" , &answer ) ;
if ( answer == z )
{
    randmessage(1) ;
    count ++ ;
    edit_score();
}
if ( answer != z ) {
randmessage(0) ;
    count = 0  ;
}
if ( count == 3 )
{
break ;
}
}
if (count==3 )
{

secondlevel() ;
}
if ( count != 3 )
   {
       printf("your score is = %d \n",total);


   printf("\nUnfortunately you didn't get 3 right answers in a row !\nso you have the choice ,if you want to try first level again press R or press Q to exit \n ") ;
    scanf(" %c",&dicition);
           if (dicition=='R')
            {score=0;
            firstlevel();
            }
            if (dicition=='Q')
            {
             system("CLS");
             home();

            }

            }

  return 0 ;
}




int secondlevel()
{   system("CLS");
    printf("\n\t\t\tCongratulations!You have successfully passed the first level\n\t\t\t\t\tWelcome to the second level\n");
    printf("\t\t\t\t----------------------------------------\n");
srand(time(0)) ;
int  z  , answer , count = 0 ;
 for ( j = 1 ; j <= 20-i ; j ++ )
{
  x = rand()%(99-10+1 )+ 10  ;  y = rand()%(99-10+1 )+ 10  , z = x * y  ;
  int cho1=z+10 ,cho2=z+100,cho3=z+110,cho4=z+20 ;
  int q = rand()%4+1 ;
  switch(q)
{
case 1 :
    cho1 = z ;
    break ;
case 2 :
    cho2 = z ;
    break ;
case 3 :
    cho3 = z ;
    break ;
case 4 :
    cho4 = z ;
    break ;
}
printf(" %d - \nWhat do you think %d Times  %d is  = \n\n Enter your answer \n " , j , x , y ) ;
printf(" A- %d \t\t  B- %d \t\t  C- %d \t\t  D- %d \n\n ", cho1 ,cho2 , cho3   , cho4   ) ;
scanf("%d" , &answer ) ;
if ( answer == z )
{
    randmessage(1) ;
    count ++ ;
   edit_score();
}
if ( answer != z ) {
randmessage(0) ;
    count = 0  ;
}
if ( count == 3 )
{
 break ;
}
}
if ( count == 3 )
{
    thirdlevel();
}
if (count!=3){
                printf("your score is = %d \n",total);
           printf("\nUnfortunately you didn't get 3 right answers in a row !\nso you have the choice ,if you want to return first level again press R or press Q to exit \n ");
           scanf(" %c",&dicition);
           if (dicition=='R')
            {   score=0;
                firstlevel();
                }
            if (dicition=='Q'){
             system("CLS");
             home();

            }
            }
            return 0;

}

int thirdlevel(  )
{   system("CLS");
    printf("\n\t\t\tCongratulations!You have successfully passed the second level\n\t\t\t\t\tWelcome to the third level\n");
    printf("\t\t\t\t----------------------------------------\n");
 srand(time(0));
 int  z  , answer , count = 0;
 for (int k = 0 ; k < 20-i-j ; k ++ )
{    x = rand()%(999-100+1 )+ 100  ;  y = rand()%(999-100+1 )+ 100  , z = x * y  ;

printf(" %d - \nWhat do you think %d Times  %d is  = \n\n Enter your answer \n " , k+1, x , y ) ;
int cho1= z+20 ,cho2=z+210,cho3= z+10 ,cho4=z+100;
  int q = rand()%4+1 ;
  switch(q)
{
case 1 :
    cho1 = z ;
    break ;
case 2 :
    cho2 = z ;
    break ;
case 3 :
    cho3 = z ;
    break ;
case 4 :
    cho4 = z ;
    break ;
}
printf(" A- %d \t\t  B- %d \t\t  C- %d \t\t  D- %d \n\n ", cho1 , cho2 , cho3 , cho4   ) ;
scanf("%d" , &answer ) ;
if ( answer == z )
{
    randmessage(1) ;
    count ++ ;
    edit_score();
}
if ( answer !=z )
{
randmessage(0) ;
    count = 0  ;
}
}
printf(" End of the three levels \n ") ;
        highest_score();

         return 0;

}


int home (void){
char choise;

printf("\n\t\t\t\t\t\tEducational GAME\n");
printf("\t\t\t\t______________________________________________\n");
printf("\t\t\t\t\t\t  WELCOME\n\t\t\t\t\t\t    to\n\t\t\t\t\t\tTHE EDU GAME\n");
printf("\t\t\t\t______________________________________________\n\t\t\t\t______________________________________________\n");
printf("Do you want to master math?!\n");
printf("______________________________________________\n______________________________________________\n");
printf("> Press S to start the game \n");
printf("> Press V to view the highest score \n");
printf("> Press H for help \n");
printf("> Press Q to quit \n");
printf("Please enter your choice here : ");scanf(" %c",&choise);
if (choise=='S'){
        printf("Welcome with us \3\n");
    printf("\n*********************************\n");
    printf("Please enter your username:");scanf("%s",name);
    printf("*********************************\n");
     firstlevel();}
   if (choise=='V'){
        highest_score();

}
if (choise=='Q'){
         system("CLS");

}
if (choise=='H'){
       help();


}
return 0;
}
int main()
{

home();
return 0;
}

void randmessage( int w )
{
    int q = rand()%4+1 ;
if ( w == 1 ) {
 switch ( q )
 {
  case 1 :
    printf(" \nNice work!\1\n ") ;
    break ;
  case 2 :
    printf(" \nKeep up the good work!\2 \n") ;
    break ;
  case 3 :
    printf(" \nExcellent!\1 \n ") ;
    break ;
  case 4 :
    printf(" \nVery good!\3 \n  ") ;
 }
}
if ( w == 0 )
switch (q)
{
  case 1 :
    printf(" \nNo. Keep trying. \n ") ;
    break ;
  case 2 :
    printf(" \nWrong. Try once more. \n ") ;
    break ;
  case 3 :
        printf("\nDon't give up! \n ") ;
    break ;
  case 4 :
 printf(" \nNo. Please try again. \n ");
}
}

int edit_score(void){

score++;
total=score;
return total;
}




void highest_score(void)
{
if (total==0&&i==0)
{
    system("CLS");
    printf("There is no value of score because nobody has played yet \n");
    printf("_________________________________________________________\n");
    home();

}
else
{   system("CLS");
    printf("%s,you has the highest score %d \n",name,total);
    printf("\3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3\n");

     if (((score/20.0)*100)>75)
     {

printf("congratulation you are perfect!\16\n");



}
else
    printf("please ask your teacher for extra help and try again \n");

}
printf("Press E to return home or press Q to quit: ");
scanf(" %c",&dicition);
if ( dicition == 'E' )
{
system("CLS");
home();
}
if( dicition == 'Q' )
   system("CLS");
}
void help()
{ system("CLS");

printf("\t\tHELP\n") ;


printf("_______________________________________________________\n");

printf("RULES and SUMMARY:\n");

printf("Here's the rules of the program that will test you in Maths!\n\n");

printf("1- There are 3 levels in this game each with different difficulty level.\n2- To promote to the next level you have to answer three sequential questions right.\n");

printf("3- Each correct answer with a degree.\n");

printf("4- You only have 20 trial answer totally.\n");
printf("note : when you end all of the 20 trial at first or second level and choose to return to first level again your score is to be calculated from ZERO. \n");

printf("5- If you get total degree of 75%% or more you succeeded in this trial\nElse,you are out of this trial and you can try again.\n");

printf("Press E to return home : ");
scanf(" %c",&dicition);
system("CLS");
home();

}
