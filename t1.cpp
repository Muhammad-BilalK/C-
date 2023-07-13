#include<iostream>
using namespace std;

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int result();
void board();

int main(){

    cout<<"TIC TAC TOE"<<endl;
    cout<<"PLAYER 1(X)   PLAYER 2(O)"<<endl;

    int player = 1;
    int choice;
    char mark;

    do{

        board();
        player = (player % 2) ? 1:2;

        cout<<"Player "<<player<<" , "<<"Enter Number : ";
        cin >> choice;

        mark = (player == 1)? 'X' : 'O';

        if(choice >= 1 && choice <= 9){
            if(square[choice] == choice + '0'){
                square[choice] = mark;
                player++;
            }
            else{
                cout<<"Invalid Move";
            }
        }
        else{
            cout<<"Number should be between 1 & 9";
        }
    }while(result() == -1);

    board();

    if(result() == 1){
        cout<<"Player "<<--player<<" Wins!";

    }
    else{
        cout<<"Game Draw";
    }
    cin.ignore();
    cin.get();
    return 0;
}

int result(){
    if(square[1] == square[2] && square[2] == square[3]){
        return 1;
    }
    else if(square[1] == square[4] && square[4] == square[7]){
        return 1;
    }
    else if(square[1] == square[5] && square[5] == square[9]){
        return 1;
    }
    else if(square[2] == square[5] && square[5] == square[8]){
        return 1;
    }
    else if(square[3] == square[6] && square[6] == square[9]){
        return 1;
    }
    else if(square[3] == square[5] && square[5] == square[7]){
        return 1;
    }
    else if(square[4] == square[5] && square[5] == square[6]){
        return 1;
    }
    else if(square[7] == square[8] && square[8] == square[9]){
        return 1;
    }
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' &&
    square[4] != '4' && square[5] != '5' && square[6] != '6' &&
    square[7] != '7' && square[8] != '8' && square[9] != '9'){
        return 0;
    }
    else{
        return -1;
    }
}

void board(){
    cout<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<endl;
    cout<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<endl;
    cout<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<endl;
}