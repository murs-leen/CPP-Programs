//Guess the number
#include <iostream>
using namespace std;
int main()
{
    int secret_no, guess_no,count = 0;
    cout << "Enter a secret number:";
    cin >> secret_no;
    do
    {
        cout << "Guess the number:";
        cin >> guess_no;
        count += 1;
        if (guess_no < secret_no)
            cout << "Guess a bigger number" << endl;
        if (guess_no > secret_no)
            cout << "Guess a smaller number" << endl;
    } while (secret_no != guess_no);
     cout << "You have won! It took you " << count << " guesses." << endl;
}