#include <iostream>
using namespace std;

int main() {
	int h, m;
	int mi = 45;

	cin >> h >> m;

	if (m >= 45) {
		m -= mi;
	}
	else {
		if (h == 0) {
			h = 24;
		}
		h -= 1;
		mi -= m;
		m = 60 - mi;
	}

	cout << h << " " << m;

	return 0;
}