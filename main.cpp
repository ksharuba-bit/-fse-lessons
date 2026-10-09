#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Введіть кількість елементів: ";
    cin >> n;

    vector<double> a(n);

    cout << "Введіть елементи масиву:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Масив: ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}


