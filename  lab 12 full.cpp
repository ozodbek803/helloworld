#include <iostream>
using namespace std;

int main() {

// Problem 1
//    int a = 10;
//    int* ptr = &a;
//    cout << a << endl;
//    cout << ptr << endl;
//    cout << *ptr << endl;

// Problem 2
//    int b = 5;
//    int* p = &b;
//    cout << b << endl;
//    *p = 15;
//    cout << b << endl;

// Problem 3
//    int x = 3, y = 7;
//    int* px = &x;
//    int* py = &y;
//    int temp = *px;
//    *px = *py;
//    *py = temp;
//    cout << x << " " << y << endl;

// Problem 4
//    int arr1[5] = {1, 2, 3, 4, 5};
//    int* ptr1 = arr1;
//    for(int i = 0; i < 5; i++) cout << *(ptr1 + i) << " ";
//    cout << endl;

// Problem 5
//    int arr2[5] = {10, 20, 30, 40, 50};
//    int* ptr2 = arr2;
//    cout << *(ptr2 + 5 / 2) << endl;

// Problem 6
//    int num = 6;
//    int* ptr3 = &num;
//    *ptr3 = (*ptr3) * (*ptr3);
//    cout << num << endl;

// Problem 7
//    int arr3[5] = {1, 2, 3, 4, 5};
//    int* ptr4 = arr3;
//    cout << sizeof(arr3) << endl;
//    cout << sizeof(ptr4) << endl;

// Problem 8
//    int value = 42;
//    void* voidPtr = &value;
//    cout << *(int*)voidPtr << endl;

// Problem 9
//    int arr4[5] = {4, 8, 1, 9, 3};
//    int* ptr5 = arr4;
//    int maxVal = *ptr5;
//    for(int i = 1; i < 5; i++)
//        if(*(ptr5 + i) > maxVal)
//            maxVal = *(ptr5 + i);
//    cout << maxVal << endl;

// Problem 10
//    int a1, b1;
//    cin >> a1 >> b1;
//    int* ptrA = &a1;
//    int* ptrB = &b1;
//    cout << *ptrA << " " << *ptrB << endl;

// Problem 11
//    int size;
//    cin >> size;
//    int data[size];
//    for(int i = 0; i < size; i++) cin >> data[i];
//    int* maxPtr = data;
//    for(int i = 1; i < size; i++)
//        if(*(data + i) > *maxPtr)
//            maxPtr = data + i;
//    cout << *maxPtr << endl;

// Problem 12
//    int n1 = 9, n2 = 11, *ptr_1 = nullptr, *ptr_2 = nullptr, k = 0;
//    double t;
//    ptr_1 = &n1;
//    ptr_1 = &n2;
//    ptr_2 = &n2;
//    ptr_2 = &n1;
    //it is not complated
// Problem 13
//    int arr5[10] = {1,2,3,4,5,6,7,8,9,10};
//    int* ptr6 = arr5;
//    for(int i = 0; i < 10; i++)
//        cout << (ptr6 + i) << " " << *(ptr6 + i) << endl;

// Problem 14
//    int message = 42;
//    int* ptr7 = &message;
//    cout << *ptr7 << endl;

// Problem 15
//    int treasures[] = {10, 20, 30, 40, 50};
//    int* ptr8 = treasures;
//    ptr8 += 4;
//    cout << *ptr8 << endl;

// Problem 16
//    int score = 75;
//    int* ptr9 = &score;
//    *ptr9 += 10;
//    cout << score << endl;

// Problem 17
//    int arr6[] = {1, 2, 3, 4, 5};
//    int* start = arr6;
//    int* end = arr6 + 4;
//    while(start < end) {
//        int temp = *start;
//        *start = *end;
//        *end = temp;
//        start++;
//        end--;
//    }
//    for(int i = 0; i < 5; i++) cout << arr6[i] << " ";
//    cout << endl;

// Problem 18
//    int scores[] = {78, 95, 85, 62, 88};
//    int* top1 = scores;
//    int* top2 = scores;
//    int* top3 = scores;
//    for(int i = 1; i < 5; i++) {
//        if(* (scores + i) > *top1) {
//            top3 = top2;
//            top2 = top1;
//            top1 = scores + i;
//        } else if(* (scores + i) > *top2 || top2 == top1) {
//            top3 = top2;
//            top2 = scores + i;
//        } else if(* (scores + i) > *top3 || top3 == top2) {
//            top3 = scores + i;
//        }
//    }
//    cout << *top1 << " " << *top2 << " " << *top3 << endl;

// Problem 19
//    int number;
//    cin >> number;
//    int* counts = new int[10]();
//    while(number > 0) {
//        counts[number % 10]++;
//        number /= 10;
//    }
//    for(int i = 0; i < 10; i++) cout << "counts[" << i << "]=" << counts[i] << endl;
//    delete[] counts;

// Problem 20
//    int size2;
//    cin >> size2;
//    int* arr7 = new int[size2];
//    for(int i = 0; i < size2; i++) cin >> *(arr7 + i);
//    for(int i = 0; i < size2 - 1; i++) {
//        for(int j = i + 1; j < size2; j++) {
//            if(*(arr7 + i) > *(arr7 + j)) {
//                int tmp = *(arr7 + i);
//                *(arr7 + i) = *(arr7 + j);
//                *(arr7 + j) = tmp;
//            }
//        }
//    }
//    for(int i = 0; i < size2; i++) cout << *(arr7 + i) << " ";
//    cout << endl;
//    delete[] arr7;


    return 0;
}
