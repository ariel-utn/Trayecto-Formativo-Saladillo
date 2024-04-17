#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //   int/int    = int
    // float/int    = float
    //   int/float  = float
    // float/float  = float

    cout << "Division entera 7/5 " << 7 / 5 << endl;

    cout << "Division real 7.0/5 " << 7.0 / 5 << endl;

    cout << "Division real 7/5.0 " << 7 / 5.0 << endl;

    cout << "Division real 7.0/5.0 " << 7.0 / 5.0 << endl;

    /// CASTEO

    cout << "Division entera 7/5 " << (float)7/5 << endl;

    return 0;
}
