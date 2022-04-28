#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

//ending lines
void space(){
    cout << endl;
}


//human
void playerRoll(int arr[]){
    for(int a=1;a<6;a++){
        arr[a] = (2 + rand() % 12);
    }
}

void playerOutput(int arr[]){
    for(int x=1;x<6;x++){
        cout << "Player Rolls: " << arr[x] << endl;
    }
}


//computer
void computerRolls(int arr[]){
    for(int a=1;a<6;a++){
        arr[a] = (2 + rand() % 12);
    }
}
void computerOutput(int arr[]){
    for(int x=1;x<6;x++){
        cout << "Computer Rolls: " << arr[x] << endl;
    }
}


//Scanner
void winner(int hum[], int com[], int humanS, int computerS){
    for(int x=0;x<6;x++){
        if(hum[x] % 2){
            cout << "Human Wins" << endl;
            break;
        }
        else if(com[x] % 2){
            cout << "Computer Wins" << endl;
            break;
        }
    }
}

int main(){

    srand(time(0));

    const int size = 6;
    int human[size]={};
    int computer[size]= {};
    int humanscore = 0, computerscore = 0;
    
    space();
    playerRoll(human);
    playerOutput(human);
    space();
    computerRolls(computer);
    computerOutput(computer);
    space();
    winner(human, computer, humanscore, computerscore);
    return 0;
}