#include <iostream>

using namespace std;

int main() {
    string input;

    cout << "\nHello I'm Talkamoton 800 the friendly robot you can talk to :)\n";
    cout << "What is your name?\n";

    getline(cin, input);

    cout << "hello " << input << " how's the c++ workshop so far?\n";

    getline(cin, input);
    while (input != "good" && input != "bad"){
        cout << "I don't understand that :(" << endl;
        cout << "Enter 'good' or 'bad'" << endl;
        getline(cin, input);
    }

    if (input == "good"){
        cout << "I'm glad to hear =]";
    }
    else if (input == "bad") {
        cout << "Get out of here ;D";
    }

    return 0;
}