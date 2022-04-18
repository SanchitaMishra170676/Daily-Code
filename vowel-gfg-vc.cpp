#include <bits/stdc++.h>
using namespace std;

int main(void) {
	char ch, user_input;
	cin >> user_input;
	ch = tolower(user_input);

	switch (ch) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "It is vowel";
		break;
	default:
		cout << "It is not a vowel.";
	}
}