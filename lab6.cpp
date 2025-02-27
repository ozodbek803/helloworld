#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  //problem1(a)
  // int sum=0,num;
  // cout<<"Enter a number(from 1 to 100):";
  // cin>>num;
  // if (num<=100) {
  //   for(int i=0;i<=num;i++){
  //     sum+=i;
  //   }
  // } else {
  //   cout<<"Invalid Input"<<endl;
  // }
  // cout<<"The sum is "<<sum<<endl;

  //problem1(b)
  // int n,sum=0,i=0;
  // cout<<"Enter a number:";
  // cin>>n;
  // while (i<=n) {
  //   sum+=i;
  //   i++;
  // }
  //
  //   cout<<sum<<endl;

  //problem
  // int count=0,num=2;
  // cout<<"Enter a number: ";
  // for (; count<10;num++) {
  //   bool isPrime = true;
  //
  //   for (int i=2; i<=sqrt(num); i++) {
  //     if (num%i==0) {
  //       isPrime = false;
  //       break;
  //     }
  //   }
  //   if (isPrime) {
  //     cout<<num<<" is a prime number"<<endl;
  //     count++;
  //   }
  // }

  // int N,count=0, num=2;
  // cout<<"Enter the number: ";
  // cin>>N;
  //
  // while(num<=N) {
  //   bool isPrime=true;
  //   for (int i=2; i<=sqrt(N); i++) {
  //     if(N%i==0) {
  //       isPrime=false;
  //       break;
  //     }
  //   }
  //
  //   if (isPrime==true) {
  //     cout<<N<<" is a prime number."<<endl;
  //     count++;
  //   }
  //   num++;
  // }

  // int n;
  // cout<<"Enter a positive integer: ";
  // cin>>n;
  // cout<<"Collatz number is: "<<n;
  // while (n !=1) {
  //   if (n%2==0) {
  //     n=n/2;
  //   } else {
  //     n=3*n+1;
  //   }
  //   cout<<n<<"";
  // }
  // cout<<endl;

  // int n,count=0;
  // cout<<"Enter the positive integer: ";
  // cin>>n;
  // while(n>0) {
  //   n=n/10;
  //   count++;
  // }
  // cout<<"The number is consisted of: "<<count<<" digits";

    //problem 5
  // int a,r=0;
  // cout << "Enter a number: ";
  // cin >> a;
  // while (a>0) {
  //     r=a%10;
  //     cout << r <<"";
  //     a=a/10;
  // }

  //problem 6

  int a,b;
  cout<<"Enter two numbers:";
  cin>>a>>b;
  while (b !=0) {
    int temp=b;
    b=a%b;
    a=temp;
  }






























}



































































