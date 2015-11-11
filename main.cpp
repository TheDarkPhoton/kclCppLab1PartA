#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string word){
    string wordRev = word;
    reverse(wordRev.begin(), wordRev.end());
    return word == wordRev;
}

string processInput(string command){
    command.erase(remove_if(command.begin(), command.end(), ::isspace), command.end());
    return command.substr(1, command.size() - 1);
}

int main() {
    cout << "Welcome to Palindrome Checker" << endl;
    cout << "Type 'help' to see available commands." << endl;

    string command;
    while (true){
        cout << endl;

        //read the next line in the console.
        getline(cin, command);

        //if the first character is the question mark then do
        if (command.c_str()[0] == '?'){
            string word = processInput(command);

            if (isPalindrome(word))
                cout << word << " is a palindrome" << endl;
            else
                cout << word << " is not a palindrome" << endl;
        }
        //if help was entered display help messages
        else if (command == "help"){
            cout << "To check if some word is a palindrome word enter ? followed by the word to be checked." << endl;
            cout << "e.g. ?house or ? house, ?deleveled, ..." << endl;
            cout << "Note that the first character must be a question mark." << endl << endl;

            cout << "Alternatively enter 'exit' to quit the app:" << endl;
        }
        // if exit was entered brake/quit the loop
        else if (command == "exit"){
            break;
        }

        cout << endl << "Enter a new command" << endl;
    }

    return 0;
}