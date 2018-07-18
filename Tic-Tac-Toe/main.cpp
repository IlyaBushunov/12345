#include <stdio.h>
#include <string.h>
char board[20]={};
void clearscreen(void){
    for(int i = 0; i<3; i++)
        printf("\n");
}
void clearboard(void){
    for(int i=0;i<9;i++)
        board[i]='-';
}
bool has_wonQ(char player){
    int wins[][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    for(int i=0;i<8;i++){
        int count=0;
        for(int j=0;j<3;j++)
           if(board[wins[i][j]]==player){
                count++;
                if(count==3)
                    return true;
            }
    }
    return false;
}
void print_board(char* ){
    printf("Game board\n");
    printf(" %c | %c | %c \n",board[0],board[1],board[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n",board[3],board[4],board[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n",board[6],board[7],board[8]);
}
int get_move(void){
    printf("\nMenu of the moves:\n");
    printf(" 1 | 2 | 3 \n");
    printf("---+---+---\n");
    printf(" 4 | 5 | 6 \n");
    printf("---+---+---\n");
    printf(" 7 | 8 | 9 \n");
    printf("\n");
    print_board(":");
    printf("\nEnter your move: ");
    int move;
    scanf("%d",&move);
    while(move>9||move<1||board[move-1]!='-'){
        printf("Enter numder from 1 to 9:\n");
        scanf("%d",&move);
    }
    return move;
}
char play_and_get_winner(){
    int turn=1;
    while(!has_wonQ('X')&&!has_wonQ('O')){
        int move=get_move();
        clearscreen();
        if(turn%2==1){
            board[move-1]='X';
            if(has_wonQ('X')){
                printf("X,Congratulations, You have won! \n");
                return 'X';
            }
        }
        else{
            board[move-1]='O';
            if(has_wonQ('O')){
                printf("O,Congratulations, You have won!\n");
                return 'O';
            }
        }
        turn++;
        if(turn==10){
            printf("Draw!\n");
            return 'D';
        }
    }
}
int main(void){
    printf("HI!!!\n\n");
    char reply[]="Yes";
    int x_wins=0,o_wins=0,ties=0;
    while(strcmp(reply,"Yes")==0){
        clearboard();
        char winner=play_and_get_winner();
        print_board("\t");
        switch(winner){
        case 'X':
            x_wins++;
            break;
        case 'O':
            o_wins++;
            break;
        case 'D':
            ties++;
            break;
        }
        printf("\n\t*Winner Statistic*\nPlayer X:%d\n",x_wins);
        printf("Player O:%d\n",o_wins);
        printf("Ties:%d \n\n",ties);
        printf("\nWould You Like To Play Again? Yes / No: ");
        scanf("%s",&reply);
        while( strcmp(reply,"Yes")!=0 && strcmp(reply,"No")!=0){
            printf("Please Enter A Valid Reply , Yes / No:");
            scanf("%s",&reply);
        }
    }
    return 0;
}
