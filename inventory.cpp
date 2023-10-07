
#include <iostream>
using namespace std;
int Count=0;
int linear(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
class Inventory{
    int pro_id[50],pro_quan[50];
    string pro_name[50];
    public:
        void add();
        void update();
        void Display();
        void Search();
};
void Inventory::add(){
    cout<<"Enter product ID: ";
    cin>>pro_id[Count];
    cout<<"Enter product name:";
    cin>>pro_name[Count];
    cout<<"Enter product quantity:";
    cin>>pro_quan[Count];
    Count++;
    cout<<"Product added successfully! "<<endl;
}
void Inventory::update(){
    cout<<"Enter product ID to update quantity:";
    int temp;
    cin>>temp;
    int pos=linear(pro_id,Count,temp);
    if(pos==-1){
        cout<<"Invalid Id!"<<endl;
    }
    else{
        cout<<"Enter updated quantity:"<<endl;
        int x;
        cin>>x;
        pro_quan[pos]=pro_quan[pos]+x;
        cout<<"Quantity updated successfully!" <<endl;
    }
}
void Inventory::Display(){
    cout<<endl<<"--- Inventory ---"<<endl;
    for(int i=0;i<Count;i++){
        cout<<  "Product ID: "<<pro_id[i]<<endl;
        cout<<"Product Name: "<<pro_name[i]<<endl;
        cout<<"Quantity: "<<pro_quan[i]<<endl;
        cout<<"----------------------- "<<endl;
    
}
}
void Inventory::Search(){
    cout<<"Enter product ID to search: ";
    int temp;
    cin>>temp;
    int pos=linear(pro_id,Count,temp);
    if(pos==-1){
        cout<<"Invalid Id!\n";
    }
    else{
        cout<<"Product ID: "<<pro_id[pos]<<endl;
        cout<<"Product Name: "<<pro_name[pos]<<endl;
        cout<<"Quantity: "<<pro_quan[pos]<<endl;
        cout<<"----------------------- "<<endl;
    
    }
}
int main ()
{
    Inventory X1;
   
    int n;
    do{
        cout<<"<<<< INVENTORY MANAGEMENT SYSTEM >>>> "<<endl;
        cout<< "1. Add Product"<<endl;
        cout<<"2. Update Quantity"<<endl;
        cout<<"3. Display Inventory"<<endl;
        cout<<"4. Search Product"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>n;
        switch (n)
        {
        case 1:
            X1.add();
            break;
        case 2:
            X1.update();
            break;
        case 3:
            X1.Display();
            break;
        case 4:
            X1.Search();
            break;
        case 0:
            break;
        default:
            cout<<"SORRY INVALID CHOICE... TRY AGAIN..."<<endl;

        }
        }while(n!=0);
    return 0;
}