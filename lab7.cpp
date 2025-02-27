//
// Created by Ozodbek Yarashev on 27/02/25.
#include <iostream>
#include <string>
#include <cctype>
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
//double calculateFee(int hours) {
//    if (hours <= 2) {
//        return 0;
//    }
//    else if (hours <= 5) {
//        return (hours-2)*2;
//    }
//    else {
//        return (3*2)+(hours-5)*5 ;
//    }
//}
//int main() {
//    int hours;
//    char choice;
//    while (true) {
//        cout << "Enter the hours: ";
//        cin >> hours;
//        if (hours <= 0) {
//            cout<<"Invalid input"<<endl;
//            continue;
//        }
//        double fee=calculateFee(hours);
//        cout<<"Parking fee: $"<<fee<<endl;
//        cout<<"If you want to continue for another user, put button Y"<<endl;
//        cin>>choice;
//        if (choice == 'y') {
//            continue;
//        }
//    }
//}
// problem 3
// double balance = 500.0;
// void deposit(double amount) {
//     balance += amount;
//     cout << "$" << amount << " deposited successfully!" << endl;
// }
// void withdraw(double amount) {
//     if (amount > balance) {
//         cout << "Insufficient funds! Withdrawal denied." << endl;
//     } else {
//         balance -= amount;
//         cout << "$" << amount << " withdrawn successfully!" << endl;
//     }
// }
// void checkBalance() {
//     cout << "Your current balance is: $" << balance << endl;
// }
// int main() {
//     int choice;
//     double amount;
//
//     do {
//         cout << "\nSimple Banking System\n";
//         cout << "1. Deposit\n";
//         cout << "2. Withdraw\n";
//         cout << "3. Check Balance\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Enter deposit amount: $";
//             cin >> amount;
//             deposit(amount);
//             break;
//             case 2:
//                 cout << "Enter withdrawal amount: $";
//             cin >> amount;
//             withdraw(amount);
//             break;
//             case 3:
//                 checkBalance();
//             break;
//             case 4:
//                 cout << "Exiting... Thank you for using the banking system!" << endl;
//             break;
//             default:
//                 cout << "Invalid choice! Please try again." << endl;
//             break;
//         }
//     } while (choice != 4);
//
//     return 0;
// }
//problem 4

// double calculateTotalPrice(int movieChoice, int numTickets) {
//     double pricePerTicket;
//     switch (movieChoice) {
//         case 1:
//             pricePerTicket = 8.0;
//             break;
//         case 2:
//             pricePerTicket = 10.0;
//             break;
//         case 3:
//             pricePerTicket = 12.0;
//             break;
//         default:
//             cout << "Invalid movie choice!" << endl;
//             return 0.0;
//     }
//
//     return pricePerTicket * numTickets;
// }
//
// int main() {
//     int movieChoice, numTickets;
//     double totalCost;
//     char proceed;
//
//     do {
//         cout << "\nWelcome to the Movie Ticket Booking System\n";
//         cout << "1. Movie A - $8\n";
//         cout << "2. Movie B - $10\n";
//         cout << "3. Movie C - $12\n";
//         cout << "Please select a movie (1/2/3): ";
//         cin >> movieChoice;
//         if (movieChoice < 1 || movieChoice > 3) {
//             cout << "Invalid choice! Please select a valid movie." << endl;
//             continue;
//         }
//         cout << "Enter the number of tickets: ";
//         cin >> numTickets;
//         if (numTickets <= 0) {
//             cout << "Please enter a valid number of tickets." << endl;
//             continue;
//         }
//         totalCost = calculateTotalPrice(movieChoice, numTickets);
//         if (totalCost > 0.0) {
//             cout << "Total cost for " << numTickets << " ticket(s) for Movie " << (movieChoice == 1 ? "A" : movieChoice == 2 ? "B" : "C")
//                  << ": $" << totalCost << endl;
//         }
//         cout << "\nDo you want to make another booking? (Y/N): ";
//         cin >> proceed;
//
//     } while (proceed == 'Y' || proceed == 'y');
//
//     cout << "Thank you for using the Movie Ticket Booking System!" << endl;
//
//     return 0;
// }

// problem 5
// double calculateTotalFare(int trainChoice, int numTickets) {
//     double farePerTicket;
//     switch (trainChoice) {
//         case 1:
//             farePerTicket = 15.0;
//             break;
//         case 2:
//             farePerTicket = 20.0;
//             break;
//         case 3:
//             farePerTicket = 25.0;
//             break;
//         default:
//             cout << "Invalid train choice!" << endl;
//             return 0.0;
//     }
//
//     // Calculate total fare
//     return farePerTicket * numTickets;
// }
//
// int main() {
//     string startCity, destinationCity;
//     int trainChoice, numTickets;
//     double totalFare;
//     char proceed;
//
//     do {
//         cout << "\nEnter the starting city: ";
//         cin >> startCity;
//         cout << "Enter the destination city: ";
//         cin >> destinationCity;
//
//         cout << "\nAvailable Train Options:\n";
//         cout << "1. Train X - $15\n";
//         cout << "2. Train Y - $20\n";
//         cout << "3. Train Z - $25\n";
//         cout << "Select a train (1/2/3): ";
//         cin >> trainChoice;
//
//         if (trainChoice < 1 || trainChoice > 3) {
//             cout << "Invalid train selection! Please choose a valid train." << endl;
//             continue;
//         }
//         cout << "Enter the number of tickets: ";
//         cin >> numTickets;
//         if (numTickets <= 0) {
//             cout << "Please enter a valid number of tickets!" << endl;
//             continue;
//         }
//         totalFare = calculateTotalFare(trainChoice, numTickets);
//         if (totalFare > 0.0) {
//             cout << "\nBooking Summary:\n";
//             cout << "Starting City: " << startCity << endl;
//             cout << "Destination City: " << destinationCity << endl;
//             cout << "Train Selected: ";
//             switch (trainChoice) {
//                 case 1: cout << "Train X"; break;
//                 case 2: cout << "Train Y"; break;
//                 case 3: cout << "Train Z"; break;
//             }
//             cout << "\nTotal fare for " << numTickets << " ticket(s): $" << totalFare << endl;
//         }
//
//         cout << "\nDo you want to make another booking? (Y/N): ";
//         cin >> proceed;
//
//     } while (proceed == 'Y' || proceed == 'y');
//
//     cout << "\nThank you for using the Train Ticket Reservation System!" << endl;
//
//     return 0;
// }

//problem 6

// bool isStrongPassword(const string& password) {
//
//     bool hasUpper = false;
//     bool hasLower = false;
//     bool hasDigit = false;
//     bool hasSpecial = false;
//     for (char ch : password) {
//         if (isupper(ch)) {
//             hasUpper = true;
//         }
//         else if (islower(ch)) {
//             hasLower = true;
//         }
//         else if (isdigit(ch)) {
//             hasDigit = true;
//         }
//         else if (ispunct(ch)) {
//             hasSpecial = true;
//         }
//     }
//     if (password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
//         return true;
//     }
//     return false;
// }
//
// int main() {
//     string password;
//     cout << "Enter your password: ";
//     cin >> password;
//     if (isStrongPassword(password)) {
//         cout << "Your password is strong." << endl;
//     } else {
//         cout << "Your password is weak. It must meet the following criteria:" << endl;
//         cout << "- Minimum length of 8 characters" << endl;
//         cout << "- Contains at least one uppercase letter" << endl;
//         cout << "- Contains at least one lowercase letter" << endl;
//         cout << "- Contains at least one digit" << endl;
//         cout << "- Contains at least one special symbol (e.g., !, @, #, $, %)" << endl;
//     }
//
//     return 0;
// }

//problem 7

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) {
        return false;
    }
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    if (day < 1 || day > daysInMonth[month - 1]) {
        return false;
    }

    return true;
}
void nextDate(int &day, int &month, int &year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    day++;
    if (day > daysInMonth[month - 1]) {
        day = 1;
        month++;
    }
    if (month > 12) {
        month = 1;
        year++;
    }
}

int main() {
    int day, month, year;
    char choice;

    do {
        cout << "Enter the date (day month year): ";
        cin >> day >> month >> year;
        if (isValidDate(day, month, year)) {
            cout << "The entered date is valid." << endl;
            nextDate(day, month, year);
            cout << "The next date is: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "The entered date is invalid." << endl;
        }

        cout << "Do you want to enter another date? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
    return 0;
}












