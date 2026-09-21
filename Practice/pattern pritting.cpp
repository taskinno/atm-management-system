#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0 ; i< n-1 ; i++){

            for( int j = 1 ; j< i ; j++){
                cout << "*";

            
        } 
        cout << endl;
    } 
    return 0;
}