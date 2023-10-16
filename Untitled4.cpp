#include <iostream>
#include <cmath>

using namespace std;

void solve_task1() {

    cout << "Solving the first task" << endl;
    int number;
    cout << "Enter an integer greater than 999: ";
    cin >> number;
        // тут считаем розяд тисяч
    int discharge_thousand = number / 1000;

    // тут считает последнюю цифру
    int last_digit_thousand = discharge_thousand % 10;

    cout << "The last digit is in thousands: " << last_digit_thousand << endl;
}


  bool isIncreasingOrDecreasing(int number) {
    int a = number / 100;
    int b = (number / 10) % 10;
    int c = number % 10;
    return (a < b && b < c) || (a > b && b > c);
}

void solve_task2() {

    cout << "Solving the second task" << endl;
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;
    bool result = isIncreasingOrDecreasing(number);
    cout << (result ? "true (1)" : "false (0)") << endl;

}

double calculate_y(double x) {
    double numerator = (cbrt(pow(x, 2)) + sqrt(fabs(x))) / log(pow(sin(fabs(x) + 0.29), 2));
    return numerator;
}

void solve_task3() {

    cout << "Solving the third task" << endl;
    double x_value = 1.5;  // Приклад значення x
    double pre_result = calculate_y(x_value);
    double result = result + (M_PI * fabs(tan(x_value))) / 2;
    cout << "The result of calculating y at x = " << x_value << " is equal to " << result << endl;
}

int main() {
    int task_number;

    cout << "Select the task number (1, 2, or 3): ";
    cin >> task_number;

    switch (task_number) {
        case 1:
            solve_task1();
            break;
        case 2:
            solve_task2();
            break;
        case 3:
            solve_task3();
            break;
        default:
            cout << "The task number is incorrect. Select 1, 2, or 3." << std::endl;
            break;
    }

    return 0;
}