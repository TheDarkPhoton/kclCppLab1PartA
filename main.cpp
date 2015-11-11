#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Hello World" << endl;

    //copy the list of the array.
//    string names[] = {
//            "January", "February",
//            "March", "April", "May",
//            "June", "July", "August",
//            "September", "October", "November",
//            "December"
//    };

    vector<string> names({
         "January", "February",
         "March", "April", "May",
         "June", "July", "August",
         "September", "October", "November",
         "December"
    });

    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << endl;
    }

    return 0;
}