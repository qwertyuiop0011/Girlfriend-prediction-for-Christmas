#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    string a;
    int b = 0;
    string c;
    string d;
    string e;
    string f;

    cout << "What is your name?" << endl;
    cin >> a;

    cout << "How old are you?" << endl;
    cin >> b;
    if (b == 0) {
        cout << "try it again.";
        abort();
    }

    cout << "Where are you from?" << endl;
    cin >> c;

    cout << "Have you ever had a girlfriend?" << endl;
    cin >> d;

    cout << "Do you hesitate talking to girls?" << endl;
    cin >> e;

    cout << "Do you think that you are attractive?" << endl;
    cin >> f;

    cout << "The possibility that you're going to have a girlfriend is 0%." << endl;

    return 0;
}
