#include <iostream>
#include "array.h"

using namespace std;

int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++){
        cout << argv[i];
    }
    cout << endl ;
    cout << "Algorhythm tests!" << endl;

    Array<int> *arr = new Array<int>(30);

    return 0;
}
