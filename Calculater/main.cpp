#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b;
    char c;

    cin >> a >> c >> b;
    switch(c)
    {
    case '/':
        cout<< a/b;
        break;
    case '*':
        cout<< a*b;
        break;
    case '+':
        cout<< a+b;
        break;
    case '-':
        cout<< a-b;
        break;
    case '^':
        cout<< pow(a, b);
        break;
    default:
        cout<<"Error";
    }

    return 0;
}
