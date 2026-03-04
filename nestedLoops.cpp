// Loop inside loop

#include<iostream>
using namespace std;

int main() {

    // patterns 
    /* * * * * * 
       * * * * *
       * * * * *
       * * * * * 
       * * * * *
    */

    for(int i = 1; i <= 5; i++){
        cout << "* * * * *" << endl;
    }

    cout << endl;

    // To print x number of stars
    int x = 10;
    for(int i = 1; i <= x; i++){
        cout << "*" << " ";
    }
    cout << endl;

    // print m number of stars per line

    for(int i = 1; i <= 5; i++){ // kitni lines print hongi
        int m = 5;                     //
        for(int i = 1; i <= m; i++){   // ik line mein kya kaam hoga
            cout << "*" << " ";        //
        }                              //
        cout << endl;
    }


    // print m number of stars in n number of lines

    int n = 10;
    for(int i = 1; i <= n; i++){
        int m = 10;
        for(int j = 1; j <= m; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    

    return 0;
}
