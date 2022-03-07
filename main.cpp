#include <iostream.h>
using namespace std;

class twointegers
{
private:
    int a;
    int b;
};

int main()
{
    twointegers t;
    t.a = 5;
    t.b = 7;
    cout << t.a+t.b << endl;
    return 0;
}

/*
int main()
{
    twointegers t (5, 7);
    cout << t.sum() << endl;
    return 0;
}
*/
