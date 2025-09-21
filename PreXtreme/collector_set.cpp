#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;






int main() {
    int N;
    cin >> N;

    vector<int> arr;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    return 0;
}