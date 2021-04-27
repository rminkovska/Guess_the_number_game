#include <iostream> //library for cin & cout
#include <cstdlib> //library for function rand
#include <ctime> //library which gives info for the current date and time
using namespace std;
int main()
{
    srand(time(0)); //the computer uses the current time to generate a random number
    int counter= 0;//we create a variable which counts the attempts and we give it an initial value 0
    cout << "Guess My Number Game\n\n"; //gives info for the game
    int max, min;
    cout<<"Enter min value:";
    cin>>min;
    cout<<"Enter max value:";
    cin>>max;
    int range= max-min+1; //a variable which defines the range of the user's guesses
    int num = rand() % range + min; // random number between max and min value
    int guess = 0; //we create a variable and we give it an initial value 0
    while (guess != num) //the programme proceeds with the following loop if the user's guess is different from the random generated number
        {
        cout << "Enter a guess between "<<min<< " and "<<max<<":" <<endl; //output of information- a sentence which says to the user to enter a number
        cin >> guess; //input of information
    if (guess == 0) // if the user's guess is 0, the game ends
    {
        cout<< "Game over";
        break;
    }
        counter++;
        if (guess > num) //if the user's guess is higher than the random generated number, it outputs "Too high!\n\n"
        {
            cout << "Too high!\n\n";
        }
        else if (guess < num) //if the user's guess is lower than the random generated number, it outputs "Too low!\n\n"
            {
                cout << "Too low!\n\n";
            }
        else //if the user's guess is lower than the random generated number, it outputs 'correct' and the number of attempts
        {
            cout << "\nCorrect! You got it in the "<<counter<<" attempt!\n\n";
        }
    }
    return 0;
}
