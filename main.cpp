#include <iostream>
#include <string>
using namespace std;

int main() {
    int const SIZE = 5;
    string array[SIZE] = {"Hello", "World"};
    for (int i = 0; i < SIZE; i++) {
      cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}