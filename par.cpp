#include <iostream>
#include <string>

using namespace std;

string removeOuterParentheses(string s) {
    string result = "";
    int balance = 0;
    int start = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            balance++;
        } else {
            balance--;
        }

        if (balance == 0) {
            result += s.substr(start + 1, i - start - 1);
            start = i + 1;
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    string result = removeOuterParentheses(s);
    cout << result << endl;

    return 0;
}
