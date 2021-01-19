#include <iostream>
using namespace std;

int main()
{
    int in(0), out(0), passenger(0), max(0);
    for (int i = 0; i < 10; i++) {
        cin >> out >> in;
        passenger = passenger - out + in;
        if (passenger > max) {
            max = passenger;
        }
    }
    cout << max;
    return 0;
    
}