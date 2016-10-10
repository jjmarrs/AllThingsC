#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PAUSE system("pause")
#define CLS system("cls")

// A game of Rock Paper Scissors
// Made by Jason
// 9/27/2016

int userChoice, randNum, compChoice;
int choice(int userChoice, int compChoice);
int determineWinner(int userChoice, int compChoice);
void displayMenu();
int getResult(int result);


int main() {

	printf("\nHello and welcome to the game of Rock Paper Scissors!");

	do {
		srand((unsigned)time(NULL));
		randNum = 1 + rand() % 3; // generates random number

		displayMenu();
		userChoice = getResult(userChoice);
		compChoice = randNum;

		if (userChoice > 4 || userChoice < 1) {
			printf("Please choose a valid selection.");
			PAUSE;
			break;
		} 
		
		choice(userChoice, compChoice);
		determineWinner(userChoice, compChoice); 
		
	} while (userChoice != 4);

} //end main

int choice(int userChoice, int compChoice) {
	if (userChoice == 1)
		printf("\nYou chose rock!\n");
	else if (userChoice == 2)
		printf("\nYou chose paper!\n");
	else if (userChoice == 3)
		printf("\nYou chose scissors!\n");

	if (compChoice == 1)
		printf("\nThe computer chose rock!\n");
	else if (compChoice == 2)
		printf("\nThe computer chose paper!\n");
	else if (compChoice == 3)
		printf("\nThe computer chose scissors!\n");

} //end choice

int determineWinner(int userChoice, int compChoice) {
	if (userChoice == 1 && compChoice == 3) {
		printf("\nYou win!\n");
		PAUSE;
	}
	else if (userChoice == 2 && compChoice == 1) {
		printf("\nYou win!\n");
		PAUSE;
	}
	else if (userChoice == 3 && compChoice == 2) {
		printf("\nYou win!\n");
		PAUSE;
	}
	else if (userChoice == 1 && compChoice == 1) {
		printf("\nYou tied!\n");
		PAUSE;
	}
	else if (userChoice == 2 && compChoice == 2) {
		printf("\nYou tied!\n");
		PAUSE;
	}
	else if (userChoice == 3 && compChoice == 3) {
		printf("\nYou tied!\n");
		PAUSE;
	}
	else if (userChoice == 4) {
		exit(0);
		PAUSE;
	}
	else {
		printf("\nYou Lose!\n");
		PAUSE;
	}

} //end determineWinner

void displayMenu() {
	printf("\n\nPlease choose your weapon of choice: ");
	printf("\n1. Rock");
	printf("\n2. Paper");
	printf("\n3. Scissors");
	printf("\n4. Quit game");
} //end displayMenu

int getResult(int result) {
	result = 0;
	printf("\nEnter your number selection: ");
	scanf("%i", &result);
	return result;
} //end getResult
