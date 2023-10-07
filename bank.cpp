// This is project for bank managment .
// Worst cases: 0 user and if the user is 100
// you can change the maximum user on the line '5' if you want  
#include <iostream>
#define user 100
using namespace std;
int Count = 0;
int linear(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

class Banking
{
private:
    int cus_id[user], init_bal[user], acc_id[user];
    string name[user];

public:
    void add_customer();
    void create_account();
    void Display();
    void Deposit();
    void Withdraw();
};
void Banking::add_customer()
{
    cout << "Enter customer ID:";
    cin >> cus_id[Count];
    cout << "Enter customer name: ";
    cin >> name[Count];
    Count++;
    cout << "\nCUSTOMER CREATED SUCCESSFULLY!" << endl;
}
void Banking::create_account()
{
    cout << "Enter account ID: ";
    int temp, key;
    cin >> temp;
    cout << "Enter customer ID for the account:";
    cin >> key;
    int pos = linear(cus_id, Count, key);
    if (pos == -1)
    {
        cout << "Enter the Valid customer ID! or if not present Create a new one" << endl;
    }
    else
    {
        cout << "Enter initial balance:";
        cin >> init_bal[pos];
        acc_id[pos] = temp;
        cout << "ACCOUNT CREATED SUCCESSFULLY! " << endl;
    }
}

void Banking::Display()
{
}

void Banking::Deposit()
{
    cout << "Enter account ID for deposit:";
    int key, dep;
    cin >> key;
    int pos = linear(acc_id, Count, key);
    if (pos == -1)
    {
        cout << "Enter correct account id!" << endl;
    }
    else
    {
        cout << "Enter deposit amount: ";
        cin >> dep;
        init_bal[pos] = init_bal[pos] + dep;
        cout << "SUCCESSFULLY DEPOSITED! AVAILABLE BALANCE IS :" << init_bal[pos] << endl;
    }
}
void Banking::Withdraw()
{
    cout << "Enter account ID for withdrawal:";
    int key, with;
    cin >> key;
    int pos = linear(acc_id, Count, key);
    if (pos == -1)
    {
        cout << "Enter correct account id!" << endl;
    }
    else
    {
        cout << "Enter withdrawal amount:";
        cin >> with;
        init_bal[pos] = init_bal[pos] - with;
        cout << "WITHDRAWL SUCCESSFULLY! NEW BALANCE " << init_bal[pos] << endl;
    }
}
int main()
{
    int n;
    Banking B1;

    do
    {
        cout << "<<<<<<<< BANK MANAGEMENT SYSTEM >>>>>>>>" << endl;
        cout << "1. Add Customer" << endl;
        cout << "2. Create Account" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Display Accounts" << endl;
        cout << "0. Exit " << endl;
        cout << "\nEnter your choice: ";
        cin >> n;
        switch (n)
        {
        case 0:
            break;
        case 1:
            B1.add_customer();
            break;
        case 2:
            B1.create_account();
            break;
        case 3:
            B1.Deposit();
            break;
        case 4:
            B1.Withdraw();
            break;
        case 5:
            B1.Display();
            break;
        default:
            cout << "INVALID CHOICE PLEASE TRY AGAIN.  " << endl
                 << endl;
        }

    } while (n != 0);
    cout << "*********************PROGRAM EXIT*********************" << endl;
    return 0;
}