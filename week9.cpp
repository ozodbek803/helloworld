#include <iostream>
using namespace std;
//problem 1
// int multiply(int a, int b) {
//     if (a==0 ||b==0) {
//         return 0;
//     }
//     return a+multiply(a,b-1);
//
// }
//
// int main () {
//     int num1 , num2;
//     cout<<"Enter numbers: ";
//     cin>>num1>> num2;
//     cout<<multiply(num1,num2)<<endl;
//
// }

//problem 2
// int factorial(int num) {
//     if (num==1 || num==0) {
//         return 1;
//     }
//     return num*factorial(num-1);
// }
// int main() {
//     int number;
//     cout<<"Please enter a number: ";
//     cin>>number;
//     cout<<factorial(number)<<endl;
// }

// problem 3
// int fibonacci(int n) {
//     if (n==0) {
//         return 0;
//     }
//     if (n==1) {
//         return 1;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main() {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<fibonacci(num);
// }

//problem 4
// int sum(int n) {
//     if (n==0) return 0;
//     return n+sum(n-1);
// }
//
// int main() {
//     int num;
//     cout<<"Please enter a number: ";
//     cin>>num;
//     cout<<sum(num)<<endl;
// }

//problem 5
// int descend(int n) {
//     if (n==1) return 1;
//     cout<< n<<" ";
//     return descend(n-1);
// }
// int main() {
//     int num;
//     cout<<"Please enter a number: ";
//     cin>>num;
//     cout<<descend(num)<<endl;
// }

//problem 6
// int count(int n) {
//     if (n==0) return 0;
//     return 1+count(n/10);
// }
// int main() {
//     int num;
//     cout<<"Please enter a number: ";
//     cin>>num;
//     cout<<count(num);
// }

//problem 7
// int sum(int n) {
//     if (n==0) return 0;
//     return n%10+sum(n/10);
//     }
// int main() {
//     int num;
//     cout<<"Please enter a number: ";
//     cin>>num;
//     cout<<sum(num);
// }

//problem 8
// int power(int base, int exponent) {
//     if (exponent == 0) return 1;
//     if (exponent == 1) return base;
//     return base*power(base, exponent-1);
// }
// int main() {
//     int a,b;
//     cout<<"Enter the base: ";
//     cin>>a;
//     cout<<"Enter the exponent: ";
//     cin>>b;
//     cout <<a<<"^"<<b<<"="<<power(a,b)<<endl;
//
//
// }

//problem 9
// int reverse(int num,int rev){
//   if (num==0) return 0;
//   return reverse(num/10,rev*10+num%10);
// }
// int main(){
//   int number,a;
//   cout<<"Enter a number: ";
//   cin>>number;
//   int reversedNumber=reverse(number,a);
//   cout<<"The reversed number is: "<<reversedNumber<<endl;
// }
//
//problem 10

// int calculateDivisor(int num) {
//     int divisor = 1;
//     while (num >= 10) {
//         divisor *= 10;
//         num /= 10;
//     }
//     return divisor;
// }
// bool isPalindrome(int num, int divisor) {
//     if (num < 10) return true;
//     int firstDigit = num / divisor;
//     int lastDigit = num % 10;
//     if (firstDigit != lastDigit) return false;
//     num = (num % divisor) / 10;
//     divisor /= 100;
//     return isPalindrome(num, divisor);
// }
//
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//
//     if (num < 0) num = -num;
//
//     int divisor = calculateDivisor(num);
//
//     if (isPalindrome(num, divisor))
//         cout << "The number is a palindrome." << endl;
//     else
//         cout << "The number is not a palindrome." << endl;
//
//     return 0;
// }
//
//problem 11
// bool isPrimeRecursive(int n, int divisor = 2) {
//     if (n <= 1) {
//         return false;
//     }
//     if (divisor * divisor > n) {
//         return true;
//     }
//     if (n % divisor == 0) {
//         return false;
//     }
//     return isPrimeRecursive(n, divisor + 1);
// }
// int main() {
//     int num = 29;
//     if (isPrimeRecursive(num)) {
//         cout << num << " is prime." << endl;
//     } else {
//         cout << num << " is not prime." << endl;
//     }
//
//     return 0;
// }
//
//problem 12
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}
int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
