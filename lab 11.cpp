#include <iostream>
using namespace std;

int main() {
   int n, m, sum = 0;
//problem 1
//    cin >> n >> m;
//    int arr1[n][m];
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < m; j++) {
//            cin >> arr1[i][j];
//            sum += arr1[i][j];
//        }
//    cout << sum << endl;

// Problem 2
//    int arr2[n][m];
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < m; j++)
//            cin >> arr2[i][j];
//    for(int i = 0; i < n; i++) {
//        int maxVal = arr2[i][0];
//        for(int j = 1; j < m; j++)
//            if(arr2[i][j] > maxVal) maxVal = arr2[i][j];
//        cout << maxVal << " ";
//    }
//    cout << endl;

// Problem 3
//    int arr3[n][m];
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < m; j++)
//            cin >> arr3[i][j];
//    for(int j = 0; j < m; j++) {
//        int sumCol = 0;
//        for(int i = 0; i < n; i++)
//            sumCol += arr3[i][j];
//        cout << sumCol << " ";
//    }
//    cout << endl;

// Problem 4
//    int arr4[n][n];
//    int diagSum = 0;
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < n; j++) {
//            cin >> arr4[i][j];
//            if(i == j) diagSum += arr4[i][j];
//        }
//    cout << diagSum << endl;

// Problem 5
//    int arr5[n][m];
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < m; j++)
//            cin >> arr5[i][j];
//    for(int j = 0; j < m; j++) {
//        for(int i = 0; i < n; i++)
//            cout << arr5[i][j] << " ";
//        cout << endl;
//    }

// Problem 6
//    int n1, m1, n2, m2;
//    cin >> n1 >> m1;
//    int A[n1][m1];
//    for(int i = 0; i < n1; i++)
//        for(int j = 0; j < m1; j++)
//            cin >> A[i][j];
//    cin >> n2 >> m2;
//    int B[n2][m2];
//    for(int i = 0; i < n2; i++)
//        for(int j = 0; j < m2; j++)
//            cin >> B[i][j];
//    if(m1 == n2) {
//        int C[n1][m2];
//        for(int i = 0; i < n1; i++)
//            for(int j = 0; j < m2; j++) {
//                C[i][j] = 0;
//                for(int k = 0; k < m1; k++)
//                    C[i][j] += A[i][k] * B[k][j];
//            }
//        for(int i = 0; i < n1; i++) {
//            for(int j = 0; j < m2; j++)
//                cout << C[i][j] << " ";
//            cout << endl;
//        }
//    }

// Problem 7
//    int mat[n][n];
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < n; j++)
//            cin >> mat[i][j];
//    for(int i = 0; i < n; i++) {
//        for(int j = n - 1; j >= 0; j--)
//            cout << mat[j][i] << " ";
//        cout << endl;
//    }


    string s;
    cin >> s;
    //problem 8
//    int vowels = 0, consonants = 0;
//    for(char c : s) {
//        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
//        else consonants++;
//    }
//    cout << vowels << " " << consonants << endl;

// Problem 9
//    for(int i = s.length() - 1; i >= 0; i--) cout << s[i];
//    cout << endl;

// Problem 10
//    int l = 0, r = s.length() - 1;
//    bool isPalindrome = true;
//    while(l < r) {
//        if(s[l] != s[r]) {
//            isPalindrome = false;
//            break;
//        }
//        l++, r--;
//    }
//    cout << (isPalindrome ? "Yes" : "No") << endl;

// Problem 11
//    int freq[26] = {0};
//    for(char c : s) freq[c - 'a']++;
//    char mostFreq;
//    int maxCount = 0;
//    for(int i = 0; i < 26; i++) {
//        if(freq[i] > maxCount) {
//            maxCount = freq[i];
//            mostFreq = 'a' + i;
//        }
//    }
//    cout << mostFreq << endl;

// Problem 12
//    bool seen[26] = {0};
//    string result = "";
//    for(char c : s) {
//        if(!seen[c - 'a']) {
//            seen[c - 'a'] = true;
//            result += c;
//        }
//    }
//    cout << result << endl;

// Problem 13
//    string line;
//    getline(cin >> ws, line);
//    string word = "", longest = "";
//    line += ' ';
//    for(char c : line) {
//        if(c == ' ') {
//            if(word.length() > longest.length()) longest = word;
//            word = "";
//        } else word += c;
//    }
//    cout << longest << endl;

// Problem 14
    string a, b;
    cin >> a >> b;
    int count1[26] = {0}, count2[26] = {0};
    for(char c : a) count1[c - 'a']++;
    for(char c : b) count2[c - 'a']++;
    bool isAnagram = true;
    for(int i = 0; i < 26; i++)
        if(count1[i] != count2[i]) isAnagram = false;
    cout << (isAnagram ? "Yes" : "No") << endl;

    return 0;
}
