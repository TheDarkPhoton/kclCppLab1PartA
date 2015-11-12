#include <iostream>
#include <vector>

#include "Random.h"

using namespace std;

int main() {
    Random random;

    vector<string> words = {
        "Tree", "House", "Mask"
    };

    int random_int = random.integral(0, (int)words.size() - 1);
    string selected_word = words[random_int];

    string masked_word = "";
    for (int i = 0; i < selected_word.size(); ++i) {
        masked_word += "_";
    }

    int tries = 6;

    string input;
    do {
        cout << masked_word << endl;
        cout << "Enter a letter" << endl;
        getline(cin, input);

        if (input != "exit"){

        }
    } while (input == "exit");

    return 0;
}