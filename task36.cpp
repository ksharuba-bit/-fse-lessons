#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

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

    vector<double> ascending = a;
    vector<double> descending = a;

    sort(ascending.begin(), ascending.end());

    sort(descending.begin(), descending.end(), greater<double>());

    cout << "За зростанням: ";

    for (double x : ascending) {
        cout << x << " ";
    }

    cout << endl;

    cout << "За спаданням: ";

    for (double x : descending) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}