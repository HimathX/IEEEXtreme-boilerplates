#include <iostream>
#include <vector>

using namespace std;

int diffCalc(vector<int> mins, vector<int> maxs,int N ,int L) {
    vector<int> curr = mins;

    for (int i = 0; i < N; i++) {
        L = L - mins[i];
    }

    while (L > 0) {
        int idx = -1;
        for (int i = 0; i < N; ++i) {
            if (curr[i] < maxs[i] && (idx == -1 || curr[i] < curr[idx])) {
                idx = i;
            }
        }
        ++curr[idx];
        --L;
    }

    // return difference between max and min in curr
    int min = curr[0];
    int max = curr[0];
    for (int v : curr) {
        if (v < min) min = v;
        if (v > max) max = v;
    }
    return max - min;
}

int main() {
    int N, L;

    cin >> N >> L;

    vector<int> maxs(N);  
    vector<int> mins(N);     

    for (int i = 0; i < N; i++) {
        cin >> mins[i] >> maxs[i];
    }
    int result = diffCalc(mins, maxs, N , L);
    cout << result ;
    return 0;
}