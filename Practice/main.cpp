#include <iostream>
using namespace std;

int main() {
    int n = 4, i, j;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        { 
            cout << "*"; 
        }
        for (j = 2 * (n - i - 1); j > 0; j--) {
            cout << " ";
        }
        for (j = 1; j <= i + 1; j++) {
            cout << "*";
        }
          
        cout << endl;
    }
 for (i =  n -1 ; i >= 0; i--){
    for (j = i +1; j > 0 ;j-- ){
        cout << "*";
    } 
    for( j =1 ; j <= 2*(n-i-1); j++){
        cout << " ";
    }
    for( j = i+1 ; j>0 ;j--){
        cout << "*" ;
    }
    cout << endl ;
 } 
    return 0;
}