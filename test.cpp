#include <iostream>

#include "FinishedConverter.h"

using namespace std;

int main () {
    FinishedConverter fc;
    string ans = fc.convertToPostfix("1+2");
    cout << ans << endl;
}