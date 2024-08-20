#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = string(str.rbegin(), str.rend()); 

    if (str == reversedStr) {
        cout << "\"" << str << "\" is a palindrome.\n";
    } else {
        cout << "\"" << str << "\" is not a palindrome.\n";
    }

    return 0;
}

