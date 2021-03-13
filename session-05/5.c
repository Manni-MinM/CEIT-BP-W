// BWOTSHECHB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef WINDOWS
	#include <window.h>
#else
	#include <unistd.h>
#endif

int main() {
	int goal;
	int player_choice, bot_choice;
	int player_score = 0, bot_score = 0;

	printf("Enter the Goal:\n");
	scanf("%d", &goal);
	
	while (player_score < goal && bot_score < goal) {
		//print the scores at the top of the window
		printf("Your score : %d\t\tBot score : %d\n\n", player_score, bot_score);

		//get player choice
		printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n");
		scanf("%d", &player_choice);

		//make a random choice for the computer
		srand(time(NULL));
		bot_choice = rand() % 3 + 1;
		printf("bot choice : %d / player choice : %d\n" , bot_choice , player_choice) ;

		// Update players' scores with correct conditions.
		if ( player_choice == 1 && bot_choice == 2 )
			bot_score ++ ;
		else if ( player_choice == 1 && bot_choice == 3 )
                        player_score ++ ;
		else if ( player_choice == 2 && bot_choice == 1 )
                        player_score ++ ;
		else if ( player_choice == 2 && bot_choice == 3 )
                        bot_score ++ ;
		else if ( player_choice == 3 && bot_choice == 1 )
                        bot_score ++ ;
		else if ( player_choice == 3 && bot_choice == 2 )
                        player_score ++ ;

		//clear the console
		sleep(2);
		#ifdef WINDOWS
			system("cls");
		#else
			system("clear") ;
		#endif
	}

	//print final result
	printf("Your score : %d\t\tBot score : %d\n\n", player_score, bot_score);

	// Check who is the winner and congrats him/her/it!!
	if ( player_score > bot_score )
		printf("Player Wins !\n") ;
	else
		printf("Bot Wins!\n") ;
}

