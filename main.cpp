// về các ngân hàng tên khác nhau. Cho phép chọn ngân hàng rồi thực hiện các thao tác. Tạo tk, thêm, chuyển,...
#include <iostream>
#include <string>
#include <vector>

class Bank {
public:
    // pure virtual functions
    virtual void createAccount(const std::string& bank, const std::string& accountHolder, double Balance) = 0; // tao tai khoan
    virtual void deposit(const std::string& accountHolder, double amount) = 0; // tien gui
    virtual void withdraw(const std::string& accountHolder, double amount) = 0;  // rut
    virtual void transfer(const std::string& fromAccountHolder, const std::string& toAccountHolder, double amount) = 0; // chuyen tien
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
        for (auto& account : accounts) {
            if (account.holder == accountHolder) {
                account.balance += amount;
                std::cout << "Deposited " << amount << " into " << accountHolder << "'s account." << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
        
    }

    void withdraw(const std::string& accountHolder, double amount) override {
        for (auto& account : accounts) {
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
        for (auto& fromAccount : accounts) {
            if (fromAccount.holder == fromAccountHolder) {
                if (fromAccount.balance >= amount) {
                    for (auto& toAccount : accounts) {
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
        for (const auto& account : accounts) {
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
        for (auto& account : accounts) {
            if (account.holder == accountHolder) {
                account.balance += amount;
                std::cout << "Deposited " << amount << " into " << accountHolder << "'s account." << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }

    void withdraw(const std::string& accountHolder, double amount) override {
        for (auto& account : accounts) {
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
        for (auto& fromAccount : accounts) {
            if (fromAccount.holder == fromAccountHolder) {
                if (fromAccount.balance >= amount) {
                    for (auto& toAccount : accounts) {
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
        for (const auto& account : accounts) {
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
        for (auto& account : accounts) {
            if (account.holder == accountHolder) {
                account.balance += amount;
                std::cout << "Deposited " << amount << " into " << accountHolder << "'s account." << std::endl;
                return;
            }
        }
        std::cout << "Account not found." << std::endl;
    }

    void withdraw(const std::string& accountHolder, double amount) override {
        for (auto& account : accounts) {
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
        for (auto& fromAccount : accounts) {
            if (fromAccount.holder == fromAccountHolder) {
                if (fromAccount.balance >= amount) {
                    for (auto& toAccount : accounts) {
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
        for (const auto& account : accounts) {
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
    // int chooseBank;
    int_fast32_t chooseBank;
    std::string name;
    int balance = 1000;
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
        if(chooseBank == 1) {
            int deposit;
            std::cout << "How much money do you want to deposit?" << std::endl;
            std::cin >> deposit;
            MBBank.deposit(name, deposit);
            MBBank.displayBalance(name);
        }
        if(chooseBank == 2) {
            int withdraw;
            std::cout << "How much money do you want to withdraw?" << std::endl;
            std::cin >> withdraw;
            MBBank.deposit(name, withdraw);
            MBBank.displayBalance(name);
        }
        if(chooseBank == 3) {
            int transfer;
            std::cout << "How much money do you want to transfer?" << std::endl;
            std::cin >> transfer;
            MBBank.deposit(name, transfer);
            MBBank.displayBalance(name);
        }
    }
    if(chooseBank == 2) {
        std::cout << "You have already $1000" << std::endl;
        VietinBank.createAccount("Vietinbank", name, balance);
        int chooseFunc;
        std::cout << "Choose the function" << std::endl
                << "1. deposit" << std::endl 
                << "2. withdraw" << std::endl
                << "3. transfer" << std::endl;
        std::cin >> chooseFunc;
        if(chooseBank == 1) {
            int deposit;
            std::cout << "How much money do you want to deposit?" << std::endl;
            std::cin >> deposit;
            VietinBank.deposit(name, deposit);
            VietinBank.displayBalance(name);
        }
        if(chooseBank == 2) {
            int withdraw;
            std::cout << "How much money do you want to withdraw?" << std::endl;
            std::cin >> withdraw;
            VietinBank.deposit(name, withdraw);
            VietinBank.displayBalance(name);
        }
        if(chooseBank == 3) {
            int transfer;
            std::cout << "How much money do you want to transfer?" << std::endl;
            std::cin >> transfer;
            VietinBank.deposit(name, transfer);
            VietinBank.displayBalance(name);
        }
    }
    if(chooseBank == 3) {
        std::cout << "You have already $1000" << std::endl;
        AgriBank.createAccount("Agribank", name, balance);
        int chooseFunc;
        std::cout << "Choose the function" << std::endl
                << "1. deposit" << std::endl 
                << "2. withdraw" << std::endl
                << "3. transfer" << std::endl;
        std::cin >> chooseFunc;
        if(chooseBank == 1) {
            int deposit;
            std::cout << "How much money do you want to deposit?" << std::endl;
            std::cin >> deposit;
            AgriBank.deposit(name, deposit);
            AgriBank.displayBalance(name);
        }
        if(chooseBank == 2) {
            int withdraw;
            std::cout << "How much money do you want to withdraw?" << std::endl;
            std::cin >> withdraw;
            AgriBank.deposit(name, withdraw);
            AgriBank.displayBalance(name);
        }
        if(chooseBank == 3) {
            int transfer;
            std::cout << "How much money do you want to transfer?" << std::endl;
            std::cin >> transfer;
            AgriBank.deposit(name, transfer);
            AgriBank.displayBalance(name);
        }
    }


    return 0;
}
