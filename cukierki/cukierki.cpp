#include <iostream>

using namespace std;

int students, cukierki, x, y;

int main()
{
    cout << "How many students is in your class? ";
    cin >> students;

    cout << "How many cukierki bought mom? ";
    cin >> cukierki;

    x = cukierki / (students - 1);
    cout << "Cukierki for each student: " << x << endl;

    y = cukierki - x * (students - 1);
    cout << "Cukierki for John for the evening: " << y << endl;

    return 0;
}
