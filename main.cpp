// Create a program that allow user choose the name of bank, createAccount, deposit, withdraw, transfer, displayBalance

#include <iostream>
#include <string>
#include <vector>

class Bank {
public:
    // pure virtual functions
    virtual void createAccount(const std::string& bank, const std::string& accountHolder, double Balance) = 0; 
    virtual void deposit(const std::string& accountHolder, double amount) = 0; 
    virtual void withdraw(const std::string& accountHolder, double amount) = 0;  
    virtual void transfer(const std::string& fromAccountHolder, const std::string& toAccountHolder, double amount) = 0; 
    virtual void displayBalance(const std::string& accountHolder) = 0;
};

class MBBank : public Bank {
private:
    struct Account {
        std::string bankName;
        std::string holder;
        double balance;
    };
    std::vector<Account> accounts;

public:
    void createAccount(const std::string& bank, const std::string& accountHolder, double Balance) override {
        accounts.push_back({bank, accountHolder, Balance});
    }

    void deposit(const std::string& accountHolder, double amount) override {
        for (Account& account : accounts) {
            if (account.holder == accountHolder) {
                account.balance += amount;
                std::cout << "Deposited " << amount << " doubleo " << accountHolder << "'s account." << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
        
    }

    void withdraw(const std::string& accountHolder, double amount) override {
        for (Account& account : accounts) {
            if (account.holder == accountHolder) {
                if (account.balance >= amount) {
                    account.balance -= amount;
                    std::cout << "Withdrawn " << amount << " from " << accountHolder << "'s account." << std::endl;
                } else {
                    std::cout << "Insufficient balance." << std::endl;
                }
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }

    void transfer(const std::string& fromAccountHolder, const std::string& toAccountHolder, double amount) override {
        for (Account& fromAccount : accounts) {
            if (fromAccount.holder == fromAccountHolder) {
                if (fromAccount.balance >= amount) {
                    for (Account& toAccount : accounts) {
                        if (toAccount.holder == toAccountHolder) {
                            fromAccount.balance -= amount;
                            toAccount.balance += amount;
                            std::cout << "Transferred " << amount << " from " << fromAccountHolder
                                      << "'s account to " << toAccountHolder << "'s account." << std::endl;
                            return;
                        }
                    }
                    std::cout << "Recipient account not found." << std::endl;
                    return;
                } else {
                    std::cout << "Insufficient balance in the source account." << std::endl;
                    return;
                }
            }
        }
        std::cout << "Source account not found." << std::endl;
    }

    void displayBalance(const std::string& accountHolder) override {
        for (const Account& account : accounts) {
            if (account.holder == accountHolder) {
                std::cout << accountHolder << "'s account balance: " << account.balance << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }
};

class VietinBank : public Bank {
private:
    struct Account {
        std::string bankName;
        std::string holder;
        double balance;
    };
    std::vector<Account> accounts;

public:
    void createAccount(const std::string& bank, const std::string& accountHolder, double Balance) override {
        accounts.push_back({bank, accountHolder, Balance});
    }

    void deposit(const std::string& accountHolder, double amount) override {
        for (Account& account : accounts) {
            if (account.holder == accountHolder) {
                account.balance += amount;
                std::cout << "Deposited " << amount << " doubleo " << accountHolder << "'s account." << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }

    void withdraw(const std::string& accountHolder, double amount) override {
        for (Account& account : accounts) {
            if (account.holder == accountHolder) {
                if (account.balance >= amount) {
                    account.balance -= amount;
                    std::cout << "Withdrawn " << amount << " from " << accountHolder << "'s account." << std::endl;
                } else {
                    std::cout << "Insufficient balance." << std::endl;
                }
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }

    void transfer(const std::string& fromAccountHolder, const std::string& toAccountHolder, double amount) override {
        for (Account& fromAccount : accounts) {
            if (fromAccount.holder == fromAccountHolder) {
                if (fromAccount.balance >= amount) {
                    for (Account& toAccount : accounts) {
                        if (toAccount.holder == toAccountHolder) {
                            fromAccount.balance -= amount;
                            toAccount.balance += amount;
                            std::cout << "Transferred " << amount << " from " << fromAccountHolder
                                      << "'s account to " << toAccountHolder << "'s account." << std::endl;
                            return;
                        }
                    }
                    std::cout << "Recipient account not found." << std::endl;
                    return;
                } else {
                    std::cout << "Insufficient balance in the source account." << std::endl;
                    return;
                }
            }
        }
        std::cout << "Source account not found." << std::endl;
    }

    void displayBalance(const std::string& accountHolder) override {
        for (const Account& account : accounts) {
            if (account.holder == accountHolder) {
                std::cout << accountHolder << "'s account balance: " << account.balance << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }
};

class AgriBank : public Bank {
private:
    struct Account {
        std::string bankName;
        std::string holder;
        double balance;
    };
    std::vector<Account> accounts;

public:
    void createAccount(const std::string& bank, const std::string& accountHolder, double Balance) override {
        accounts.push_back({bank, accountHolder, Balance});
    }

    void deposit(const std::string& accountHolder, double amount) override {
        for (Account& account : accounts) {
            if (account.holder == accountHolder) {
                account.balance += amount;
                std::cout << "Deposited " << amount << " doubleo " << accountHolder << "'s account." << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }

    void withdraw(const std::string& accountHolder, double amount) override {
        for (Account& account : accounts) {
            if (account.holder == accountHolder) {
                if (account.balance >= amount) {
                    account.balance -= amount;
                    std::cout << "Withdrawn " << amount << " from " << accountHolder << "'s account." << std::endl;
                } else {
                    std::cout << "Insufficient balance." << std::endl;
                }
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }

    void transfer(const std::string& fromAccountHolder, const std::string& toAccountHolder, double amount) override {
        for (Account& fromAccount : accounts) {
            if (fromAccount.holder == fromAccountHolder) {
                if (fromAccount.balance >= amount) {
                    for (Account& toAccount : accounts) {
                        if (toAccount.holder == toAccountHolder) {
                            fromAccount.balance -= amount;
                            toAccount.balance += amount;
                            std::cout << "Transferred " << amount << " from " << fromAccountHolder
                                      << "'s account to " << toAccountHolder << "'s account." << std::endl;
                            return;
                        }
                    }
                    std::cout << "Recipient account not found." << std::endl;
                    return;
                } else {
                    std::cout << "Insufficient balance in the source account." << std::endl;
                    return;
                }
            }
        }
        std::cout << "Source account not found." << std::endl;
    }

    void displayBalance(const std::string& accountHolder) override {
        for (const Account& account : accounts) {
            if (account.holder == accountHolder) {
                std::cout << accountHolder << "'s account balance: " << account.balance << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }
};

int main() {
    MBBank MBBank;
    VietinBank VietinBank;
    AgriBank AgriBank;
    // double chooseBank;
    int chooseBank;
    std::string name;
    double balance = 1000;
    std::string who;
    std::cout << "Choose the name" << std::endl;
    std::cin >> name;

    std::cout << "Choose the Bank" << std::endl
              << "1. MBBank" << std::endl 
              << "2. VietinBank" << std::endl
              << "3. AgriBank" << std::endl;
    std::cin >> chooseBank;
    if(chooseBank == 1) {
        std::cout << "You have already $1000" << std::endl;
        MBBank.createAccount("MBBank", name, balance);
        int chooseFunc;
        std::cout << "Choose the function" << std::endl
                << "1. deposit" << std::endl 
                << "2. withdraw" << std::endl
                << "3. transfer" << std::endl;
        std::cin >> chooseFunc;
        if(chooseFunc == 1) {
            double deposit;
            std::cout << "How much money do you want to deposit?" << std::endl;
            std::cin >> deposit;
            MBBank.deposit(name, deposit);
            MBBank.displayBalance(name);
        }
        else if(chooseFunc == 2) {
            double withdraw;
            std::cout << "How much money do you want to withdraw?" << std::endl;
            std::cin >> withdraw;
            MBBank.withdraw(name, withdraw);
            MBBank.displayBalance(name);
        }
        else if(chooseFunc == 3) {
            double transfer;
            std::cout << "Which account?" << std::endl;
            std::cin >> who;
            std::cout << "How much money do you want to transfer?" << std::endl;
            std::cin >> transfer;
            MBBank.transfer(name, who, transfer);
            MBBank.displayBalance(name);
        }
    }
    else if(chooseBank == 2) {
        std::cout << "You have already $1000" << std::endl;
        VietinBank.createAccount("Vietinbank", name, balance);
        int chooseFunc;
        std::cout << "Choose the function" << std::endl
                << "1. deposit" << std::endl 
                << "2. withdraw" << std::endl
                << "3. transfer" << std::endl;
        std::cin >> chooseFunc;
        if(chooseFunc == 1) {
            double deposit;
            std::cout << "How much money do you want to deposit?" << std::endl;
            std::cin >> deposit;
            VietinBank.deposit(name, deposit);
            VietinBank.displayBalance(name);
        }
        else if(chooseFunc == 2) {
            double withdraw;
            std::cout << "How much money do you want to withdraw?" << std::endl;
            std::cin >> withdraw;
            VietinBank.withdraw(name, withdraw);
            VietinBank.displayBalance(name);
        }
        else if(chooseFunc == 3) {
            double transfer;
            std::cout << "Which account?" << std::endl;
            std::cin >> who;
            std::cout << "How much money do you want to transfer?" << std::endl;
            std::cin >> transfer;
            VietinBank.transfer(name, who, transfer);
            VietinBank.displayBalance(name);
        }
    }
    else if(chooseBank == 3) {
        std::cout << "You have already $1000" << std::endl;
        AgriBank.createAccount("Agribank", name, balance);
        int chooseFunc;
        std::cout << "Choose the function" << std::endl
                << "1. deposit" << std::endl 
                << "2. withdraw" << std::endl
                << "3. transfer" << std::endl;
        std::cin >> chooseFunc;
        if(chooseFunc == 1) {
            double deposit;
            std::cout << "How much money do you want to deposit?" << std::endl;
            std::cin >> deposit;
            AgriBank.deposit(name, deposit);
            AgriBank.displayBalance(name);
        }
        else if(chooseFunc == 2) {
            double withdraw;
            std::cout << "How much money do you want to withdraw?" << std::endl;
            std::cin >> withdraw;
            AgriBank.withdraw(name, withdraw);
            AgriBank.displayBalance(name);
        }
        else if(chooseFunc == 3) {
            double transfer;
            std::cout << "Which account?" << std::endl;
            std::cin >> who;
            std::cout << "How much money do you want to transfer?" << std::endl;
            std::cin >> transfer;
            AgriBank.transfer(name, who, transfer);
            AgriBank.displayBalance(name);
        }
    }
    return 0;
}
