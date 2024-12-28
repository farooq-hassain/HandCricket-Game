#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cricket();			//hand cricket function
int batting(int c_run);  //Batting fuction for handcricket 
int bowling(int runs);	//Bowling function for handcricket 

int tictac();			//tic-tac-toe function
int checkwin();			//tic-tac-toe checking winner function
void board(); 			// grid board function
	
char name[20];          //handcricket name variable 
int ch,lower=1,upper=2,count=1,toss,num,bb,score=0,cscore=0,count_bat=11,r1,gues,runs,wicket,c_run;  //handcricket variables

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };  //tic-tac-toe variable
 
int main(){
	printf("--------------------------------------------\n");
	do{
		printf("Enter\n1 for cricket\n2 for Tic-Tac-Toe 	*#Note: It is a two player game.\n3 for exit :");
		scanf("%d",&ch);
		if (ch==1)
			cricket();
		else if (ch==2){
			printf("Game starting in \n3");
			sleep(1);
			printf("\n2");
			sleep(1);
			printf("\n1");
			sleep(1);
			printf("\nPress any key to continue: ");
			getch();
			tictac();
		}
		else if(ch==3)
			break;
		else
			printf("Invalid choice.");
	}while(1);
	return 1;
}


int cricket(){
	printf("Welcomee to Hand Cricket Game: \n");
	printf("Please Enter your name: ");
	scanf("%s",name);
	printf("\n******** Welcome %s ********** \n\n",name);
	do{
		printf("Press 1 for rules \nPress 2 for new game \nPress 3 to change name \nPress 4 for scores \nPress 5 to exit\n");
		scanf("%d",&ch);
		if (ch==1){
			printf("1. The Game begins with a toss deciding if the player chooses to bat or ball first. \n\n");
			printf("2. (For battinng) In each turn the player is supposed to select a number between 1-6 in order to score,simultaneously the computer tries to guess the number chosen by the player and if it fails to do so the number guessed and the number selected by the player will be added to the player's score\n*** However if the guess was correct then the player loses one of their 11 batsmen.***\n\n");
			printf("3. (For bowling) Similar to batting, now the player has to guess the number chosen by the computer in order to take out wickets and make sure it doesn't score more than him.\n\n");
			printf("4. The one with highest score wins the Match.\n\n");
			printf("**********Wishing you luck**************\n\n");
		}
		else if(ch==2){
			printf("********* Beginning a new game **********\n");
			toss=-1;
			while (toss<0 || toss>2){
				printf("Choose\n1 for Head \n2 for Tails: ");
				scanf("%d",&toss);
				if (toss<0 || toss>2)
					printf("\n---------------------------Invalid choice-----------------------------\n\nPlease ");
			}
			srand(time(0));
			num=(rand()%(upper-lower+1))+lower;
			if (num==toss){
				printf("************Player has won the toss*******************\n");
				bb=-1;
				while (bb<0 || bb>2){
					printf("Please select\n1 for batting\n2 for bowling: ");
					scanf("%d",&bb);
					if (bb<0 || bb>2)
						printf("\n---------------------------Invalid choice-----------------------------\n\n");
				}
				
				if (bb==1){
					c_run=3000;
					printf("********* You have choosen to Bat first ***********\n");  //batting player
					runs=batting(c_run);
					printf("********** Batting is over ***********\n");
					printf("Your total runs are: %d\n\n",runs);
					printf("*********** your bowling has begun ********\n");
					c_run=0;
					c_run=bowling(runs);
					printf("\n******** The Match is Over ***********\n");
					if (runs>c_run){
						printf("%s has won the match by %d",name,runs-c_run);
						score++;
					}
					else if (c_run==runs)
						printf("*****************The match has ended with a Draw!!!!1***************\n");
					else if(c_run>runs){
						printf("Computer has won the match by %d",c_run-runs);
						cscore++;
					}
					
				}
				else{
					printf("\n\n************* You have chosen to Bowl first ****************\n\n"); //bowling player
					runs=3000;
					c_run=bowling(runs);
					printf("\n\n*********************Bowling is over*********************\n");
					printf("The total runs scored by Computer: %d\n",c_run);
					printf("*********** your Batting has begun ********\n");
					runs=0;
					runs=batting(c_run);
					printf("The total runs scored by %s are %d",name,runs);
					printf("\n******** The Match is Over ***********\n");
					if (runs>c_run){
						printf("%s has won the match by %d",name,runs-c_run);
						score++;
					}
					else if (c_run==runs)
						printf("*****************The match has ended with a Draw!!!!1***************\n");
					else if(c_run>runs){
						printf("Computer has won the match by %d",c_run-runs);
						cscore++;
					}
					
				}
			}
			else{
				srand(time(0));  // computer's turn 
				num=(rand()%(upper-lower+1))+lower;
				printf("-------------------------------------------------------------------------------\n");
				printf("The computer has won the toss and chooses to ");
				if (num==1){
					printf("Bat first \n");
					printf("\n-----------------------Your Bowling has now begun--------------------------\n");
					runs=3000;
					c_run=bowling(runs);
					printf("\n\n*********************Bowling is over*********************\n");
					printf("The total runs scored by the Computer: %d",c_run);
					printf("-----------------------your Batting has begun ---------------------------------\n");
					runs=0;
					runs=batting(c_run);
					printf("The total runs scored by %s are %d",name,runs);
					printf("\n******** The Match is Over ***********\n");
					if (runs>c_run){
						printf("%s has won the match by %d",name,runs-c_run);
						score++;
					}
					else if (c_run==runs)
						printf("*****************The match has ended with a Draw!!!!1***************\n");
					else if(c_run>runs){
						printf("Computer has won the match by %d",c_run-runs);
						cscore++;
					}
				}	
				else{
					printf("Bowl first \n");
					printf("\n-----------------------Your Batting has now begun--------------------------\n");
					c_run=3000;
					runs=batting(c_run);
					printf("\n\n*********************Batting is over*********************\n");
					printf("The total runs scored by %s are : %d",name,runs);
					printf("-----------------------your Bowling has begun ---------------------------------\n");
					c_run=0;
					c_run=bowling(runs);
					printf("The total runs scored by the computer: %d",runs);
					printf("\n******** The Match is Over ***********\n");
					if (runs>c_run){
						printf("%s has won the match by %d",name,runs-c_run);
						score++;
					}
					else if (c_run==runs)
						printf("*****************The match has ended with a Draw!!!!1***************\n");
					else if(c_run>runs){
						printf("Computer has won the match by %d",c_run-runs);
						cscore++;
					}
					
		 		}
			}		
		}
		else if(ch==3){
			printf("Enter new name: ");
			scanf("%s",name);
			printf("Name changed Successfully \nWelcome %s",name);
		}
		else if(ch==4){
			printf("\n%s score: %d\n",name,score);
			printf("\nComputer score: %d\n",cscore);
			if (cscore>score)
				printf("\n---------------Computer is winning------------------------\n\n");
			else if(cscore==score)
				printf("\n----------------Scores tied-------------------------------\n\n");
			else
				printf("\n--------------------%s is winning---------------------------\n\n",name);
		}
		else if(ch==5){
			break;
		}
		else{
			printf("Enter a valid choice\n");
		}
	}while(1);
}


int batting(int c_run){
	printf("******** Start batting now ********* \n\n");
		while (count_bat!=0 && runs<c_run){
		r1=-1;
		while (r1<=0 || r1>7){
			printf("Select a number between 0-6: ");
			scanf("%d",&r1);
			if (r1>=0 && r1<7){
				break;
			}
			else{
				printf("Invalid Choice!!\nPlease select within 1-6.\n");
				printf("------------------------------------------------------\n");
			}
		}
		lower=0;
		upper=6;
		srand(time(0));
		gues=(rand()%(upper-lower+1))+lower;
		if (r1==gues){
			printf("----------------Bowled!!! Batsman out-----------------\n");
			count_bat--;
			printf("Batsmen remainaing :%d\n\n",count_bat);
			printf("------------------------------------------------------\n");
		}
		else if(r1==0){
			printf("Computer's guess: %d \n",gues);
			runs=runs+gues;
			printf("Current runs = %d \n",runs);
			printf("------------------------------------------------------\n");
		}
		else{
			printf("Computer's guess: %d \n",gues);
			runs=runs+r1;
			printf("Current runs = %d \n",runs);
			printf("------------------------------------------------------\n");
		}
	}
	return runs;
}


int bowling(int runs){
	while (wicket<=11 && c_run<runs){
		r1=-1;
		while (r1<=0 || r1>7){
			printf("Select a number between 0-6: ");
			scanf("%d",&r1);
			if (r1>=0 && r1<7){
				break;
			}
			else{
				printf("Invalid Choice!!\nPlease select within 0-6.\n");
			}
		}
		lower=0;
		upper=6;
		srand(time(0));
		gues=(rand()%(upper-lower+1))+lower;
		if(r1==gues){
			printf("Computer's number: %d",gues);
			printf("Your number is: %d",r1);
			printf("\n********* Hooray!!!! Wicket *************\n");
			wicket++;
			printf("The no. of wickets : %d",wicket);
			printf("\n------------------------------------------------------\n");
		}
		else if (gues==0){
			c_run=c_run+r1;
			printf("Computer's guess: %d\n",gues);
			printf("Computer Runs: %d",c_run);
			printf("\n------------------------------------------------------\n");
		}
		else{
			c_run=c_run+gues;
			printf("Computer's guess: %d\n",gues);
			printf("Computer Runs: %d",c_run);
			printf("\n------------------------------------------------------\n");
		}
	}
	return c_run;
}

int tictac()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");


    return 0;
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}


void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}
