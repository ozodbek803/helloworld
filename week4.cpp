#include  <iostream>
#include <cmath>
using namespace std;
int main() {
    // problem 1
    /*int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a>=0) {
        cout<<a<<" is a positive number";
    }
    else {
        cout<<a<<" is a negative number";
    }*/

    //problem 2
    /*int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n%2==0) {
        cout << "The number is even" << endl;
    }
    else {
        cout << "The number is odd" << endl;
    }*/

    //problem3
    /*int a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    if (a>b) {
        cout <<a<<" is the largest number";

    }
    else {
        cout <<b<<" is the largest number";
    }*/

    //problem 4
    /*int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if (a>b && a>c) {
        cout <<a<<" is the largest number";

    }
    else if (b>a && b>c) {
        cout <<b<<" is the largest number";
    }
    else if (c>a && c>b) {
        cout <<c<<" is the largest number";
    }*/

    //problem 5
    /*int year;
    cout<<"Please enter a year: ";
    cin>>year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout<<year<<" is a leap year."<<endl;
    }
    else {
        cout<<year<<" is not a leap year."<<endl;
    }*/

    //problem 6
    /*int speed;
    cout << "Enter the speed: ";
    cin >> speed;
    if (speed<=20) {
        cout << "too slow";
    }
    else if (speed>=80){
        cout << "too fast";
    }
    else {
        cout << "just right";
    }*/
    // problem 7
    /*int mark;
    cout<<"Enter your mark: ";
    cin>>mark;
    if (mark>=50 && mark<=100) {
        cout<<"PASS";
    }
    else if (mark<50 && mark>=0) {
        cout<<"FAIL";
    }
    else {
        cout <<"Your mark shouldn't exceed from 100";
    }*/

    //problem 8
    /*int a;
    cout <<"Enter the number:";
    cin>>a;
    if (a>0) {
        cout <<"Positive";
    }
    else if (a<0) {
        cout <<"Negative";
    }
    else {
        cout <<"Zero";
    }*/

    //problem 9
    /*char light;
    cout << "Enter the traffic light(g/y/r):";
    cin>>light;
    switch (light) {
        case 'y':cout <<"Get ready";break;
        case 'r':cout <<"Stop";break;
        case 'g':cout <<"GO";break;
        default :cout <<"Invalid input";
    }*/

    //problem 10
    /*int grade;
    cout << "Enter the grade:";
    cin>>grade;
    if (grade >= 90 && grade <= 100) {
        cout <<"A";
    }
    else if (grade >= 80 && grade <= 89) {
        cout <<"B";
    }
    else if (grade >= 70 && grade <= 79) {
        cout <<"C";
    }
    else if (grade >= 60 && grade <= 69) {
        cout <<"D";
    }
    else if (grade <= 50 && grade >= 0) {
        cout <<"F";

    }
    else {
        cout <<"Invalid input";
    }*/

    //problem 11
    /*int num1, num2;
    cout<<"Enter numbers: ";
    cin>>num1>>num2;
    if (num1%num2==0) {
        cout <<num1<< " is divisible by " <<num2 <<endl;
    }
    else {
        cout <<num1<< " is not divisible by " <<num2 <<endl;
    }*/

    //problem 12
    /*int angle1,angle2, angle3;
    cout << "Enter the angles of triangles in degrees: ";
    cin >> angle1 >> angle2 >> angle3;
    if (angle1+angle2+angle3 ==180) {
        cout <<"This triangle is valid";
    }
    else {
        cout <<"This triangle is not valid";
    }*/

    //problem 13
        /*char ch;
        cout << "Enter a character: ";
        cin >> ch;
        if (ch >= 'A' && ch <= 'Z') {
            cout << "The entered character is an uppercase letter." << endl;
        }
        else if (ch >= 'a' && ch <= 'z') {
            cout << "The entered character is a lowercase letter." << endl;
        }
        else {
            cout << "The entered character is not an alphabet." << endl;
        }*/

    //problem 14
        /*double weight1, price1, weight2, price2;
        cout << "Enter weight and price for package 1: ";
        cin >> weight1 >> price1;
        cout << "Enter weight and price for package 2: ";
        cin >> weight2 >> price2;
        double cost1 = price1 / weight1;
        double cost2 = price2 / weight2;
        if (cost1 < cost2) {
            cout << "Package 1 has a better price" << endl;
        } else if (cost1 > cost2) {
            cout << "Package 2 has a better price" << endl;
        } else {
            cout << "Two packages have the same price." << endl;
        }*/
    //problem 15

        /*int number;
        cout << "Enter a three-digit integer: ";
        cin >> number;
        int firstDigit = number / 100;
        int lastDigit = number % 10;
        if (firstDigit == lastDigit) {
            cout << number << " is a palindrome" << endl;
        } else {
            cout << number << " is not a palindrome" << endl;
        }*/
    //problem 16
        double x, y;
        cout << "Enter a point (x, y): ";
        cin >> x >> y;
        double distance = sqrt(x * x + y * y);
        if (distance <= 10) {
            cout << "Point (" << x << ", " << y << ") is inside the circle." << endl;
        } else {
            cout << "Point (" << x << ", " << y << ") is outside the circle." << endl;
        }

    //problem 17
    /*double GPA;

    cout << "Enter the GPA: ";
    cin >> GPA;
    if (GPA<=4.5 && GPA>=4.0) {
        cout << "You got 80% scholarship";
    }
    else if (GPA<=4.0 && GPA>=3.5) {
      cout << "You got 60% scholarship";
    }
    else if (GPA<3.5 && GPA>=3.0) {
      cout<< "You got 50% scholarship";
    }
    else if (GPA<3.0 && GPA>=0.0) {
      cout << "No scholarship";

    }
    else {
        cout<<"Invalid input";
    }*/



        return 0;
    }