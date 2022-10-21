#include <iostream>
#include <stack>

using namespace std;


void print(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << "_";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st1;

    st1.push(99);
    for (int i = 0; i < 7 ; i++) {
        st1.push(i);
    }

    print(st1);

    st1.pop();

    cout << st1.top();
    
    return 0;
}