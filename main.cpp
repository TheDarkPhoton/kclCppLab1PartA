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

void displayHelp(){
    cout << "To check if some word is a palindrome word enter ? followed by the word to be checked.\n";
    cout << "e.g. ?house or ? house, ?deleveled, ...\n";
    cout << "Note that the first character must be a question mark.\n\n";

    cout << "Alternatively enter 'exit' to quit the app:\n";
}

int main() {
    cout << "Welcome to Palindrome Checker\n";
    cout << "Type 'help' to see available commands.\n";

    string command;
    while (true){
        cout << endl;

        //read the next line in the console.
        getline(cin, command);

        //if the first character is the question mark then do
        if (command.substr(0, 1) == "?"){
            string word = processInput(command);

            if (isPalindrome(word))
                cout << word << " is a palindrome\n";
            else
                cout << word << " is not a palindrome\n";
        }
        //if help was entered display help messages
        else if (command == "help"){
            displayHelp();
        }
        // if exit was entered brake/quit the loop
        else if (command == "exit"){
            break;
        }
        else{
            cout << "Command '" << command << "' not recognized\n";
        }

        cout << endl << "Enter a new command\n";
    }

    return 0;
}