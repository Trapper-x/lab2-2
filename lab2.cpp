
#include "lab2.hpp"
using namespace std;

void task1()
{
    int x = 0;
    int y = 0;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    // 1
    if ((x % 2 != 0) && (y % 2 != 0)){
        cout << "each of the numbers X and Y is odd" << endl;
    }
    // 2
    if (((x < 20) && (y > 20)) || ((x > 0) && (y < 0))) {
        cout << "only one of the numbers X and Y is less than 20" << endl;
    }
    // 3
    if ((x == 0) || (y == 0)) {
        cout << "at least one of the numbers X and Y is zero" << endl;
    }
    // 4
    int z = 0;
    cout << "Enter z: ";
    cin >> z;
    if ((x < 0) && (y < 0) && (z < 0)) {
        cout << "each of the numbers X, Y, Z is negative" << endl;
    }
    // 5
    if ((x % 5 == 0) && (y % 5 != 0) && (z % 5 != 0)) {
        cout << "Only one of the numbers X, Y and Z is a multiple of five(x)" << endl;
    } else if ((x % 5 != 0) && (y % 5 == 0) && (z % 5 != 0)) {
        cout << "Only one of the numbers X, Y and Z is a multiple of five(y)" << endl;
    } else if ((x % 5 != 0) && (y % 5 != 0) && (z % 5 == 0)) {
        cout << "Only one of the numbers X, Y and Z is a multiple of five(z)" << endl;
    }
    // 6
    if ((x > 100) || (y > 100) || (z > 100)) {
        cout << "at least one of the numbers X, Y, Z is greater than 100" << endl;
    }
}

void task2() {
    int a = 0;
    int b = 0;
    cout << "Enter first fugure's placing: " << endl;
    cin >> a >> b;
    pair<int, int> figure1;
    figure1.first = a;
    figure1.second = b;
    int c = 0;
    int d = 0;
    cout << "Enter second figure's placing: " << endl;
    cin >> c >> d;
    pair<int, int> figure2;
    figure2.first = c;
    figure2.second = d;
    if ((figure1.first == figure2.first) || (figure1.second == figure2.second)) {
        cout << "the rook threatens the playing field"  << endl;
    }
    if ((abs(figure1.first - figure2.second) == (abs(figure1.second - figure2.second)))) {
        cout << "the bishop threatens the playing field"  << endl;
    }
    if ((abs(figure1.first - figure2.second) == 1) || (abs(figure1.second - figure2.second) == 1)){
        cout << "the king can get to the playing field" << endl;
    }
    if ((abs(figure1.first - figure2.second) == abs(figure1.second - figure2.second) ||
         (figure1.first == figure2.first) || (figure1.second == figure2.second))) {
        cout << "The queen threatens the playing field" << endl;
    }
    if ((abs(figure1.first - figure2.first) == 0) || (figure1.second - figure2.second == 1)) {
        cout << "White pawn threatens the playing field";
    }else if ((figure2.first - figure1.first == 1) || (figure1.second - figure2.second == 1)) {
        cout << "White pown beats the figure";
    }
}

void task3(){
    int n = 7;
    for (int i = 0; i < 10; ++i) {
        cout << n*i << endl;
    }
}

void task4(){
    cout << "task 4" << endl;
    for (int i = 8; i < 15; ++i) {
        for (int j = i + 1; j < 16; ++j) {
            int f = i * j;
            cout << f << endl;
        }
    }
    int a = 0;
    cout << " Enter a: ";
    cin >> a;
    for (int i = a; i < 20; ++a) {
        for (int j = i + 1; j < 21; ++j) {
            int f = i * j;
            cout << f << endl;
        }
    }
    int b = 0;
    cout << " Enter b: ";
    cin >> b;
    for  (int i = 1; i < b; ++i) {
        for (int j = i + 1; j < b + 1; ++j) {
            int f = i * j;
            cout << f << endl;
        }
    }
    cout << " " << endl;
    for (int i = a; i < b; ++i) {
            for (int j = i + 1; j < b + 1; ++j) {
                int f = i * j;
                cout << f << endl;
            }
    }
}
