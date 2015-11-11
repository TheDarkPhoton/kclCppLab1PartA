#include <iostream>

using namespace std;

int main() {
    cout << "Hello World" << endl;

    string names[] = {
            "January", "February",
            "March", "April", "May",
            "June", "July", "August",
            "September", "October", "November",
            "December",
    };

    for (int i = 0; i < end(names) - begin(names); ++i) {
        cout << names[i] << endl;
    }

    return 0;
}