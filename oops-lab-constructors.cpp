#include <bits/stdc++.h>
using namespace std;

class construct {
public: int x, y;

	construct() {
		x = 10;
		y = 20;
	}

	construct(int a, int b) {
		x = a;
		y = b;
	}
};

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	construct abc;
	cout << "values from default Constructor:\n" << abc.x << " " << abc.y << "\n";

	construct xyz(50, 60);
	cout << "values from parameteried Constructor:\n" << xyz.x << " " << xyz.y << "\n";


}