#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <MMsystem.h>

char square1[] = "a";
char square2[] = "b";
char square3[] = "c";
char square4[] = "d";
char square5[] = "e";
char square6[] = "f";
char square7[] = "g";
char square8[] = "h";
char square9[] = "i";

char square11[] = "j";
char square12[] = "k";
char square13[] = "l";
char square14[] = "m";
char square15[] = "n";
char square16[] = "o";
char square17[] = "p";
char square18[] = "q";
char square19[] = "r";



 int winner = 0;

int checkfreespace ();
void printboard1();
void printboard2();
void player1board();
void player2board();

void playermove();
void checkwinner2(int);
void checkwinner1(int);

int main()
{
   

    while (winner != 1 /*&& checkfreespace() != 0*/)
    {
        //printboard1();
        //printboard2();
   //
        playermove();
    }
}




void playermove()
{
    int j = 0;
    int k= 0;

  //  player = (player % 2) ? player1board() : 
  int i = 0;
  while (i < 5)
  {
  player1board();
 // j+=1;

  player2board();
 // checkwinner();
  i++;
  }

}


void player1board()
{
     srand(time(0));
     int i = 0;
  
    {
        printboard1();
       
        char buffer[10];
        char choice;



        i = (rand() % 5) + 1;
        printf("player 1 number is %d\n", i);

          checkwinner1(i);


         itoa(i, buffer, 10);
        printf("type choice : \n");
    
        scanf(" %c", &choice);

         if (choice == 'a' && *square1 == 'a')
            *square1 = *buffer;
        else if (choice == 'b' && *square2 == 'b')
            *square2 = *buffer;
         else if (choice == 'c' && *square3 == 'c')
            *square3 = *buffer;
        else if (choice == 'd' && *square4 == 'd')
                *square4 = *buffer;
        else if (choice == 'e' && *square5 == 'e')
                *square5 = *buffer;
         else if (choice == 'f' && *square6 == 'f')
                *square6 = *buffer;
         else if (choice == 'g' && *square7 == 'g')
                *square7 = *buffer;
         else if (choice == 'h' && *square8 == 'h')
                *square8 = *buffer;
         else if (choice == 'i' && *square9 == 'i')
                *square9 = *buffer;
        

    }
   // return (i);

 }

 void player2board()
{
     srand(time(0));
  
    {
        printboard1();
       
        char buffer[10];
        char choice;

        int i = 0;

        i = (rand() % 5) + 1;
        printf("player 2 number is %d\n", i);

        checkwinner2(i);

      
         itoa(i, buffer, 10);
        printf("type choice : \n");
    
        scanf(" %c", &choice);

         if (choice == 'j' && *square11 == 'j')
            *square11 = *buffer;
        else if (choice == 'k' && *square12 == 'k')
            *square12 = *buffer;
         else if (choice == 'l' && *square13 == 'l')
            *square13 = *buffer;
        else if (choice == 'm' && *square14 == 'm')
                *square14 = *buffer;
        else if (choice == 'n' && *square15 == 'n')
                *square15 = *buffer;
         else if (choice == 'o' && *square16 == 'o')
                *square16 = *buffer;
         else if (choice == 'p' && *square17 == 'p')
                *square17 = *buffer;
         else if (choice == 'q' && *square18 == 'q')
                *square18 = *buffer;
         else if (choice == 'r' && *square19 == 'r')
                *square19 = *buffer;
        

    }

 }
    

void printboard1()
{
    system("cls");
    printf("\n seraku \n \n");
   printf(" %s | %s | %s ", square1, square2, square3);

   printf("\n---|---|---\n");

   printf(" %s | %s | %s ", square4, square5, square6);

   printf("\n---|---|---\n");

   printf(" %s | %s | %s ", square7, square8, square9);

   printf("\n\n\n");


    printf("player 2 board \n\n");


    printf(" %s | %s | %s ", square11, square12, square13);

   printf("\n---|---|---\n");

   printf(" %s | %s | %s ", square14, square15, square16);

   printf("\n---|---|---\n");

   printf(" %s | %s | %s ", square17, square18, square19);

   printf("\n\n");
}


void checkwinner1(int i)
{
    static int j;
    int d;

    d = i + j;
    printf("i is %d", i);
    printf("j is %d", j);

    printf("static is %d\n", d);

    j = d;
    
}

void checkwinner2(int i)
{
    static int k;
    int d;

    d = i + k;
    printf("i is %d", i);
    printf("j is %d", k);

    printf("static is %d\n", d);

    k = d;
    
}