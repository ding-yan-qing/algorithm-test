#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int total_minute = 24 * 60, mint = 1e+6, maxt = 0;
    vector<int> vec1, vec2;
    for (int i = 0; i < total_minute; ++i) {
        int hour = i / 60, minute = i % 60;
        if ((a[0] == '?' || a[0] - '0' == hour / 10) && (a[1] == '?' ||
                a[1] - '0' == hour % 10) && (a[3] == '?' || a[3] - '0' == minute / 10) &&
                (a[4] == '?' || a[4] - '0' == minute % 10))
            vec1.push_back(i);
        if ((b[0] == '?' || b[0] - '0' == hour / 10) && (b[1] == '?' ||
                b[1] - '0' == hour % 10) && (b[3] == '?' || b[3] - '0' == minute / 10) &&
                (b[4] == '?' || b[4] - '0' == minute % 10))
            vec2.push_back(i);
    }
    for (int i = 0; i < vec1.size(); ++i) {
        for (int j = 0; j < vec2.size(); ++j) {
            if (vec1[i] < vec2[j]) {
                mint = min(vec2[j] - vec1[i], mint);
                maxt = max(vec2[j] - vec1[i], maxt);
            }
        }
    }
    cout << mint << " " << maxt;
}
// 64 位输出请用 printf("%lld")