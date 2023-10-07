// this is used for  managing the payroll

#include <iostream>
using namespace std;
int Count=0;
class Payroll{
    private:
        int emp_id[50],sal[50],new_sal[50];
        string name[50];
    public:
        void Insert();
        void salary();
        void PaySlip();

};

void Payroll::Insert(){
    cout<<"Enter employee ID:";
    cin>>emp_id[Count];
    cout<<"Enter employee name:";
    cin>>name[Count];
    cout<<"Enter employee fixed salary:";
    cin>>sal[Count];
    // new_sal[count]=sal[count];
    Count++;
    cout<<"EMPLOYEE ADDED SUCCESSFULL! "<<endl<<endl;
}

void Payroll::salary(){
    int factor ,hours;
    if(Count==0){
        cout<<"Zero user"<<endl;
    }
    for(int i=0;i<Count;i++){
        cout<<"::Employee ID  "<<emp_id[i]<<"::"<<endl;
        cout<<"Enter extra working hours :";
        cin>>hours;
        cout<<"Enter salary per hours: ";
        cin>>factor;

        sal[i]=sal[i]+factor*hours;

    }
    cout<<"SALARY CALCULATION COMPLETED! "<<endl;
}

void Payroll::PaySlip(){
    cout<<"*************** All Employee Payslip *************** "<<endl;
    for(int i=0;i<Count;i++){
        cout<<"Employee ID:  "<<emp_id[i]<<endl;
        cout<<"NAME: "<<name[i]<<endl;
        cout<<"Salary:"<<sal[i]<<endl;
        cout<<"*************************"<<endl<<endl;

    }
}
int main ()
{
    Payroll X1;
    int n;
    cout<<"************************** PAYROLL MANAGEMENT SYSTEM **************************"<<endl;
    do{
        cout<<"::::: MENU :::::"<<endl;
        cout<<"1. Insert Employee"<<endl;
        cout<<"2. Calculate Salary"<<endl;
        cout<<"3. Generate Payslip"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>n;
        switch (n){
            case 0:
                break;
            case 1:
                X1.Insert();
                break;
            case 2:
                X1.salary();
                break;
            case 3:
                X1.PaySlip();
                break;
            default:
                cout<<"SORRY INVALID CHOICE... TRY AGAIN... "<<endl<<endl;
        }

    }while(n!=0);
    cout<<"*********************PROGRAM EXIT*********************"<<endl;
    return 0;
}