#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int x;

    srand(time(0));

    //perulangan dengan do..while (minimal 1x dikerjakan)
    cout << "PERULANGAN DO..WHILE" << endl;
    //nilai awal x = 1
    x = 1 + rand() % 10;
}