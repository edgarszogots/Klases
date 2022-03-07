#include <iostream>
using namespace std;

class twointegers {
private:
    int a;
    int b;
public:
int sum=a+b;
};
int main()
{
    twointegers t(5,7);
    cout << t.sum << endl;
    return 0;
}
