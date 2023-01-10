#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#define exit if (input == "Exit") break;

using namespace std;

int main() {
	string input;
	vector<string> v;

	while (1) {
		v.clear();
		getline(cin, input);

		exit

		istringstream iss(input);
		string s;

		while (getline(iss, s, ' ')) {
			v.push_back(s);
		}

		if (v[1] == "*") {
			cout << stoi(v[0]) * stoi(v[2]) << "\n\n";
		}
		else if (v[1] == "/") {
			cout << stoi(v[0]) / stoi(v[2]) << "..." << stoi(v[0]) % stoi(v[2]) << "\n\n";
		}
		else if (v[1] == "+")
			cout << stoi(v[0]) + stoi(v[2]) << "\n\n";
		else if (v[1] == "-")
			cout << stoi(v[0]) - stoi(v[2]) << "\n\n";
		else
			cout << "try again!\n\n";
	}

	return 0;
}
