#include <bits/stdc++.h>

using namespace std;

vector<int> fungsiSolver(string str1, string str2) {
    vector<int> result;
    int n;

    for (int  i = 0; i < str1.length(); i++) {
        string temp = str1.substr(0, i) + str1.substr(i + 1);
        if (temp == str2) {
            result.push_back(i);
        }
    }

    if (result.empty()) {return {-1};}

    return result;
}

int main () {

    string str1, str2;

    cin >> str1 >> str2;

    vector<int> sum = fungsiSolver(str1,str2) {

    }

}