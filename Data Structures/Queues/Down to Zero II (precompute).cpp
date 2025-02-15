// github.com/andy489

#include <iostream>
#include <vector>
using namespace std;
#define MAXN 1000001

vector<int> downToZero() {
    vector<int> compute(MAXN, -1);
    int i, j;
    for (i = 0;i < 4;++i) {
        compute[i] = i;
    }

    for (i = 2;i < MAXN;++i) {
        if (compute[i] == -1 || compute[i] > compute[i - 1] + 1) {
            compute[i] = compute[i - 1] + 1;
        }
        for (j = 2;j <= i && j * i < MAXN;++j) {
            if (compute[j * i] == -1 || compute[i] + 1 < compute[j * i]) {
                compute[j * i] = compute[i] + 1;
            }
        }
    }
    return compute;
}

int main() {
    vector<int>precomputed = downToZero();
    int q, n;
    cin >> q;
    while (q--) {
        cin >> n;
        cout << precomputed[n] << '\n';
    }
}
