#include <iostream>
using namespace std;

class Ctt
{
public:
    Ctt() {
        cout << "Ctt" << endl;
    }
    ~Ctt() {
        cout << "~Ctt" << endl;
    }
};
int main()
{
    cout << "START" << endl;
    Ctt c;
    cout << "FINISH" << endl;
}