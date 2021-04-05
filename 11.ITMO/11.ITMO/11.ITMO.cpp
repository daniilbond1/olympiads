
#include <iostream>
using namespace std;

int main()
{
    double a1 = 0;
    double b1 = 0;
    double a2 = 0;
    double b2 = 0;
    int counter = 0;
    int i = 0;


    double first = 0;
    double second = 0;

    cin >> a1 >> b1;
    cin >> a2 >> b2;
    
    a1=pow(a1, 2);
    a2=pow(a2, 2);
    b1=pow(b1, 2);
    b2=pow(b2, 2);

    first = a1 / b1;
    second = a2 / b2;

    for (int i = first - 1;i <= second + 1;i++) {
        if (first <= i && second >= i) {
            counter++;
        }
    }

    cout << counter;
}