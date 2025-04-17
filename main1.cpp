#include <iostream>
#include <iomanip>
#include <utility>
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
//int main() {
    //         string a;
    //         cout <<"Enter the text:";
    //         cin >> a;
    //         getline(cin, a );
    //         int padding = (50-a.length())/2;
    //         cout << setw(padding + a.length()) <<a;
    //         return 0;
    // double a,b,sum=0;
    // cout<<"Enter the first number:";
    // cin>>a;
    // cout<<"Enter the second number:";
    // cin>>b;
    // sum=a+b;
    // cout<<"The sum is:"<<sum;
    // return 	0;
    // int ID,year,fee;
    // double GPA;
    // cout<<"Enter your ID:";
    // cin>>ID;
    // cout<<"Enter your year of study:";
    // cin>>year;
    // cout<<"Enter your fee:";
    // cin>>fee;
    // cout<<"Enter your GPA:";
    // cin>>GPA;
    // cout<<"___________________________________________________"<<endl;
    // cout<<"Student ID:"<<ID<<endl<<"Student Year of Study:"<<year<<endl<<"Student Study Fee: "<<endl<<"Student GPA:"<<GPA;

    // double celsius,fahrenheit=0;
    // cout<<"Enter the temperature in Celsius:"<<endl;
    // cin>>celsius;
    // fahrenheit=celsius*1.8+32;
    // cout<<"Fahrenheit:"<<fahrenheit<<endl;

    // double price, total_cost=0;
    // int quantity;
    // cout << "Enter cost price: ";
    // cin >> price;
    // cout << "Enter quantity: ";
    // cin >> quantity;
    // total_cost=price*quantity;
    // cout << "Total cost is: " << total_cost << endl;
    //

    // int age1,age2,age3,age4;
    // double average=0.0;
    // cout<<"Enter four your family members' age:";
    // cin>>age1>>age2>>age3>>age4;
    // average=(age1+age2+age3+age4)/4;
    // cout<<"Average:"<<average;
    // return 0;

    // double length,width, area=0,perimeter=0;
    // cout<<"Enter the length of the rectangle:";
    // cin>>length;
    // cout<<"Enter the width of the rectangle:";
    // cin>>width;
    // area=length*width;
    // perimeter=2*(length+width);
    // cout<<"Area of the rectangle is:"<<area<<endl;
    // cout<<"Perimeter of the rectangle is:"<<perimeter;

    //     int dividend,divisor,quotient=0,remainder=0;
    //     cout<<"Enter dividend: ";
    //     cin>>dividend;
    //     cout<<"Enter divisor: ";
    //     cin>>divisor;
    //     quotient=dividend/divisor;
    //     remainder=dividend%divisor;
    //     cout<<"Quotient:"<<quotient<<endl;
    //     cout<<"Remainder:"<<remainder;

    // double USD,UZS=0,exchange_rate;
    // cout<<"Enter the amount of the USD:";
    // cin>>USD;
    // cout<<"Enter the exchange rate:";
    // cin>>exchange_rate;
    // UZS=USD*exchange_rate;
    // cout<<"The equivalent amount in UZS is:"<<UZS<<endl;

    // double r, area=0;
    // cout<<"Enter the radius of the circle: ";
    // cin>>r;
    // area=3.14*r*r;
    // cout<<"Area of the circle is: "<<area<<endl;

    // double radius,height,volume=0;
    // cout<<"Enter the base radius of the circle:";
    // cin>>radius;
    // cout<<"Enter the height of the cylinder:";
    // cin>>height;
    // volume=3.14*radius*radius*height;
    // cout<<"The volume of the circle is:"<<volume<<endl;

    // int minutes, hours=0;
    // cout<<"Enter minutes: ";
    // cin>>minutes;
    // hours=minutes/60;
    // minutes=minutes%60;
    // if (minutes>60) {
    //     cout<<hours<<" hours"<<" "<<minutes<<" minutes"<<endl;
    // }
    // else if (minutes%60==0) {
    //     cout<<hours<<" hours";
    // }
    // else {
    //     cout<<minutes<<" minutes"<<endl;
    // }
    // double original_price,discount,discount_amount=0,final_price=0;
    // cout<<"Enter Price:";
    // cin>>original_price;
    // cout<<"Enter Discount in Percentage:";
    // cin>>discount;
    // discount_amount=(original_price*discount)/100;
    // final_price=original_price-discount_amount;
    // cout<<"discount_amount:"<<discount_amount<<endl;
    //
    // cout<<"Final Price:"<<final_price<<endl;
    // double fee,scholarship_percentage,scholarship_amount=0,final_fee=0;
    // cout<<"Enter amount of fee: ";
    // cin>>fee;
    // cout<<"Enter amount of scholarship in percentage: ";
    // cin>>scholarship_percentage;
    // scholarship_amount = (scholarship_percentage * fee)/100;
    // final_fee=fee-scholarship_amount;
    // cout<<"scholarship_amount = "<<scholarship_amount<<endl;
    // cout<<"final_fee = "<<final_fee<<endl;
    // double P,R,T,simple_interest=0;
    // cout<<"Enter Principal amount : ";
    // cin>>P;
    // cout<<"Enter the rate of interest : ";
    // cin>>R;
    // cout<<"Enter the time in years:";
    // cin>>T;
    // simple_interest=(P*R*T)/100;
    // cout<<"The simple interest is "<<simple_interest<<endl;
    //
    // int a;
    // cout << "Enter a number: ";
    // cin >> a;
    // if (a>0) {
    //     cout<<a<< " is a positive number";
    // }
    // else if (a<0) {
    //     cout<<a<< " is a negative number";
    // }
    // else if (a==0) {
    //     cout<<a<< " is zero";
    // }
    // int a;
    // cout << "Enter a number: ";
    // cin >> a;
    // if (a%2==0) {
    //     cout << a <<" is an even number"<< endl;
    // }
    // else {
    //     cout << a <<" is an odd number"<< endl;
    // }
    // double a,b;
    // cout<<"Enter the first number: ";
    // cin>>a;
    // cout<<"Enter the second number: ";
    // cin>>b;
    // if (a>b) {
    //     cout<<a<<" is greater than "<< b<<endl;
    // }
    // else if (a<b) {
    //     cout<<a<<" is less than "<< b<<endl;
    // }
    // else {
    //     cout<<b<<"="<<a<<endl;
    // }
    //
    // int a,b,c;
    // cout<<"Enter the three numbers: ";
    // cin>>a>>b>>c;
    // if (a>b && a>c) {
    //     cout<<a<<" is the largest number";
    // }
    // else if (b>a && b>c) {
    //     cout<<b<<" is the largest number";
    //
    // }
    // else if (c>a && c>b) {
    //     cout<<c<<" is the largest number";
    // }
    // else if (a==b && b==c) {
    //     cout<<"They are equal";
    // }
    // double score,total=0;
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 15; j++) {
    //
    //         cout<<"score "<<i++<<":";
    //         cin>>score;
    //         total=total+score;
    //
    //     }
    // }
    // cout<<"Total score is "<<total;
    // double average=total/50;
    // cout<<"Average score is "<<average;
    // for (int i = 1; i <= 10; i++) {
    //     cout<<i*i<<endl;
    // }
    // int group=3,student=50,course=5;
    // double score,total=0,average=0;
    // for (int g=1;g<=3;g++) {
    //     cout<<"\nEnter the score of group "<<g++<<":\n ";
    //     double total1=0,total2=0,total3=0,total4=0,total5=0;
    //     for (int s=1;s<=student;s++) {
    //         cout<<"Enter the score of student "<<s++<<": ";
    //         for (int c=1;c<=course;c++) {
    //             cout<<"Enter the score of course "<<c++<<": ";
    //             cin>>score;
    //             if (c==1) total1+=score;
    //             else if (c==2) total2+=score;
    //             else if (c==3) total3+=score;
    //             else if (c==4) total4+=score;
    //             else if (c==5) total5+=score;
    //
    //         }
    //     }
    // }
    // cout<<"Total score is "<<total;
    // average=total/group;
    // cout<<"Average score is "<<average;

    // int n,fact=1;
    // cout << "Enter a number: ";
    // cin >> n;
    // for (int i=1;i<=n;i++) {
    //     fact=fact*i;
    // }
    // cout << fact << endl;
    // int n=99;
    // cout<<"Enter the numbers:";
    // while (n!=0) {
    //     cin>>n;
    //     if (n!=0) {
    //         cout<<"You entered:"<<n<<endl;
    //     }
    // }
    // cout<<"loop ended";

    // int number,sum=0;
    // cout<<"Enter a number:";
    // cin>>number;
    // while (number>0) {
    //     sum=sum+number%10;
    //     number=number/10;
    //
    //
    //
    // }
    // cout<<"The sum is:"<<sum<<endl;
    //
    // int num,fact=1;
    // cout << "Enter a number: ";
    // cin >> num;
    // if (num<0) {
    //     cout << "Invalid Input";
    //     return 0;
    // }
    //
    // while (num>1) {
    //         fact=fact*num;
    //         num--;
    //
    // }
    //     cout << fact << endl;
    //
    //lab 9
//     int multiply(int a, int b) {
//         if (b<0)
//             return a+multiply(a, -b);
//         if(b==0)
//             return 0;
//         else(b>0);
//         return a+multiply(a, b-1);
//
// }
// int main() {
//         int num1, num2;
//         cout<<"Enter two numbers: ";
//         cin>>num1>>num2;
//         int product=multiply(num1,num2);
//         cout<<"The product is: "<<product;
//     }
//problem 2
// int factorial(int n) {
//     if (n==0)
//         return 1;
//     else
//     return n*factorial(n-1);
// }
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//
//
//     if (number<0)
//         cout<<"The factorial of the negative number is not defined";
//     else
//         cout << "Factorial of the given number is: " << factorial(number) << endl;
// }
//problem 3
// int fibonacci(int n) {
//     if (n==0)
//         return 0;
//     if (n==1)
//         return 1;
//     return fibonacci(n-1) + fibonacci(n-2);
// }
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     cout << fibonacci(number) << endl;
//
// }

//problem 4
// int sum(int n) {
//     if (n == 0)
//         return 0;
//     else
//         return n+sum(n-1);
// }
//
//     int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     cout<<sum(number);
//
//problem 5
// void reverse(int n) {
//     if(n==0)
//         return;
//     cout<<n<<" ";
//     reverse(n-1);
//
// }
//     int main() {
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     reverse(number);
//
//
//     }

//problem 6
// int count(int n) {
//     if (n==0)
//         return 0;
//     return 1+count(n/10);
// }
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     if (number<0)
//         cout<<"invalid input";
//     else
//         cout << count(number);
// }

//problem 7
// int sumofdigits(int n) {
//     if(n==0) return 0;
//     int qoldiq=n%10;
//     return qoldiq+sumofdigits(n/10);
// }
// int main() {
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     if (number>0)
//     cout<<"The sum of the digits is: "<<sumofdigits(number);
//     else
//         cout<<"The sum of the digits is :"<<sumofdigits(-number);
// }

//problem 8
// double power(int base, int exp) {
//     if (exp == 0) return 1;
//     return base * power(base, exp - 1);
// }
// int main() {
//     double base1, exp1;
//     cout << "Enter base number: ";
//     cin >> base1;
//     cout << "Enter exponent: ";
//     cin >> exp1;
//     if (exp1<0) {
//         exp1 = -exp1;
//         cout<<base1<<"^"<<"("<<-exp1<<")"<<"="<<1.0/power(base1,exp1)<<endl;
//     }
//     else
//         cout << base1 << "^" << exp1 << " = " << power(base1, exp1);
//
// }

// int reverse(int n,int rev=0) {
//     if (n == 0)
//         return rev;
//
//     return reverse(n/10, rev*10+n% 10);
// }
// int main() {
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     cout<<reverse(number)<<endl;
// }

// bool isPolindrome(int n) {
//     if (n<0) return false;
//     return n==reverse(n);
// }
//
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     if (isPolindrome(number)) {
//         cout<<"True"<<endl;
//     }
//     else {
//         cout<<"False"<<endl;
//     }
// }

// int prime(int n, int i=2) {
//     if (n<=1) return false;
//     if (i*i>n) return true;
//     if (n%i==0) return false;
//     return prime(n, i+1);
// }
// int main() {
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     if (prime(number)) {
//         cout<<number<<" is a prime number";
//     }
//     else
//         cout<<number<<" is not a prime number";
//
//
//     }
// int main() {
    // int numbers[3]={10,20,30};
    // for (int i=0;i<3;i++)
    // cout<<numbers[i];
    //
    // int n;
    // cout<<"Enter the number of the integers:";
    // cin>>n;
    //
    // if (n<0 || n>10000) {
    //     cout<<"Invalid Input"<<endl;
    //     return 1;
    // }
    // cout<<"Enter "<<n<<" integers:";
    // int numbers[10000];
    // int sum=0;
    // for (int i = 0; i < n; ++i) {
    //     cin>>numbers[i];
    //     sum+=numbers[i];
    // }
 //   cout<<"The sum of the integers is: "<<sum;

    // int n;
    // cout<<"Enter number of elements: ";
    // cin>>n;
    //
    // if (n<0) {
    //     cout<<"Invalid Input"<<endl;
    // }
    // double numbers[n];
    // double average = 0,sum=0;
    // cout<<"Enter "<<n<<" numbers: ";
    // for(int i=0;i<n;i++) {
    //     cin>>numbers[i];
    //     sum+=numbers[i];
    //     average=sum/n;
    // }
    // cout<<"Average: "<<average<<endl;
    //


// int minimum(int arr[],int size) {
//     int min=arr[0];
//     for (int i=1;i<size;++i) {
//         if (arr[i]>min) {
//             min=arr[i];
//         }
//     }
//     return min;
// }
// int main() {
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     int numbers[1000];
//     if (n<0) {
//         cout<<"Invalid Input"<<endl;
//         return 1;
//     }
//     cout<<"Enter "<<n<<" elements: ";
//     for (int i=0;i<n;++i) {
//         cin>>numbers[i];
//
//     }
//     int minValue=minimum(numbers,n);
//     cout<<"Minimum value is: "<<minValue<<endl;
//     return 0;
//
// }
int maxofIndex(double array[],int size) {
    if (size<=0) return -1;
    int maxIndex = 0;
    for (int i=1;i<size;i++) {
        if (array[i]>array[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    const int size=15;
    double numbers[size];
    for (int i=0;i<size;i++) {
        cout << "Enter number " << i+1 << ": ";
        cin>>numbers[i];
    }
    int Largestindex=maxofIndex(numbers,size);
    if (Largestindex==-1) {
        cout<<"No such number"<<endl;
    }
    else {
        cout<<"The largest index is "<<Largestindex<<endl;
    }
}














