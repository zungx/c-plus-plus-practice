#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> first;
    vector<int> second (4, 100);
    vector<int> third (second.begin(), second.end());

    vector<int> v;
    for (int i=0; i<5; i++) v.push_back(i);
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.size() << endl;
    v.clear();
    cout << v.empty() << endl;

    for (int i=1; i<7; i++) v.push_back(i);
    
    for (int i=0; i<v.size(); i++) cout << v[i] << "_";
    cout << endl;

    v.erase(v.begin() + 3); // delete element pos 2
    for (int i=0; i<v.size(); i++) cout << v[i] << "_";
    cout << endl;
    
    v.erase(v.begin(), v.begin() + 2);
    for (int i=0; i<v.size(); i++) cout << v[i] << "_";
    cout << endl;

    v.insert(v.begin(), 100);
    v.insert(v.end(), 20);

    for(auto it = v.begin(); it != v.end(); it++) cout << *it << "_";
    cout << endl;

    for (auto it = v.rbegin(); it != v.rend(); it++) cout << *it << "_";
    cout << endl;


    return 0;
}