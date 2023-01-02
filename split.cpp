#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string input, s;
    getline(cin, input);

    istringstream iss(input);

    while (getline(iss, s, ' ')) {
        cout << s << "\n";
    }
}
