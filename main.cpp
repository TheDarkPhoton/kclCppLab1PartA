#include <iostream>
#include <algorithm>

#include "Random.h"

using namespace std;

int main() {
    Random random;

    vector<string> words = {
        "Tree", "House", "Mask"
    };

    int random_int = random.integral(0, (int)words.size() - 1);
    string selected_word = words[random_int];
    string lower_word = selected_word;
    transform(lower_word.begin(), lower_word.end(), lower_word.begin(), ::tolower);

    string masked_word = "";
    for (int i = 0; i < selected_word.size(); ++i) {
        masked_word += "_";
    }

    int tries = 6;

    string input;
    do {
        if (tries == 0){
            cout << "You have no more tries left!!!" << endl;
            cout << "The correct answer was " << selected_word << ". You have lost." << endl;
            break;
        }

        cout << masked_word << " - you have " << tries << " tries left" << endl;
        cout << "Enter a letter" << endl;
        getline(cin, input);
        transform(input.begin(), input.end(), input.begin(), ::tolower);

        if (input.size() > 1 && input != "exit") {
            if (lower_word == input) {
                cout << "'" << selected_word << "' is the correct word!!!" << endl;
                cout << "Congradulations you have won." << endl;
            }
            else {
                cout << "'" << input << "' is not the correct word!!!" << endl;
                cout << "The correct answer is " << selected_word << ". You have lost." << endl;
            }

            break;
        }
        else if (input != "exit") {
            bool guess_is_wrong = true;

            for (unsigned long i = 0; i < lower_word.size(); ++i) {
                if (lower_word.c_str()[i] == input.c_str()[0]){
                    masked_word.replace(i, 1, selected_word.substr(i, 1));
                    guess_is_wrong = false;
                }
            }

            if (guess_is_wrong)
                --tries;

            if (tries >= 0 && selected_word == masked_word) {
                cout << "'" << selected_word << "' is the correct word!!!" << endl;
                cout << "Congradulations you have won." << endl;
                break;
            }
        }
    } while (input != "exit");

    return 0;
}