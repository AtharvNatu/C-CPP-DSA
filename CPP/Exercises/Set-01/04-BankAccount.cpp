#include <iostream>

class BankAccount
{
    private:
        float balance;
    
    public:
        void deposit(float amount)
        {
            balance += amount;
            std::cout << std::endl << amount << " deposited to account ..." << std::endl;
        }

        float getBalance()
        {
            return balance;
        }

        void show()
        {
            std::cout << std::endl << "ACCOUNT INFO";
            std::cout << std::endl << "------------------------------------";
            std::cout << std::endl << "BALANCE = " << getBalance();
            std::cout << std::endl << "------------------------------------" << std::endl;
        }
};

int main()
{
    BankAccount account;

    account.deposit(10000.50f);
    account.show();
    account.deposit(3500.0f);
    account.show();

    return 0;
}
