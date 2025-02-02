#include<bits/stdc++.h>
using namespace std;

int main(){

    // To generate wide range of random numbers
    srand(time(0));

    // Generates a random number
    int random = rand();

    // Guessing variable
    int guess;
    cout<<"Enter your guess: ";
    cin>>guess;

    while(guess != random){
        if(guess < random){
            cout<<"Your guessed a smaller number.\n";
        } else{
            cout<<"Your guessed a larger number.\n";
        }
        cout<<"Please guess again: "; 
        cin>>guess;
    }

    cout<<"Congratulations! You guessed a right number.\n";
    return 0;
}