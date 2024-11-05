//Gavin Boecker lab9-3 11/5/2024

#include <iostream>

using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main() {


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