#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
   int choice=0;
   do
   {
   int difficulty=0, min=0, max=0, unknown=0, guess=0, attempts=1, mode=0;
   printf("****Welcome to the game****\n\n");
   printf("Mode:\n");
   printf("1. Single player\n");
   printf("2. Two players\n");
   printf ("Choose mode:");
   scanf("%d", &mode);

   printf ("\n");

   printf("Difficulty:\n");
   printf("1. From 1 to 100\n");
   printf("2. From 1 to 1000\n");
   printf("3. From 1 to 10000\n");
   printf("Choose difficulty:");

   scanf("%d", &difficulty);

   printf ("\n");
switch(mode)
{
case 1:
    switch (difficulty)
   {
   case 1:
    printf("you have chosen single player mode, level 1\n\n");
    min=1;
    max=100;
    srand(time(NULL));
    unknown=(rand()%(max-min+1)+min);
    do
    {
    printf("Type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct after %d attempts\n\n", attempts);
    attempts++;
    } while (guess!=unknown);
    break;

   case 2:
    printf("you have chosen single player mode, level 2\n\n");
    min=1;
    max=1000;
    srand(time(NULL));
    unknown=(rand()%(max-min+1)+min);
    do
    {
    printf("Type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct after %d attempts\n\n", attempts);
    attempts++;
    } while (guess!=unknown);
    break;

   case 3:
    printf("you have chosen single player mode, level 3\n\n");
    min=1;
    max=10000;
    srand(time(NULL));
    unknown=(rand()%(max-min+1)+min);
    do
    {
    printf("Type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct after %d attempts\n\n", attempts);
    attempts++;
    } while (guess!=unknown);
    break;
   }

case 2:
    switch (difficulty)
   {
   case 1:
    printf("you have chosen two players mode, level 1\n\n");
    min=1;
    max=100;
    srand(time(NULL));
    unknown=(rand()%(max-min+1)+min);
    do
    {
    printf("Player 1, type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct!\n\n");
    attempts++;

    printf("Player 2, type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct!\n\n");
    attempts++;

    } while (guess!=unknown);
    break;

   case 2:
    printf("you have chosen two players mode, level 2\n\n");
    min=1;
    max=1000;
    srand(time(NULL));
    unknown=(rand()%(max-min+1)+min);
    do
    {
    printf("Player 1, type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct!\n\n");
    attempts++;

    printf("Player 2, type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct!\n\n");
    attempts++;
    } while (guess!=unknown);
    break;

   case 3:
    printf("you have chosen two players mode, level 3\n\n");
    min=1;
    max=10000;
    srand(time(NULL));
    unknown=(rand()%(max-min+1)+min);
    do
    {
    printf("Player 1, type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct!\n\n");
    attempts++;

    printf("Player 2, type in the number you guess:   ");
    scanf("%d", &guess);
    if (guess>unknown)
        printf("Your guess is bigger than the answer\n\n");
    else if (guess<unknown)
        printf("Your guess is smaller than the answer\n\n");
    else
        printf("Awesome your guess is correct!\n\n");
    attempts++;
    } while (guess!=unknown);
    break;
   }

}
   if (attempts%2!=1)
    printf("Player 1 is the winner! Congratz!");
   else
    printf("Player 2 is the winner! Congratz!");

   printf("\n\n");
   printf("Do you want to replay? Press 1 if yes and press 0 if no\n");
   scanf("%d", &luachon);
   }while (choice==1);
    printf("Thank you, hope you enjoy the game!\n\n");
    return 0;
}

