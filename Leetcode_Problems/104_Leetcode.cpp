//TO LOWER CASE
#include <iostream>
#include <string>

using namespace std;

string toLowerCase(string s) {
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
    }
    return s;
}

int main() {
    string s = "Hello";
    cout << "Input: " << s << endl;
    cout << "Output: " << toLowerCase(s) << endl;
    return 0;
}
