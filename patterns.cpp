#include<iostream>
using namespace std;

int main() {

    // Square pattern ---------------------------------------------------------------------------------------------------------
    
    int n = 5;
    for(int i = 1; i <= n; i++){ //Outer loop
        for(int j = 1; j <= n; j++){ //Inner loop
            cout << j << " ";
        }
        cout << endl;
    }
    

    // Square pattern in *
    
    int n = 3;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    

    // Square pattern starts with 0
    
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    

    // Square pattern in char
    
    int n = 26;
    for(int i = 0; i < n; i++){
        char ch = 'A'; // har inner loop ke baad reset hoga
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch = ch + 1; // 65 + 1 = 66 -> B
        }
        cout << endl;
    }
    

    // Square pattern2.0 ------------------------------------------------------------------------------------------------
    /* 1 2 3
       4 5 6
       7 8 9 
    */

    int n = 4;
    int num = 1; // reset nahi hoga
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
    // Char version
    
    int n = 3;
    char ch = 'A';

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    
    cout << "Ch value after the pattern: " << ch << endl;

    // Triangle pattern ---------------------------------------------------------------------------------------------------
    /* *
       * *
       * * *
       * * * *
    */
    
    int n = 10;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << "*"  << " ";
        }
        cout << endl;
    } 

    // Triangle Pattern with numbers of same row
    
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << i + 1 << " ";
        }
        cout << endl;
    } 

    //char version

    int n = 4;

    for(int i = 0; i <= n; i++){
        char ch = 'A'+ i- 1;
        for(int j = 0; j < i; j++){
            cout << ch << " ";
        }
        cout << endl;
    } 

    /*
        1
        1 2
        1 2 3
        1 2 3 4
    */

    int n = 4;
     for(int i = 0; i < n; i++){
        for(int j = 1; j <= i + 1; j++){
            cout << j << " ";
        }
        cout << endl;
     }
    

    // reverse triangle ---------------------------------------------------------------------------------------------------

    /*
        1
        2 1
        3 2 1
        4 3 2 1*/

    // backward loop

    int n = 5;

    for(int i = n; i > 0; i--){
        cout << i << " ";
    }

    
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    
    // char version

    int n = 4;

    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }

    // Floyd's Triangle pattern -------------------------------------------------------------------------------------------

    /*  1
        2 3
        4 5 6
        7 8 9 10
    */
    int n= 4;
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // char version

    int n = 4;
    char ch = 'A';

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // Inverted Triangle pattern -------------------------------------------------------------------------------------

    /*  1 1 1 1
          2 2 2
            3 3
              4
    */
    int n = 4;
    
    for(int i = 0; i < n; i++){
        //spaces
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        //nums
        for(int j = 0; j < n - i; j++){
            cout << i + 1;
        }
        cout << endl;
    }

    // Pyramid pattern -----------------------------------------------------------------------------------------------

    /*     1    
         1 2 1
       1 2 3 2 1
     1 2 3 4 3 2 1
    */
    int n = 4;
    for(int i = 0; i < n; i++){
        // spaces
        for(int s = 0; s < n - i - 1; s++){
            cout << " ";
        }
        
        // nums1
        for(int j = 1; j <= i + 1; j++){
            cout << j;
        }

        //nums2
        for(int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;

    }

    // Hollow diamond pattern ------------------------------------------------------------------------------------------------

    /*          *
              *   * 
            *       *
          *           *
            *       *
              *   *
                * 
    */


    
    return 0;
}