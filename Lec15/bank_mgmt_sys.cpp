#include<bits/stdc++.h>
using namespace std;

class Account{
    string acc_no;
    int pin;
    int balance;
    bool is_logged_in;

    public:
    Account(){}
    Account(string acc_no, int pin){
        this->acc_no = acc_no;
        this->pin = pin;
        balance = 0;
        is_logged_in = false;
    }

    bool log_in(){
        int upin;
        // string uacc;
        cout<<"Enter pin no: ";
        cin>>upin;

        if(upin == pin){
            return is_logged_in = true;
        }
    }

    void check_balance(){
        if(!is_logged_in || !log_in())
            cout<<"Login failed"<<endl;
        else cout<<"Balance is "<<balance<<endl;
    }

    void change_pin(){
        if(!is_logged_in || !log_in())
            return;
        
        int pin1, pin2;
        cout<<"Enter new pin: ";
        cin>>pin1;
        cout<<"Confirm new pin: ";
        cin>>pin2;

        if(pin1 == pin2){
            cout<<"Pin changed success!"<<endl;
            pin = pin1;
        }else cout<<"Pin dont match"<<endl;
    }

    void deposit(int bal){
        if(!is_logged_in || !log_in())
            return;

        balance += bal;
        check_balance();
    }

    void withdraw(int bal){
        if(!is_logged_in || !log_in())
            return;

        if(bal>balance){
            cout<<"Insufficient funds"<<endl;
            return;
        }

        balance -= bal;
        check_balance();
    }

    int account_options_menu(){
        cout<<endl;
        cout<<"1. Check balance"<<endl;
        cout<<"2. Deposit money"<<endl;
        cout<<"3. Withdraw money"<<endl;
        cout<<"4. Change pin"<<endl;
        cout<<"5. Log out"<<endl;

        int res;
        cout<<"Choose option: ";
        cin>>res;

        return res;
    }

    void init(){
        int amt;
        while(is_logged_in){
            int res = account_options_menu();

            switch(res){
                case 1:
                    check_balance();
                    break;
                case 2:
                    cout<<"Enter amount: ";
                    cin>>amt;
                    deposit(amt);
                    break;
                case 3:
                    cout<<"Enter amount: ";
                    cin>>amt;
                    withdraw(amt);
                    break;
                case 4:
                    change_pin();
                    break;
                case 5: 
                    cout<<"Thank you for banking with us"<<endl;
                    is_logged_in = false;
                    break;
            }
        }
    }
};

class BankOfKoala{
    unordered_map<string,Account> registry;  
    bool is_continue;

    public:
    BankOfKoala(){
        is_continue = true;
    }

    void welcome_msg(){
        cout<<"============================"<<endl;
        cout<<"Welcome to the Bank Of Koala"<<endl;
        cout<<"============================"<<endl;
    }

    int welcome_options_menu(){
        cout<<"1. Create account"<<endl;
        cout<<"2. Delete account"<<endl;
        cout<<"3. Login to your acc"<<endl;
        // cout<<"4. Transfer money"<<endl;
        cout<<"4. Exit bank"<<endl<<endl;

        int res;
        cout<<"Choose option: ";
        cin>>res;

        return res;
    }

    void create_account(){
        string uacc_no;
        int upin;

        cout<<"Enter new acc number: ";
        cin>>uacc_no;
        cout<<"Enter a pin: ";
        cin>>upin;

        Account user(uacc_no,upin);
        registry[uacc_no] = user;
    }

    void delete_acc(){
        string uacc_no;
        int upin;

        cout<<"Enter new acc number: ";
        cin>>uacc_no;

        if(registry.find(uacc_no) == registry.end()){
            cout<<"Account does not exists"<<endl;
            return;
        }

        if(registry[uacc_no].log_in()){
            registry.erase(uacc_no);
            cout<<"Acc sucessfully deleted"<<endl;
            return;
        }

        cout<<"Incorrect acc details"<<endl;
    }

    void log_in_to_acc(){
        string uacc_no;
        int upin;

        cout<<"Enter new acc number: ";
        cin>>uacc_no;

        if(registry.find(uacc_no) == registry.end()){
            cout<<"Account does not exists"<<endl;
            return;
        }

        if(registry[uacc_no].log_in()){
            registry[uacc_no].init();
        }
    }

    void init(){
        while(is_continue){
            welcome_msg();
            int res = welcome_options_menu();

            switch(res){
                case 1:
                    create_account();
                    break;
                case 2:
                    delete_acc();
                    break;
                case 3:
                    log_in_to_acc();
                    break;
                case 4: 
                    cout<<"Thank you for banking with us"<<endl;
                    is_continue = false;
                    break;
            }
        }
    }
};

int main(){
    // Create account - done
    // Delete account - done
    // Login to your account - done
    // Check balance - done
    // Change pin - done
    // Deposit / Withdraw money - done
    // IMPS / RTGS

    BankOfKoala bank;
    bank.init();

    return 0;
}