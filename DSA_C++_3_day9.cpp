#include<bits/stdc++.h>
using namespace std;
//Solution 1
int main () {
    string s1 = "jhon12Doe14@gmail18.com8";
    string s2 = s1;
    int count = 0;
    sort(s1.begin(), s1.end());
    for (int i = 0 ;i<s1.length()-1;i++) {
        if (s1[i] == s1[i+1]){
        cout<<"Duplicate Number: "<<s1[i]<<endl;
        count++;}
        if (isalpha(s1[i])) 
        break;
    }
    cout << "Total Duplicated Numbers: "<<count<<endl;
}
//Solution 2
