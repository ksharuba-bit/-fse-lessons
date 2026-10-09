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

    double x;

    cout << "Введіть число для пошуку: ";
    cin >> x;

    bool found = false;

    cout << "Позиції: ";

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i + 1 << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "Число не знайдено";
    }

    cout << endl;

    return 0;
}


