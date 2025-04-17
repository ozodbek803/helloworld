#include <iostream>
#include <fstream>
using namespace std;

struct Student { int id; char name[20]; float gpa; };
struct StudentInfo { int id, age; char gender; float cga; };
struct StudentGrade { int lab[5], hw[3], exam[2]; };
struct Date { int d, m, y; };
struct BankAccount { char name[15]; int acc; float bal; Date bday; };
struct Point { int x, y; };
struct Line { Point p1, p2; };
struct Triangle { Point a, b, c; };
struct Square { Point v[4]; };
struct Contact { char name[30], phone[15], email[30]; };

int absVal(int x) {
    if (x < 0) return -x;
    return x;
}

int distance(Point a, Point b) {
    int dx = absVal(a.x - b.x);
    int dy = absVal(a.y - b.y);
    int dist = 0;
    while (dx * dx + dy * dy > dist * dist) dist++;
    return dist;
}

int main() {
    // Problem 1
    // ofstream f1("output.txt"); f1 << "Hello, File!"; f1.close();
    //
    // // Problem 2
    // ifstream f2("greeting.txt"); string s; while (getline(f2, s)) cout << s << endl; f2.close();
    //
    //  Problem 3
    // string name; int age; cin >> name >> age;
    // ofstream f3("user.txt"); f3 << name << " " << age; f3.close();
    //
    // // Problem 4
    // ifstream f4("data.txt"); while (getline(f4, s)) cout << s << endl; f4.close();
    //
    //  Problem 5
    // ifstream f5("source.txt"); ofstream f6("target.txt");
    // while (getline(f5, s)) f6 << s << endl; f5.close(); f6.close();
    //
    //  Problem 6
    // ifstream f7("essay.txt"); string w; int c = 0; while (f7 >> w) c++; cout << c << endl; f7.close();
    //
    //  Problem 7
    // ifstream f8("numbers.txt"); int x, sum = 0; while (f8 >> x) sum += x; cout << sum << endl; f8.close();
    //
    //  Problem 8
    // ifstream f9("values.txt"); int a; f9 >> a; int mx = a, mn = a;
    // while (f9 >> a) { if (a > mx) mx = a; if (a < mn) mn = a; } f9.close();
    // cout << mx << " " << mn << endl;
    //
    //  Problem 9
    // Student st; cin >> st.id >> st.name >> st.gpa;
    // ofstream f10("student.txt"); f10 << st.id << " " << st.name << " " << st.gpa; f10.close();
    //
    //  Problem 10
    // ifstream f11("student.txt"); f11 >> st.id >> st.name >> st.gpa;
    // cout << st.id << " " << st.name << " " << st.gpa << endl; f11.close();
    //
    //  Problem 11
    // Student sts[3]; for (int i = 0; i < 3; i++) cin >> sts[i].id >> sts[i].name >> sts[i].gpa;
    // ofstream f12("class.txt"); for (int i = 0; i < 3; i++) f12 << sts[i].id << " " << sts[i].name << " " << sts[i].gpa << endl; f12.close();
    //
    //  Problem 12
    // ifstream f13("class.txt"); while (f13 >> st.id >> st.name >> st.gpa) cout << st.id << " " << st.name << " " << st.gpa << endl; f13.close();
    //
    //  Problem 13
    // Date d; cin >> d.d >> d.m >> d.y; cout << d.d << "-" << d.m << "-" << d.y << endl;
    //
    //  Problem 14
    // StudentInfo si = {101, 19, 'M', 3.4}; cout << si.id << " " << si.age << " " << si.gender << " " << si.cga << endl;
    //
    //  Problem 15
    // StudentGrade sg = {{50,40,30,40,30},{20,20,20},{30,30}}; int t = 0;
    // for (int i = 0; i < 5; i++) t += sg.lab[i];
    // for (int i = 0; i < 3; i++) t += sg.hw[i];
    // for (int i = 0; i < 2; i++) t += sg.exam[i];
    // cout << t << " " << t / 10.0 << endl;
    //
    // Problem 16
    // StudentInfo group[3];
    // for (int i = 0; i < 3; i++) cin >> group[i].id >> group[i].age >> group[i].gender >> group[i].cga;
    // for (int i = 0; i < 3; i++) cout << group[i].id << " " << group[i].age << " " << group[i].gender << " " << group[i].cga << endl;
    //
    // Problem 17
    // StudentInfo a1 = {1, 20, 'F', 3.2}, a2 = a1;
    // cout << a1.id << " " << a2.id << endl;
    //
    //  Problem 18
    // StudentInfo all[5]; all[2] = {3, 22, 'M', 3.0}; all[4] = all[2];
    // cout << all[2].id << " " << all[4].id << endl;
    //
    //  Problem 19
    // BankAccount acc = {"Alex", 102, 5000, {15,2,2000}};
    // cout << acc.name << " " << acc.acc << " " << acc.bday.d << "-" << acc.bday.m << "-" << acc.bday.y << endl;
    //
    //  Problem 20
    // Line ln; cin >> ln.p1.x >> ln.p1.y >> ln.p2.x >> ln.p2.y;
    // cout << distance(ln.p1, ln.p2) << endl;
    //
    //  Problem 21
    // Triangle tri; cin >> tri.a.x >> tri.a.y >> tri.b.x >> tri.b.y >> tri.c.x >> tri.c.y;
    // int d1 = distance(tri.a, tri.b);
    // int d2 = distance(tri.b, tri.c);
    // int d3 = distance(tri.c, tri.a);
    // cout << d1 + d2 + d3 << endl;
    //
    // Problem 22
    // Square sq; for (int i = 0; i < 4; i++) cin >> sq.v[i].x >> sq.v[i].y;
    // int len = absVal(sq.v[0].x - sq.v[2].x);
    // cout << len * len << endl;
    //
    //  Problem 23
    // StudentGrade g[3]; int max = 0, idx = 0;
    // for (int i = 0; i < 3; i++) {
    //     int tt = 0;
    //     for (int j = 0; j < 5; j++) cin >> g[i].lab[j], tt += g[i].lab[j];
    //     for (int j = 0; j < 3; j++) cin >> g[i].hw[j], tt += g[i].hw[j];
    //     for (int j = 0; j < 2; j++) cin >> g[i].exam[j], tt += g[i].exam[j];
    //     if (tt > max) max = tt, idx = i;
    // }
    // cout << idx + 1 << " " << max << endl;

    // Problem 24
    //I didnot understand
    return 0;
}
