#include <iostream>
using namespace std;

class BankAccount
{
    string clientName;
    string accountNum;
    double balance;
    public:
    BankAccount(string newName, string newAccNum, double newBalance)
    {
        clientName = newName;
        accountNum = newAccNum;
        balance = newBalance;
    }
    void displayAccount() 
    {
        cout << "Client Name: " << clientName << endl;
        cout << "Account Number: " << accountNum << endl;
        cout << "Balance: $" << balance << endl;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (balance >= amount) balance -= amount;
    }
};

int main()
{
    string clientName, accNum;
    double starterBalance;
    cin >> clientName >> accNum >> starterBalance;
    BankAccount client(clientName,accNum,starterBalance);
    client.deposit(200);
    client.withdraw(100);
    client.displayAccount();

}