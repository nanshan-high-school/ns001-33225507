#include <iostream>
#include <stack>
#include <vector>
using namespace std; 
int main() {
    stack <int> box;
    vector<int> output;
    int n, m;
    cin >> n >> m;
    int book = 1;
    for (int i = 0; i < m; i++) {
        char d;
        cin >> d;
        if (d == 'a') {
           int t;
           cin >> t;
           for (int j = 0; j < t; j++) {
               box.push(book);
               book++;
           }
        }
        else if (d == 'b') {
                int t;
                cin >> t;
                for (int j = 0; j < t; j++) {
                    output.push_back(box.top());
                    box.pop();
                }
        }
    }
    string out;
    for (int i = 0; i < n; i++) {
        out[i] = output[i] + 96;
        cout << out[i];
        if (i != n - 1) {
           cout << " ";
        }
    }
}
