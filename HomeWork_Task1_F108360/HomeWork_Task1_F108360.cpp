#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    int minInterX = 2, maxInterX = 16;
    int minInterY = 1, maxInterY = 100;

    if (x < minInterX || x > maxInterX || y < minInterY || y > maxInterY)
    {
        cout << "Invalid input data!";
    }


    return 0;
}