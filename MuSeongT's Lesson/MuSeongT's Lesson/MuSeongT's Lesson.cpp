#include <iostream>
using namespace std;

class Ctt
{
public:
    Ctt() { cout << "Ctt" << endl; }
    ~Ctt() { cout << "~Ctt" << endl; }

    void SetData(int nParam) { m_nData = nParam;  }
    int GetData() { return m_nData;  }
/*private:*/
    int m_nData;
};
int main()
{
    cout << "START" << endl;
    Ctt a;
    /*a.m_nData = 63;*/

    a.SetData(20);
    cout << a.GetData() << endl;
    
    cout << "FINISH" << endl;
}