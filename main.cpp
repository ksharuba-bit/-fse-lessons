#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <stdexcept>
#include <cmath>

using namespace std;

class TournamentStatistics {
    vector<double> values;

public:
    void read() {
        int n;

        cout << "Кількість елементів: ";

        if (!(cin >> n) || n <= 0)
            throw runtime_error("Некоректний розмір");

        values.resize(n);

        cout << "Введіть елементи: ";

        for (double& v : values) {
            if (!(cin >> v) || !isfinite(v))
                throw runtime_error("Некоректне число");
        }
    }

    vector<size_t> find(double x) const {
        vector<size_t> positions;

        for (size_t i = 0; i < values.size(); ++i) {
            if (values[i] == x)
                positions.push_back(i + 1);
        }

        return positions;
    }

    vector<double> sorted(bool ascending) const {
        vector<double> result = values;

        if (ascending)
            sort(result.begin(), result.end());
        else
            sort(result.begin(), result.end(), greater<double>());

        return result;
    }

    static void print(const vector<double>& a) {
        for (double v : a)
            cout << v << " ";

        cout << "\n";
    }

    void show() const {
        print(values);
    }
};

int main() {
    try {
        TournamentStatistics stats;

        stats.read();

        cout << "Початковий масив: ";
        stats.show();

        double x;

        cout << "Шукане число: ";

        if (!(cin >> x) || !isfinite(x))
            throw runtime_error("Некоректний пошук");

        vector<size_t> p = stats.find(x);

        if (p.empty()) {
            cout << "Число не знайдено\n";
        }
        else {
            cout << "Позиції: ";

            for (size_t i : p)
                cout << i << " ";

            cout << "\n";
        }

        cout << "За зростанням: ";
        stats.print(stats.sorted(true));

        cout << "За спаданням: ";
        stats.print(stats.sorted(false));
    }
    catch (const exception& e) {
        cerr << "Помилка: " << e.what() << "\n";
        return 1;
    }

    return 0;
