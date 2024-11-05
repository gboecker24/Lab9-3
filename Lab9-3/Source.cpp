//Gavin Boecker lab9-3 11/5/2024

#include <iostream>

using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main() {

    const int rolls = 20;
    int roll_values[rolls];

    srand(time(0));

    cout << endl;

    for (int i = 0; i < rolls; i++) {
        roll_values[i] = (rand() % 6) + 1;
    }
    if (hasRun(roll_values, rolls)) {
        cout << "has run: ";
        displayRun(roll_values, rolls);
    }
    else {
        cout << "no run: ";
        for (int i = 1; i < rolls; i++) {
            cout << roll_values[i] << " ";
        }
    }
    cout << endl;
}

void displayRun(int values[], int size) {
    for (int i = 0; i < size; i++) {
        if (values[i] == values[i + 1] && values[i] == values[i - 1]) cout << values[i] << " ";
        else if (values[i] == values[i + 1]) cout << "(" << values[i] << " ";
        else if (values[i] == values[i - 1]) cout << values[i] << ") ";
        else cout << values[i] << " ";
    }
}

bool hasRun(int values[], int size) {
    for (int i = 1; i < size; i++) {
        if (values[i] == values[i - 1]) return true;
    }
    return false;
}