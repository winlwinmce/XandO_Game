//
//  main.c
//  XandO
//
//  Created by Win Lwin on 04/09/2022.
//

#include <stdio.h>

void display(char matrix[3][3]);
int conditionCheck(char matrix[3][3]);

int main(int argc, const char * argv[])
{

//	 [0][0] = 7
//	 [0][1] = 8
//	 [0][2] = 9
//	 [1][0] = 4
//	 [1][1] = 5
//	 [1][2] = 6
//	 [2][0] = 1
//	 [2][1] = 2
//	 [2][2] = 3

	
	char matrix[3][3] = { {'7','8','9'},{'4','5','6'},{'1','2','3'}};
	
	char playerOne = 'X';
	char playerTwo = 'O';

	int playerOnePress = 0; //false
	int playerTwoPress = 0; //false
	
	int turn = 1;
	
	while (turn < 10) {
		
		display(matrix);
		
		int playerOneTurn = 1; //true
		int playerTwoTurn = 1; //true
		
		for (int playerturn = 0; playerturn < 9; playerturn++)
		{
			if (playerOneTurn) {
				printf("Play Player One >> ");
				scanf(" %d",&playerOnePress);
				printf("\n");
				
				switch (playerOnePress) {
					case 1:
						matrix[2][0] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					case 2:
						matrix[2][1] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					case 3:
						matrix[2][2] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					case 4:
						matrix[1][0] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					case 5:
						matrix[1][1] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					case 6:
						matrix[1][2] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					case 7:
						matrix[0][0] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					case 8:
						matrix[0][1] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					case 9:
						matrix[0][2] = playerOne;
						playerOneTurn = 0;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player One Win..\n"); return 0;}
						continue;
						
					default:
						printf("Invalid Press\n\n");
						continue;
				}
			}
			
			
			if (playerTwoTurn) {
				printf("Play Player Two >> ");
				scanf(" %d",&playerTwoPress);
				printf("\n");
	
				switch (playerTwoPress) {
					case 1:
						matrix[2][0] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;
						
					case 2:
						matrix[2][1] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;
						
					case 3:
						matrix[2][2] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;
						
					case 4:
						matrix[1][0] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;
						
					case 5:
						matrix[1][1] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;

					case 6:
						matrix[1][2] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;
						
					case 7:
						matrix[0][0] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;
						
					case 8:
						matrix[0][1] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;
						
					case 9:
						matrix[0][2] = playerTwo;
						playerOneTurn = 1;
						turn++;
						display(matrix);
						if (conditionCheck(matrix)) { printf("Player Two Win..\n"); return 0;}
						continue;
						
					default:
						printf("Invalid Press\n");
						playerOneTurn = 0;
						continue;
				}
			}
		}
	}
}

//to check condition where win or not
int conditionCheck(char matrix[3][3])
{
	if ( ( (matrix[0][0] == matrix[0][1]) && (matrix[0][0] == matrix[0][2]) && (matrix[0][1] == matrix[0][2]) )   //7 8 9
	  || ( (matrix[1][0] == matrix[1][1]) && (matrix[1][0] == matrix[1][2]) && (matrix[1][1] == matrix[1][2]) )   //4 5 6
	  || ( (matrix[2][0] == matrix[2][1]) && (matrix[2][0] == matrix[2][2]) && (matrix[2][1] == matrix[2][2]) )   //1 2 3
	  || ( (matrix[2][0] == matrix[1][1]) && (matrix[2][0] == matrix[0][2]) && (matrix[1][1] == matrix[0][2]) )   //1 5 9
	  || ( (matrix[0][0] == matrix[1][1]) && (matrix[0][0] == matrix[2][2]) && (matrix[1][1] == matrix[2][2]) )   //7 5 3
	  || ( (matrix[0][0] == matrix[1][0]) && (matrix[0][0] == matrix[2][0]) && (matrix[1][0] == matrix[2][0]) )   //7 4 1
	  || ( (matrix[0][1] == matrix[1][1]) && (matrix[0][1] == matrix[2][1]) && (matrix[1][1] == matrix[2][1]) )   //8 5 2
	  || ( (matrix[0][2] == matrix[1][2]) && (matrix[0][2] == matrix[2][0]) && (matrix[1][2] == matrix[2][0]) )	) //9 6 3
	{
		return 1;
	}
	return 0;
}

//to display board
void display(char matrix[3][3])
{
	for (int i = 0; i < 3; i++) {
		printf("-------------------\n|");
		for (int j = 0; j < 3; j++) {
			printf("  %c  |",matrix[i][j]);
		}
		printf("\n");
	}
	printf("-------------------\n\n");
}
	

