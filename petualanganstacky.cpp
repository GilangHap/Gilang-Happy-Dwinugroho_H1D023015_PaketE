

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    stack<int> stackganjil;

    // mengumpulkan stack sampai bilangan ke n
    int i = 1;
    while (stackganjil.size() < n) {
        if (i % 2 == 1) {
            stackganjil.push(i);
        }
        i++;
    }

    // print stack
    cout << "Bilangan ganjil yang ada di stack: ";
    while (!stackganjil.empty()) {
        cout << stackganjil.top() << " ";
        stackganjil.pop();
    }
    cout << endl;

    return 0;
}
