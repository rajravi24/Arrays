
// C++ program to parse a comma-separated string
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cout<<"Enter the text: ";
    cin>>str;
    cout<<"\n\n";
    vector<string> v;
 
    stringstream ss(str);
 
    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        v.push_back(substr);
    }
 
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}
