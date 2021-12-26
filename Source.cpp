#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	int m, g1, g2;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> g1 >> g2;
		for (int w = 0; w < n; w++) {
			if (arr[w] == g1)
				arr[w] = g2;
		}
	}

	cout << " " << endl;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
