#include <iostream>
using namespace std;

//int main() {
//  problem 1

//    int n, sum = 0;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    int arr[n];
//
//    cout << "Enter " << n << " numbers:\n";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        sum += arr[i];
//    }
//
//    cout << "Sum = " << sum << endl;


//problem 2
//double average(int arr[], int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) sum += arr[i];
//    return (double)sum / n;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++) cin >> arr[i];
//    cout << average(arr, n) << endl;
//
//}

//problem 3

//int findMin(int arr[], int n) {
//    int min = arr[0];
//    for (int i = 1; i < n; i++)
//        if (arr[i] < min) min = arr[i];
//    return min;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++) cin >> arr[i];
//    cout << "Min=" << findMin(arr, n) << endl;
//
//}
//problem 4
//int indexOfLargestElement(double array[], int size) {
//    if (size <= 0) return -1;
//    int maxIndex = 0;
//    for (int i = 1; i < size; i++)
//        if (array[i] >= array[maxIndex]) maxIndex = i;
//    return maxIndex;
//}
//
//int main() {
//    double arr[15];
//    for (int i = 0; i < 15; i++) cin >> arr[i];
//    cout << "Index of largest: " << indexOfLargestElement(arr, 15) << endl;
//
//}


//problem 5
//bool strictlyEqual(const int list1[], const int list2[], int size) {
//    for (int i = 0; i < size; i++)
//        if (list1[i] != list2[i]) return false;
//    return true;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int a[n], b[n];
//    for (int i = 0; i < n; i++) cin >> a[i];
//    for (int i = 0; i < n; i++) cin >> b[i];
//    if (strictlyEqual(a, b, n))
//        cout << "Two lists are strictly identical" << endl;
//    else
//        cout << "Two lists are not strictly identical" << endl;
//
//}

//problem 6
//int main() {
//    int freq[26] = {0};
//    char ch;
//    while (cin >> ch && ch != '0') {
//        if (ch >= 'a' && ch <= 'z')
//            freq[ch - 'a']++;
//    }
//    for (int i = 0; i < 26; i++)
//        if (freq[i] > 0)
//            cout << char(i + 'a') << ": " << freq[i] << endl;
//    return 0;
//}

////problem 7
//int main() {
//    int n;
//    cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++) cin >> arr[i];
//    for (int i = 0; i < n - 1; i++)
//        for (int j = i + 1; j < n; j++)
//            if (arr[i] > arr[j])
//                swap(arr[i], arr[j]);
//    for (int i = 0; i < n; i++) cout << arr[i] << " ";
//    cout << endl;
//    return 0;
//}

//problem 8
//int main() {
//    srand(time(0));
//    int freq[7] = {0};
//    for (int i = 0; i < 10000; i++)
//        freq[(rand() % 6) + 1]++;
//    for (int i = 1; i <= 6; i++)
//        cout << i << ": " << freq[i] << endl;
//    return 0;
//}


//problem 9

//void reverseArray(int arr[], int start, int end) {
//    while (start < end) {
//        swap(arr[start], arr[end]);
//        start++;
//        end--;
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++) cin >> arr[i];
//    reverseArray(arr, 0, n - 1);
//    for (int i = 0; i < n; i++) cout << arr[i] << " ";
//    cout << endl;
//    return 0;
//}


//problem 10
int main() {
    int n;
    cin >> n;
    int arr[n];
    bool sorted = true;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    cout << (sorted ? "YES" : "NO") << endl;
    return 0;
}































    return 0;
}

