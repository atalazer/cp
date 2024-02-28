#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int generateRandomNumber(int);
int playerGuess(int);
void printResult(int, int, char[50]);
void printTitle();

int main() {
  int answer, guess, count, max_range = 100;

  char response, message[50];

  printTitle();

  do {
    answer = generateRandomNumber(max_range);
    guess = playerGuess(max_range);
    count = 1;
    response = ' ';

    while (guess != answer) {
      if (guess > answer)
        printf("Too High!\n");
      else if (guess < answer)
        printf("Too Low!\n");

      guess = playerGuess(max_range);
      count++;
    }

    if (count == 1)
      strcpy(message, "You're THE BEST!!!");
    else if (count <= 3)
      strcpy(message, "So Good!");
    else if (count <= 6)
      strcpy(message, "Nice Try!");
    else if (count <= 9)
      strcpy(message, "Meh :(");
    else
      strcpy(message, "-_-");

    printResult(answer, count, message);

    printf("\nWanna play again? (Y/n) : ");
    scanf("%c", &response);
    response = toupper(response);
  } while (response == 'Y');
}

int generateRandomNumber(int max_range) {
  srand(time(0));
  return (rand() % max_range) + 1;
}

int playerGuess(int max_range) {
  int guess;
  printf("Guess the number! (1-%d) : ", max_range);
  scanf("%d", &guess);
  return guess;
}

void printResult(int answer, int count, char message[50]) {
  printf("=======================================\n");
  printf("%s\n\n", message);
  printf("Answer        : %d\n", answer);
  printf("Total Guesses : %d\n", count);
  printf("=======================================\n");
}

void printTitle() {
  printf("=======================================\n");
  printf("GUESS THE NUMBER GAME!\n");
  printf("=======================================\n");
  printf("\n");
}
