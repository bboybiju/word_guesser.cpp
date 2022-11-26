#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

const int max_tries = 5;
int letterFill(char, string, string&);

int main() {
    string words[15]
    {
        "dunks",
        "cat",
        "dog",
        "animal",
        "glass",
        "computer",
        "headphones",
        "calculator",
        "wallet",
        "human",
        "music",
        "color",
        "car",
        "phone",
        "mirror"
    };

    srand((unsigned)time(NULL));
    int random_number = rand() % 16;

    int test = random_number;
    string word;
    word = words[random_number];

    switch (random_number) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 10:
        break;
    case 11:
        break;
    case 12:
        break;
    case 13:
        break;
    case 14:
        break;
    case 15:
        break;
    }


    //SIZE(), 
    string num_of_underlines(word.length(), '-');
    //user
    cout << "Hello!\nThis is the word guessing game\nYou have 5 tries\n";
    cout << "Each letter is represented as a line\n";
    cout << "You have to type one letter at a time to try and guess the word\n";
    cout << num_of_underlines;

    int num_of_wrong_guesses = 0;
    char letter;
    while (num_of_wrong_guesses < max_tries)
    {
        cout << "\n\n   " << num_of_underlines;
        cout << "\nGuess a letter: ";
        cin >> letter;

        if (letterFill(letter, word, num_of_underlines) == 0) {
            cout << "Wrong guess";
            num_of_wrong_guesses++;
        }
        else {
            cout << "\nYou found a letter";
        }

        cout << "\nYou have " << max_tries - num_of_wrong_guesses << " tries left\n";

        if (word == num_of_underlines) {
            cout << word << std::endl;
            cout << "\nYou got it";
            break;
        }


    }

    if (num_of_wrong_guesses == max_tries) {
        cout << "You have failed to guess the word\n";
        cout << "The word was " << word;
    }

    return 0;
}

int letterFill(char guess, string secretword, string& guessword)
{
    int i;
    int matches = 0;
    int len = secretword.length();
    for (i = 0; i < len; i++)
    {
        // Did we already match this letter in a previous guess?
        if (guess == guessword[i])
            return 0;
        // Is the guess in the secret word?
        if (guess == secretword[i])
        {
            guessword[i] = guess;
            matches++;
        }
    }
    return matches;
}