#include <iostream>
#include <random>
#include <string>
using namespace std;

//RandomNum for enemy
random_device rd;

//The Board
string LineOne = "|---|---|---|";
string LineTwo = "|---|---|---|";
string LineThree = "|---|---|---|";

//i and j checks
int rowCheck = 0;
int columnCheck = 0;

//The Column
//Keep X's and O's in here
char twoDArr[3][3];

void printBoardO(int response);

bool OEnemy(){
        cout << "---------------- O's TURN ----------------" << endl;
        bool loop = true;
        int random;
        //cout << random << endl;
        //This prevents the O's to overlap the X values. 
        while(loop){
            random = rd() % 9 + 1;
            switch(random){
            case 1:
                if(twoDArr[0][0] != 'X' && twoDArr[0][0] != 'O'){twoDArr[0][0] = 'O'; loop = false;} else {loop = true;}
                break;
            case 2:
                if(twoDArr[0][1] != 'X' && twoDArr[0][1] != 'O'){twoDArr[0][1] = 'O'; loop = false;} else {loop = true;}
                break;
            case 3:
                if(twoDArr[0][2] != 'X' && twoDArr[0][2] != 'O'){twoDArr[0][2] = 'O'; loop = false;} else {loop = true;}
                break;
            case 4:
                if(twoDArr[1][0] != 'X' && twoDArr[1][0] != 'O'){twoDArr[1][0] = 'O'; loop = false;} else {loop = true;}
                break;
            case 5:
                if(twoDArr[1][1] != 'X' && twoDArr[1][1] != 'O'){twoDArr[1][1] = 'O'; loop = false;} else {loop = true;}
                break;
            case 6:
                if(twoDArr[1][2] != 'X' && twoDArr[1][2] != 'O'){twoDArr[1][2] = 'O'; loop = false;} else {loop = true;}
                break;
            case 7:
                if(twoDArr[2][0] != 'X' && twoDArr[2][0] != 'O'){twoDArr[2][0] = 'O'; loop = false;} else {loop = true;}
                break;
            case 8:
                if(twoDArr[2][1] != 'X' && twoDArr[2][1] != 'O'){twoDArr[2][1] = 'O'; loop = false;} else {loop = true;}
                break;
            case 9:
                if(twoDArr[2][2] != 'X' && twoDArr[2][2] != 'O'){twoDArr[2][2] = 'O'; loop = false;} else {loop = true;}
                break;
             }
        }
    printBoardO(random);
    return loop; 
}

void printBoardO(int response){
    switch(response){
            case 1:
                LineOne[2] = 'O';
                break;
            case 2:
                LineOne[6] = 'O';
                break;
            case 3:
                LineOne[10] = 'O';
                break;
            case 4:
                LineTwo[2] = 'O';
                break;
            case 5:
                LineTwo[6] = 'O';
                break;
            case 6:
                LineTwo[10] = 'O';
                break;
            case 7:
                LineThree[2] = 'O';
                break;
            case 8:
                LineThree[6] = 'O';
                break;
            case 9:
                LineThree[10] = 'O';
                break;
        }

        cout << LineOne << endl;
        cout << LineTwo << endl;
        cout << LineThree << endl;
}




//                      THE PLAYER
void printBoardX(int response){
    cout << "------------------------- YOUR TURN-----------------------" << endl;
    switch(response){
            case 1:
                LineOne[2] = 'X';
                break;
            case 2:
                LineOne[6] = 'X';
                break;
            case 3:
                LineOne[10] = 'X';
                break;
            case 4:
                LineTwo[2] = 'X';
                break;
            case 5:
                LineTwo[6] = 'X';
                break;
            case 6:
                LineTwo[10] = 'X';
                break;
            case 7:
                LineThree[2] = 'X';
                break;
            case 8:
                LineThree[6] = 'X';
                break;
            case 9:
                LineThree[10] = 'X';
                break;
        }

        cout << LineOne << endl;
        cout << LineTwo << endl;
        cout << LineThree << endl;
}


bool ifWinner(char twoDee[3][3]){

    bool winner = false;
    if(twoDee[0][0] == 'X' && twoDee[0][1] == 'X' && twoDee[0][2]=='X'||
        twoDee[1][0] == 'X' && twoDee[1][1] == 'X' && twoDee[1][2]=='X'||
        twoDee[2][0] == 'X' && twoDee[2][1] == 'X' && twoDee[2][2]=='X'|| //Horizontals Done
        twoDee[0][0] == 'X' && twoDee[1][0] == 'X' && twoDee[2][0]=='X'||
        twoDee[0][1] == 'X' && twoDee[1][1] == 'X' && twoDee[2][1]=='X'||
        twoDee[0][2] == 'X' && twoDee[1][2] == 'X' && twoDee[2][2]=='X'|| //Vertical done
        twoDee[0][0] == 'X' && twoDee[1][1] == 'X' && twoDee[2][2]=='X'||
        twoDee[0][2] == 'X' && twoDee[1][1] == 'X' && twoDee[2][0]=='X'){
        winner = true;
        cout << "Congrats you won!!" << endl;
    }

    if(twoDee[0][0] == 'O' && twoDee[0][1] == 'O' && twoDee[0][2]=='O'||
        twoDee[1][0] == 'O' && twoDee[1][1] == 'O' && twoDee[1][2]=='O'||
        twoDee[2][0] == 'O' && twoDee[2][1] == 'O' && twoDee[2][2]=='O'|| //Horizontals Done
        twoDee[0][0] == 'O' && twoDee[1][0] == 'O' && twoDee[2][0]=='O'||
        twoDee[0][1] == 'O' && twoDee[1][1] == 'O' && twoDee[2][1]=='O'||
        twoDee[0][2] == 'O' && twoDee[1][2] == 'O' && twoDee[2][2]=='O'|| //Vertical done
        twoDee[0][0] == 'O' && twoDee[1][1] == 'O' && twoDee[2][2]=='O'||
        twoDee[0][2] == 'O' && twoDee[1][1] == 'O' && twoDee[2][0]=='O'){
        winner = true;
        cout << "Congrats you LOST :(((( !!" << endl;
    }

    return winner;
}


int main(){
    //Win Condition 
    bool over = false;
    
    while(!over){
        int response = 0;

        bool loop = true;
        while(loop){
            cout << "Enter a number from 1-9" << endl;
            cin >> response;
            switch(response){
                case 1:
                    if(twoDArr[0][0] != 'O' && twoDArr[0][0] != 'X'){twoDArr[0][0] = 'X'; loop = false;} else {loop = true;}
                    break;
                case 2:
                    if(twoDArr[0][1] != 'O' && twoDArr[0][1] != 'X'){twoDArr[0][1] = 'X'; loop = false;} else {loop = true;}
                    break;
                case 3:
                    if(twoDArr[0][2] != 'O' && twoDArr[0][2] != 'X'){twoDArr[0][2] = 'X'; loop = false;} else {loop = true;}
                    break;
                case 4:
                    if(twoDArr[1][0] != 'O' && twoDArr[1][0] != 'X'){twoDArr[1][0] = 'X'; loop = false;} else {loop = true;}
                    break;
                case 5:
                    if(twoDArr[1][1] != 'O' && twoDArr[1][1] != 'X'){twoDArr[1][1] = 'X'; loop = false;} else {loop = true;}
                    break;
                case 6:
                    if(twoDArr[1][2] != 'O' && twoDArr[1][2] != 'X'){twoDArr[1][2] = 'X'; loop = false;} else {loop = true;}
                    break;
                case 7:
                    if(twoDArr[2][0] != 'O' && twoDArr[2][0] != 'X'){twoDArr[2][0] = 'X'; loop = false;} else {loop = true;}
                    break;
                case 8:
                    if(twoDArr[2][1] != 'O' && twoDArr[2][1] != 'X'){twoDArr[2][1] = 'X'; loop = false;} else {loop = true;}
                    break;
                case 9:
                    if(twoDArr[2][2] != 'O' && twoDArr[2][2] != 'X'){twoDArr[2][2] = 'X'; loop = false;} else {loop = true;}
                    break;
            }
            if(loop == true){
                cout << "invalid response!!! Either O has this spot or you already chose it." << endl;
            }
        }

        printBoardX(response);
        //O should be here. 
        OEnemy();
        over = ifWinner(twoDArr);
    }

}

