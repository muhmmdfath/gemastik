#include <iostream>
#include <vector>
using namespace std;
struct Point {
    int x, y;
};

bool isTreeVisible(const Point& pengamat, const Point& pohon) {
    return (pohon.x - pengamat.x) * (pohon.y - pengamat.y) >= 0;
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<Point> trees(N);
    for (int i = 0; i < N; i++) {
        cin >> trees[i].x >> trees[i].y;
    }

    int visibleTreesCount = 0;
    Point pengamat = {X, Y};

    for (const Point& pohon : trees) {
        if (isTreeVisible(pengamat, pohon)) {
            visibleTreesCount++;
        }
    }

    cout << visibleTreesCount << endl;

    return 0;
}
