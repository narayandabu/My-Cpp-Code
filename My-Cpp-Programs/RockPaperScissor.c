#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int random(int N)
{
   srand(time(NULL));
   return rand() % N;
}
char CPU()
{

   int choice = random(2);
   if (choice == 0)
   {
      return 'r';
   }
   else if (choice == 1)
   {
      return 's';
   }
   else if (choice == 2)
   {
      return 'p';
   }
}

int main()
{ 
   printf("********Welcome To 'Rock, Paper, Scissor'************\n");
   printf("*********NOTE:-// This Game is Case Sensitive Please Use Lower Case letters only ********\n");
   printf("You Can Use 'r' instead of rock or simply use 'rock' but you are not allowed\n");
   printf("to use uppercase like 'R'or 'Rock' // \n");

 looping:
   int namesize;
   char *Name;
   printf("Enter the _SIZE_ of Your Name:- \n");
   scanf("%d", &namesize);
   Name = (char *)malloc(namesize * sizeof Name);
   printf("Enter Your _NAME_:- \n");
   scanf("%s", Name);
   int point = 0;
   int CpuPoint = 0;
   for (int i = 0; i < 3; i++)
   {

      char Input[8];
      printf("%s's turn:- \n", Name);
      scanf("%s", &Input);
      getchar();
      CPU();
      printf("Cpu Chooses %c \n", CPU());

      if (CPU() == Input[0])
      {
         continue;
      }
      else if (CPU() == 'r' && Input[0] == 's')
      {
         CpuPoint = CpuPoint + 1;
         continue;
      }
      else if (CPU() == 's' && Input[0] == 'r')
      {
         point = point + 1;
         continue;
      }
      else if (CPU() == 'p' && Input[0] == 'r')
      {
         CpuPoint = CpuPoint + 1;
         continue;
      }
      else if (CPU() == 'r' && Input[0] == 'p')
      {
         point = point + 1;
         continue;
      }
      else if (CPU() == 's' && Input[0] == 'p')
      {
         CpuPoint = CpuPoint + 1;
         continue;
      }
      else if (CPU() == 'p' && Input[0] == 's')
      {
         point = point + 1;
         continue;
      }
   }
   printf("Your Score is %d\n ", point);
   printf("Cpu Score is %d\n ", CpuPoint);
   if (point > CpuPoint)
   {
      printf("*********Congratulations You Win***********\n");
   }
   else if (CpuPoint > point)
   {
      printf("*********The CPU Won Better Luck Next Time**********\n");
   }
   else if (CpuPoint == point)
   {
      printf("*********Nobody Won... It was A Tie*********\n");
   }
   char yn;
   printf("Do you want To exit(y/n):- \n");
   scanf("%c", &yn);
   
   if (yn == 'n')
   {  
      printf("All Rigth lets play Again \n");
      goto looping;
   }
   else if (yn == 'y')
   {
      printf("OK Happy Gaming");
   }
   

   return 0;
}
