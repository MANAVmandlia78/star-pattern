#include <iostream>
using namespace std;

void print1(int n){
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<n ; j++){
        cout << "*";
    }
    cout << endl;
}
}

void print2(int n){
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<i+1 ; j++){
        cout << "*";
    }
    cout << endl;
}
}

void print10(int n){
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<i+1 ; j++){
        cout << "*";
    }
    cout << endl;
}
for(int i = n ; i>0 ; i--){
    for(int j = 0 ; j<i-1 ; j++){
        cout << "*";
    }
    cout << endl;
}
}

void print3(int n){
for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j<i+1 ; j++){
        cout << j ;
    }
    cout << endl;
}
}

void print4(int n){
for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j<i+1 ; j++){
        cout << i ;
    }
    cout << endl;
}
}

void print5(int n){
for(int i = n ; i>0 ; i--){
    for(int j = 0 ; j<i ; j++){
        cout << "*";
    }
    cout << endl;
}
}

void print6(int n){
for(int i = n ; i>0 ; i--){
    for(int j = 1 ; j<=i ; j++){
        cout << j;
    }
    cout << endl;
}
}

void print7(int n){
for(int i = 0 ; i<n ; i++){
    for(int j=0;j<n-i-1;j++){
    cout << " ";
    }
    for(int k=0; k<2*i+1 ;k++){
    cout << "*";
    }
    cout << endl;
}
}

void print8(int n){
for(int i = 0 ; i<n ; i++){
    for(int j=0;j<i;j++){
    cout << " ";
    }
    for(int k=0; k < 2*(n-i) - 1 ;k++){
    cout << "*";
    }
    cout << endl;
}
}

void print9(int n){
    for(int i = 0 ; i<n ; i++){
    for(int j=0;j<n-i-1;j++){
    cout << " ";
    }
    for(int k=0; k<2*i+1 ;k++){
    cout << "*";
    }
    cout << endl;
}
for(int i = 0 ; i<n ; i++){
    for(int j=0;j<i;j++){
    cout << " ";
    }
    for(int k=0; k < 2*(n-i) - 1 ;k++){
    cout << "*";
    }
    cout << endl;
}
}

void print11(int n){
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<i+1 ; j++){
       if(i%2==0){
           if(j%2==0){
           cout << "1";
        } else{
           cout << "0";
       }
        } else{
           if(j%2==0){
           cout << "0";
        } else{
           cout << "1";
       }
       }
    }
    cout << endl;
}
}

void print12(int n){
for(int i = 1 ; i<=n ; i++){
    for(int j=1;j <=i;j++){
    cout << j;
    }
    for(int k=0; k <= 2*(n-i) ;k++){
    cout << " ";
    }
    for(int j=i;j >=1;j--){
    cout << j;
    }
    cout << endl;
}
}

void print13(int n){
    int p = 1;
for(int i = 1 ; i<=n ; i++){
    for(int j=1;j <=i;j++){
    cout << p++;
    }
    for(int k=0; k <= 2*(n-i) ;k++){
    cout << " ";
    }
    cout << endl;
}
}

void print14(int n){
    int asc = 65;
for(int i = 1 ; i<=n ; i++){
    for(int j=1;j <=i;j++){
    cout << (char)asc++;
    }
    asc = 65;
    cout << endl;
}
}

void print15(int n){
    int asc = 65;
for(int i = n ; i>=1 ; i--){
    for(int j=1;j <=i;j++){
    cout << (char)asc++;
    }
    asc = 65;
    cout << endl;
}
}

void print16(int n){
    int asc = 65;
for(int i = 1 ; i<=n ; i++){
    for(int j=1;j <=i;j++){
    cout << (char)asc;
    }
    asc = asc+1;
    cout << endl;
}
}

void print17(int n){
    int asc = 65;
for(int i = 0 ; i<n ; i++){
    for(int j=0;j<n-i-1;j++){
    cout << " ";
    }
    asc = 65;
    for(int j=0;j <=i;j++){
    cout << (char)asc++;
    }

     asc -= 2; // go one back from the last printed character
        for(int j = 0; j < i; j++){
            cout << (char)asc--;
        }
    
     for(int j=0;j<n-i-1;j++){
    cout << " ";
    }
    cout << endl;
}
}

// void print18(int n){
//     int asc=69;
//     for(int i = 0;i<=n;i++){
//         for(int j = 0 ; j<i ; j++){
//             cout<< (char)++asc;
//         }
//         asc=asc-1;
//         cout << endl;
//     }
// }

void print18(int n){
    for(int i = 0 ; i<n ; i++){
    int asc=69-i;
    for(int j = 0 ; j<=i ; j++){
        cout<< (char)(asc+j);
    }
    cout << endl;
}
}

void print19(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<n-i ;j++){
        cout<< " *";
        }
       for(int k=0 ; k<i ;k++){
        cout<< "  ";
        }
         for(int k=0 ; k<i ;k++){
        cout<< "  ";
        }
        for(int j=0 ; j<n-i ;j++){
        cout<< " *";
        }
       cout<< endl;
    }

      for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ;j++){
        cout<< " *";
        }
        for(int k=0 ; k<n-i-1 ;k++){
        cout<< "  ";
        }
         for(int k=0 ; k<n-i-1 ;k++){
        cout<< "  ";
        }
        for(int j=0 ; j<i+1 ;j++){
        cout<< " *";
        }
      
       cout<< endl;
    } 
}

void print20(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ;j++){
        cout<< " *";
        }
        for(int k=0 ; k<n-i-1 ;k++){
        cout<< "  ";
        }
         for(int k=0 ; k<n-i-1 ;k++){
        cout<< "  ";
        }
        for(int j=0 ; j<i+1 ;j++){
        cout<< " *";
        }
      
       cout<< endl;
    } 
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<n-i ;j++){
        cout<< " *";
        }
       for(int k=0 ; k<i ;k++){
        cout<< "  ";
        }
         for(int k=0 ; k<i ;k++){
        cout<< "  ";
        }
        for(int j=0 ; j<n-i ;j++){
        cout<< " *";
        }
       cout<< endl;
    }
}




int main() {
    int n;
    cin >> n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    // print9(n);
    // print10(n);
    // print12(n);
    // print13(n);
    // print14(n);
    // print15(n);
    // print16(n);
    // print16(n);
    // print17(n);
    // print18(n);
    // print19(n);
    print20(n);
    return 0;
}