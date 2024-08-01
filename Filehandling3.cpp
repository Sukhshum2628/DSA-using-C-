#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream out_file("Example2.txt" ios::app);
    if (!out_file) {
        cout << "Error while opening the file" << endl;
        return 1;
    }

    string Name;
    string password;
    cout << "Enter the username: ";
    getline(cin, Name);
    cout << "Enter password: ";
    getline(cin, password);

    out_file << Name << endl;
    out_file << password << endl;
    out_file.close();

    ifstream in_file("Example2.txt");
    if (!in_file) {
        cout << "Error while opening the file for reading" << endl;
        return 1;
    }

    string line;
    while (getline(in_file, line)) {
        cout << line << endl;
    }

    in_file.close();
    return 0;
}
