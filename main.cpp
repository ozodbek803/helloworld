#include <iostream>
#include <iomanip>
using namespace std;
// int main() {
//     string name ;
//     int age;
//
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Your name is  " << name << endl;
//
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "Hello "  << name << " You are "  << age <<  " old" <<endl;
    //return 0;
//}

/*int main() {
    cout << "Table of numbers" << endl;
    for (int i = 1 ; i <= 5 ; i++) {cout << i<<" " ;}
        return 0;

    }*/
    /*int main() {
        int a,b;

        cout <<"Enter two numbers :"<<endl;
        cin>>a>>b;
        int swap = a;
        a=b ;
        b = swap ;
        cout<<"After swapping :"<<endl;
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
        return 0;


    }*/
    // PROBLEM 4
    /*int main() {
        int n;
        cout << "Enter the number :" ;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            std:: cout << setw(5)<<i<<setw(5)<< i*i<<endl;
        }


    }*/
     int main() {
         string a;
         cout <<"Enter the text:";
         cin >> a;
         getline(cin, a );
         int padding = (50-a.length())/2;
         cout << setw(padding + a.length()) <<a;
         return 0;
     }

