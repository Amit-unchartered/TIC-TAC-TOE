#include<bits/stdc++.h>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

//Function to check status of game

int checkwin(){
     //checking rows
    if(square[1] == square[2] && square[2] == square[3]){
        return 1;
    }
    if(square[4] == square[5] && square[5] == square[6]){
        return 1;
    }
    if(square[7] == square[8] && square[8] == square[9]){
        return 1;
    }
}

int main(){

}