#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){

    srand(time(0));
    int randomNumber=rand() % 100 + 1;
    int userGuess=0;

    cout<<"Welcome to the Number Gussing Program!"<<endl;
    cout<<"I have selected a random number between 1 to 100."<<endl;
    cout<<"Can you guess what it is?"<<endl;

    while (userGuess!=randomNumber)
    {
        cout<<"Enter your guess:";
        cin>>userGuess;

        if (userGuess<randomNumber)
        {
            cout<<"your guess is too low. Try again!"<<endl;
        }
        else if (userGuess>randomNumber)
        {
            cout<<"your guess is too high. Try again!"<<endl;

        }
        else{
            cout<<"Congratulations! you guessed the correct number:"<<randomNumber<<endl;
        }
        
        
    }
    return 0;
}