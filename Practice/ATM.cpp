#include<iostream>
using namespace std ;
int main(){

    double balance = 100000 ;
    int choice ;
    double amount ; 
      
    do {
        cout << "\n--- Banking Menu ---" << endl;
 cout << " 1. Check Balance  \n";
 cout << " 2. Deposit  \n";
 cout << " 3. Withdraw  \n";
 cout << " 4. Exit  \n";

 cout << " Enter your choice : \n ";
 cin >> choice ;

 if( choice == 1 ){
    cout << "Total Balance : " << balance << " TK" << endl;
 }
 else if( choice == 2){
     cout << "Enter amount : " << amount << endl;
     cin>> amount ;
     if (amount > 0 ){
        balance += amount ;
        cout << " Deposit Succesfull ! "<< endl ;
        cout << "New Balance :  " << balance <<" TK" << endl;
     }
 }
else if ( choice == 3){
    cout << "Enter Withdrawal Amount :  " << amount << endl ;
    cin>> amount ;
    if ( amount > 0 && amount <= balance){ 
    balance -= amount;
    cout << " Withdrawal Succesfull \n " ;
cout << " New Balance : " << balance << " 4TK" << endl;
}
    else {
        cout << "Insufficiant Balance !!! \n"; 
    }
}
else if ( choice == 4) {
    cout << "\nExiting Program..." << endl;
        }
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    } 
    while( choice != 4); 
cout << "Exit Successfully ! \n " << endl ;
    
    return 0;
}