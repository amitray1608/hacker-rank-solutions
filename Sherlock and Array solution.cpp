#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a , int n){
    int i = 0;
    int j = n - 1;
    int sum = 0;
    while (i != j) {
        if(sum >= 0) {
            sum -= a[j];
            j--;
        } else {
            sum +=a[i];
            i++;
        }

    }
    return sum == 0 ? "YES" : "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a,n);
        cout << result << endl;
    }
    return 0;
}
