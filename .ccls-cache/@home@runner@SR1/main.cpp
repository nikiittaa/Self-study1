#include <iostream>
using namespace std;

int main() {
    int a, b, op;
    double result;

    cout << "Введите первое число\n";
    cin >> a;

    cout << "Введите второе число\n";
    cin >> b;

    cout << "Введите оператор\n1\t+\n2\t-\n3\t*\n4\t/\n\n";
    cin >> op;

    switch (op) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;
    }

    cout << "Результат = " << result;

    return 0;
}