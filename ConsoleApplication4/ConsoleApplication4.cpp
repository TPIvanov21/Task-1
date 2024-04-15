#include <iostream>
using namespace std;

class Fact {
private:
    int number;
public:
    Fact(int newNum)
    {
        number = newNum;
    }
    int factoriel() 
    {
        int result = 1;
        for (int i = 1; i <= number; i++) result *= i;
        return result;
    }
};

int main()
{
    int num;
    cin >> num;
    Fact f(num);
    cout << f.factoriel();
}