#include <iostream>
#include <conio.h>
#include <limits>
#include <cstdlib>
#include <ctime>

using namespace std;

bool guess_Num(int guess, int num) {
    if (num == guess) {
        cout << "\nCongratulations! You guessed correctly.";
        return true;
    } else if (num > guess)
        cout << "\nYour guess is low.";
    else
        cout << "\nYour guess is high.";
    return false;
}

int main() {
    char ch;
    do {
        bool isWin;
        srand(time(0));
        int num = rand() % 101;
        do {
            cout << "\nGuess the number between 0 and 100 = ";
            int n;
            cin >> n;
            isWin = guess_Num(n, num);
        } while (!isWin);

        cout << "\nPress Y or y if you want to play again: ";
        ch = getch();
    } while (ch == 'Y' || ch == 'y');

    return 0;
}
