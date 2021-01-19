#include <iostream>
using namespace std;

int swap(int num) {
    int hund, ten, one;
    one = num / 100;
    ten = ((num % 100) / 10)*10;
    hund = num % 10 *100;
    return hund + ten + one;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    /*cout << num1 / 100 << (num1 % 100) / 10 << num1 %10;*/
    if (swap(num1) > swap(num2)) {
        cout << swap(num1);
    }
    else
    {
        cout << swap(num2);
    }
}