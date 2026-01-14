#include<iostream>
#include<cstdlib>
#include<ctime>
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int player_throw=0;
    int computer_throw=0;
    bool draw=false;
    do{
        cout<<"Enter your throw (1=Rock, 2=Paper, 3=Scissors): ";
        cin>>player_throw;

        cout<<endl;
        computer_throw=(rand()%3)+1;
        if(computer_throw==ROCK){
            cout<<"Computer chose Rock."<<endl;
        }
        if(computer_throw==PAPER){
            cout<<"Computer chose Paper."<<endl;
        }
        if(computer_throw==SCISSORS){
            cout<<"Computer chose Scissors."<<endl;
        }


        draw=false;
        if(player_throw==computer_throw){
            cout<<"It's a draw! Try again."<<endl;
            draw=true;
        }else if((player_throw==ROCK && computer_throw==SCISSORS) ||
                 (player_throw==PAPER && computer_throw==ROCK) ||
                 (player_throw==SCISSORS && computer_throw==PAPER)){
            cout<<"  You win!"<<endl;
        }else{
            cout<<"Computer wins!"<<endl;
        }cout<<endl;
        //rand()->0 ...9999999 %3  0-2 +1 ->1-3
        //10/3->1
        //11/3->2
          }while(draw);
    return 0;
}