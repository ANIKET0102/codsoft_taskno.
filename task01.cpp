#include <iostream>
using namespace std;

int main()
{

    int number = rand() % 100 + 1;

    int guess = 0;
    int count = 0;

    cout << "Welcome to the number guessing game ! " << endl;
    cout << "I have choosen a number between 1 and 100." << endl;
    cout << "Welcome to the number guessing game ! " << endl;

    while (guess != number)
    {
        cout << "Enter your guess : " << endl;
        cin >> guess;

        count++;
        if (guess > number)
        {
            cout << "Your guess is too high " << endl;
        }
        else if (guess < number)
        {
            cout << "Your guess us too low " << endl;
        }
        else
        {
            cout << "You guessed it! " << endl;
            cout << "You took " << count << "guesses " << endl;
        }
    }

    return 0;
}