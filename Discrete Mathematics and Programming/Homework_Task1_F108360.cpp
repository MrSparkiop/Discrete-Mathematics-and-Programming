#include <iostream>

using namespace std;

int main() {
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	int MinInter = 20, MaxInter = 300;

	if (x < MinInter || x > MaxInter || y < MinInter || y > MaxInter || z < MinInter || z > MaxInter)
	{
		cout << "Invalid input data!";
	}
	else
	{
		int minNumb = min(x, y);
		minNumb = min(minNumb, z);

		for (int i = minNumb; i > 0; i--)
		{
			if (x % i == 0 && y % i == 0 && z % i == 0) {
				cout << i;
				break;
			}
		}

	}
	return 0;
}