#include <iostream>
#include <vector>

using namespace std;

int count_sorted_vowel_strings(int n) {
    // Initialize a 2D vector dp
    // dp[i][j] represents the count of sorted vowel strings of length i+1 ending with vowel j
    vector<vector<int>> dp(n, vector<int>(5, 0));

    // Initialize base cases
    for (int j = 0; j < 5; ++j) {
        dp[0][j] = 1;
    }

    // Fill the dp array using bottom-up dynamic programming
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = j; k < 5; ++k) {
                dp[i][j] += dp[i - 1][k];
            }
        }
    }

    // Calculate the total count by summing up the values in the last row
    int total_count = 0;
    for (int j = 0; j < 5; ++j) {
        total_count += dp[n - 1][j];
    }

    return total_count;
}

int main() {
    int n;
    cin >> n;

    // Calculate and print the count of sorted vowel strings
    int count = count_sorted_vowel_strings(n);
    cout << count << endl;

    return 0;
}
