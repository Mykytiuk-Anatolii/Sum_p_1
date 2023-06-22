#include <iostream>
#include <cmath>
using namespace std;

//Рекурсія для факторіалу//
double Factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * Factorial(n - 1);
}
//Рекурсія для a[k]//
double A(int n) {
    if (n == 0)
        return 1;
    else
        return pow(sin((A(n - 1)) - 1), 2) / pow(n, 2);
}
//Функція для чисельника//
double D(int n) {
    if (n <= 1)
        return 1;
    else
        return pow(-1, n + 1);
}
double Sum(int n) {
    double res = 0;
    for (int i = 1; i <= n; i++) {
        double sum = D(i) / Factorial(Factorial(i)) * A(i); //об'єднуємо в один приклад//
        res += sum; //додаємо кожну sum//
        cout << "d: " << D(i) << " " << "Factorial: " << Factorial(Factorial(i)) << " " << "A[i]: " << A(i) << endl;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    double result = Sum(n);
    cout << "Sum: " << result << endl;
}