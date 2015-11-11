#include <iostream>

using namespace std;

int main() {
    string input;

    cout << "\nHello I'm Talkamoton 800 the friendly robot you can talk to :)\n";
    cout << "What is your name?\n";
    getline(cin, input);                    //read next line into an input variable

    cout << "hello " << input << " how's the c++ workshop so far?\n";
    getline(cin, input);

    //while input is not good or bad display "I don't understand that..." message
    while (input != "good" && input != "bad"){
        cout << "I don't understand that :(" << endl;
        cout << "Enter 'good' or 'bad'" << endl;
        getline(cin, input);
    }

    //if input is "good" then
    if (input == "good"){
        cout << "I'm glad to hear =]";
    }
    //if input is "bad" then
    else if (input == "bad") {
        cout << "Get out of here ;D";
    }

    return 0;
}