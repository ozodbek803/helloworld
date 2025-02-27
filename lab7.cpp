//
// Created by Ozodbek Yarashev on 27/02/25.
#include <iostream>
using namespace std;

//problem1
// void menu() {
//     cout << "1.Pizza -10$"<<endl;
//     cout << "2.Burger -8$"<<endl;
//     cout << "3.Salad -5$"<<endl;
//     cout << "4.Exit"<<endl;
// }
//
//
// double calculateTotal( int quantity, double price) {
//     return price*quantity;
// }
// int main() {
//     int choice, quantity;
//     double totalBill=0.0, finalPrice=0.0;
//     do {
//         menu();
//         cout << "Enter your choice: ";
//         cin>>choice;
//
//         if (choice == 4) {
//             break;
//         }
//         cout<<"Enter quantity: ";
//         cin>>quantity;
//
//         double price=0.0;
//         switch (choice) {
//             case 1:
//                 price = 10.00;
//                 break;
//             case 2:
//                 price = 8.00;
//                 break;
//             case 3:
//                 price = 5.00;
//                 break;
//             default:
//                 cout << "Invalid Choice";
//             continue;
//
//         }
//         totalBill=calculateTotal( quantity, price);
//         finalPrice+=totalBill;
//         cout << "Total Bill: " << totalBill << endl;
//         cout << "Final Price: " << finalPrice << endl;
//
//     }
//     while (true);
//     cout << "The Final Price: " << finalPrice << endl;
//     }
//
//     problem 2
double calculateFee(int hours) {
    if (hours <= 2) {
        return 0;
    }
    else if (hours <= 5) {
        return (hours-2)*2;
    }
    else {
        return (3*2)+(hours-5)*5 ;
    }
}
int main() {
    int hours;
    char choice;
    while (true) {
        cout << "Enter the hours: ";
        cin >> hours;
        if (hours <= 0) {
            cout<<"Invalid input"<<endl;
            continue;
        }
        double fee=calculateFee(hours);
        cout<<"Parking fee: $"<<fee<<endl;
        cout<<"If you want to continue for another user, put button Y"<<endl;
        cin>>choice;
        if (choice == 'y') {
            continue;
        }
    }
}


















