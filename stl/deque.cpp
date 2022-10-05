#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> x{1,5,5,67,7,9};
    deque<int> dq, dq2;

    for (auto it = x.begin(); it != x.end(); it++) cout << *it << "_";
    cout << endl;

    for (int i = 1; i<6; i++) dq.push_back(i);

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;
    cout << "Size: " << dq.size() << endl;

    for (auto it = dq.begin(); it != dq.end(); it++) cout << *it << "_";
    cout << endl;

    cout << "ELement at idx 3: " << dq.at(3) << endl; 

    dq2.swap(dq);

    dq.clear();

    cout << "dq size: " << dq.size() << endl;
    
    for (auto it = dq2.begin(); it != dq2.end(); it++) cout << *it << " ";
    cout << endl;

    return 0;
}