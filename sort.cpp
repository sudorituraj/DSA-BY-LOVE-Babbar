#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;
    cin.ignore();

    vector<string> names(n);

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, names[i]);
    }

    sort(names.begin(), names.end());

    cout << "\nSorted names:\n";
    for (const auto& name : names) {
        cout << name << endl;
    }

    return 0;
}
