#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;
int main(){
  // problem 1.1
  // for (int i = 1; i <= 10; i++){
  //   cout << i<<" " ;
  // }

  //problem 1.2
  // int num;
  // cout << "Enter a number: ";
  // cin >> num;
  // for (int i=1; i<=num;i++) {
  //   cout << i<<" ";
  // }

  //problem 1.3
  // int num=10,sum;
  // sum=0;
  // for (int i=0;i<num;i++) {
  //   sum+=i;
  // }
  // cout<<sum;

  //problem 1.4
  // int num,sum;
  // cout<<"Enter a number:";
  // cin>>num;
  // sum=0;
  // for (int i=1;i<=num;i++) {
  //   sum+=i;
  // }
  // cout<<"The sum is: "<<sum<<endl;

  //problem 1.5
   // int num=10,sum;
   // sum=0;
   // for(int i=1;i<=num;i++) {
   //     sum+=i;
   // }
   //  double average=sum/num;
   //  cout<<average<<endl;

  //problem 1.6
    // double num,sum;
    // cout<<"Enter a number:";
    // cin>>num;
    // sum=0;
    // for (int i=1;i<=num;i++) {
    //     sum+=i;
    // }
    // double average=sum/num;
    // cout<<"Average:"<<average<<endl;

    //problem 2.1
    // for (int i = 1; i <= 10; i=i+2) {
    //     cout << i <<";
    // }

    //problem 2.2
    // for (int i = 2; i <= 10; i=i+2) {
    //     cout << i << " ";
    // }

    //problem 2.3
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // for (int i=1;i<=num;i=i+2) {
    //     cout <<i<<" ";
    // }

    //problem 2.4
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;
    // for (int i=2;i<=num;i=i+2) {
    //     cout<<i<<" ";
    // }

    //problem 2.5
    // for(int i=10;i<=100;i=i+10) {
    //     cout<<i<<" ";
    // }

    // problem 2.6
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;
    // for (int i = 10; i <= num; i=i+10) {
    //     cout<<i<<" ";
    // }

    //problem 3
    // for (int i=65; i<=90; i++) {
    //     cout << static_cast<char>(i) << " ";
    //     if ((i-64)%5==0) {
    //         cout << endl;
    //     }
    // }

    //problem 4
    // int num,factorial;
    // factorial=1;
    // cout<<"Enter a number: ";
    // cin>>num;
    // if(num>0) {
    //     for (int i = 1; i <= num; i++ ) {
    //         factorial *=i;
    //     }
    //     cout<<"Factorial of the given number is: "<<factorial;
    // }
    // else{
     //     cout<<"Factorial of a negative number is not defined";
     // }

   // task
    // while(true) {
    //     int num1,num2;
    //     cout<<" Enter two numbers: ";
    //     cin>>num1>>num2;
    //     int choice;
    //     cout<<"Enter your choice: ";
    //     cin>>choice;
    //     switch(choice){
    //         case 1 :
    //             cout<<"Result: "<<num1+num2<<endl;
    //         break;
    //
    //         case 2:
    //             cout<<"Result: "<<num1-num2<<endl;
    //         break;
    //         case 3:
    //             cout<<"Result: "<<num1*num2<<endl;
    //         break;
    //         case 4:
    //             if (num2==0) {
    //                 cout<<"num2 should not be zero";
    //             }
    //             else {
    //                 cout<<"Result: "<<num1/num2<<endl;
    //             }
    //         break;
    //         default:
    //             cout<<"You stupid???"<<endl;
    //         break;
    //     }
    // }

    //problem 6
      // int numClasses;
      // double totalWeightedMarks = 0;
      // double totalCredits = 0;
      // cout << "Enter the number of classes: ";
      // cin >> numClasses;
      // for (int i = 1; i <= numClasses; i++) {
      //     int credits;
      //     double marks;
      //
      //     cout << "Enter credits for subject " << i << ": ";
      //     cin >> credits;
      //     cout << "Enter total marks obtained in subject " << i << ": ";
      //     cin >> marks;
      //     totalWeightedMarks += credits * marks;
      //     totalCredits += credits;
      // }
      //
      // double GPA = totalWeightedMarks / totalCredits;
      // cout << "The GPA of the student is: " << GPA << endl;


  //problem 7
  // int rows;
  // cout<<"Enter number of rows: ";
  // cin>>rows;
    // for(int i=0;i<rows;i++) {
    //     for(int j=0;j<rows;j++) {
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    //problem 8
    // int rows;
    // cout<<"Enter number of rows : ";
    // cin>>rows;
    // for (int i=1; i<=rows; i++) {
    //     for (int j=1; j<=i; j++) {
    //         cout<<"  *";
    //     }
    //     cout<<endl;
    //
    // }

    //problem 9
    // int n;
    // bool is_prime=true;
    // cout<<"Enter the number : ";
    // cin>>n;
    // if (n==0 || n==1) {
    //     is_prime=false;
    // }
    // for (int i=2; i<=sqrt(n); i++) {
    //     if (n%i==0) {
    //         is_prime=false;
    //         break;
    //     }
    // }
    // if (is_prime)
    //     cout<<n<<" is prime"<<endl;
    // else  cout<<n<<" is not prime"<<endl;

    //problem 10
    // int n;
    // cout<<"Enter the number :";
    // cin>>n;
    // for (int i = 1; i <= n; i++) {
    //     cout<<i<<"*"<<i<<"="<<i*i<<endl;
    // }

    //problem 11
    // int numbers,total_sum=0,positive_numbers=0,negative_numbers=0,total_number=0;
    // for (int i = 0; i < INT_MAX; i++) {
    //     cout << "Enter an integer (0 to end): ";
    //     cin >> numbers;
    //
    //
    //     if (numbers== 0) {
    //         break;
    //     }
    //
    //     if (numbers>0) {
    //         positive_numbers++;
    //     }
    //     else if (numbers < 0) {
    //         negative_numbers++;
    //     }
    //     total_sum+=numbers;
    //     total_number++;
    // }
    //  if (total_number>0) {
    //     double average = (double)total_sum/total_number;
    //     cout<<"Average: "<<average<<endl;
    //     cout<<"Total: "<<total_number<<endl;
    //     cout<<"positive numbers: "<<positive_numbers<<endl;
    //     cout<<"negative numbers: "<<negative_numbers<<endl;
    // }

  //problem 12
  // int n,reversed_number=0,remainder;
  // cout<<"Enter a number: ";
  // cin>>n;
  // while(n != 0) {
  //   remainder = n % 10;
  //   reversed_number = reversed_number * 10 + remainder;
  //   n /= 10;
  // }
  // cout<<reversed_number;
  //

  //problem 13
  // int n;
  // cout<<"Enter the numbers: ";
  // cin>>n;
  // if (n>0) {
  //   for(int i=1;i<=n;i++) {
  //     for(int j=1;j<=i;j++) {
  //       cout<<i;
  //     }
  //     cout<<endl;
  //   }
  // }
  // else if(n==0) {
  //   cout<<"The depth is zero";
  // }
  // else {
  //   cout<<"Invalid Input";
  // }

  //problem 14
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++) {
      if (binary[i] == '1') {
        decimal += pow(2, length - 1 - i);
      }
    }
    cout << "The decimal equivalent is: " << decimal << endl;












  return 0;
}