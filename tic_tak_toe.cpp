#include<iostream>
using namespace std;
int currentPlayer;
char currentMarker;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

// for a well drawn board
void drawBoard(){
    cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" \n";
    cout<<"---|---|---\n";
    cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" \n";
    cout<<"---|---|---\n";
    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" \n";
    cout<<"---|---|---\n";
}

// putting our Marker inside the slot
bool placeMarker(int slot){
    int row=(slot-1)/3;
    int col=(slot-1)%3;
    if(board[row][col]!='X' && board[row][col]!='O'){
        board[row][col]=currentMarker;
        return true;
    }
    else{
        return false;
    }
}

// for finding the winner of the game
int winner(){
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
        {
            return currentPlayer;
        }
    }
    for(int i=0;i<3;i++){
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i]){
            return currentPlayer;
        }
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]) return currentPlayer;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]) return currentPlayer;
    return 0;
}

// to give other player the remaining marker so that both the player does not have same marker
void swapPlayerAndMarker(){
    if(currentMarker=='X'){
        currentMarker='O';

    }
    else{
        currentMarker='X';
    }
    if(currentPlayer==1){
        currentPlayer=2;
    }
    else{
        currentPlayer=1;
    }
}


void game(){
    cout<<"Player 1 choose your marker:X or O :";
    char markerP1;
    cin>>markerP1;

    currentPlayer=1;
    currentMarker=markerP1;
    drawBoard();
    int playerWon;
    for(int i=0;i<9;i++){
        cout<<"It's player "<<currentPlayer<<"'s turn. Enter your slot: ";
        int slot;
        cin>>slot;
    
    if(slot<1 || slot>9){
        cout<<"Not a valid slot, you may try again: ";
        i--;
        continue;
    }
    if(!placeMarker(slot)){
        cout<<"slot is occupied! Try Again";
        i--;
        continue;
    }
    drawBoard();
    playerWon=winner();
    
    if(playerWon==1){
        cout<<"player 1 won";
        break;
    }
    if(playerWon==2){
        cout<<"player 2 won";
        break;
    }
    swapPlayerAndMarker();
    
}
if(playerWon==0){
        cout<<"It's a tie";
    }
}

int main(){
    game();
    return 0;
}