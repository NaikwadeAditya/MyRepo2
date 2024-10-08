#include<iostream>
using namespace std;
class Add {
    int a;
    int b;
    public:
    void Addition(int a, int b) {
        cout << "Addition: " << a + b << endl;
    }
};
int main() {
    Add A1;
    A1.Addition(1,1);
    cout << "This is Cpp Program.." << endl;
    cout << "Except this Pull Request" << endl;
    cout << "Added New Change";
}
