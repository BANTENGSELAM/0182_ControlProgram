#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
//library

//program utama
int main() {
    int x;
    
    srand(time(0));
    x = rand() % 10;
    
    if (x == 5) {
        x = x + 1;
        cout << "Nilai x sudah dikoreksi menjadi : " << x << endl;
    }
    
    cout << "Bilangan yang diberikan : " << x << endl;

    return 0;
}

