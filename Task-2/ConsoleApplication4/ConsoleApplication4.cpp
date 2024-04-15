#include <iostream>
using namespace std;

class Gcd 
{
    int num1;
    int num2;
public:
    Gcd(int newNum1, int newNum2)
    {
        num1 = newNum1;
        num2 = newNum2;
    }
    int gcd() 
    {
     int a = num1;
     int b = num2;
     while (b != 0) 
     {
       int temp = b;
       b = a % b;
       a = temp;
     }
      return a;
    }
};

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    Gcd g(num1, num2);
    cout << g.gcd();
}