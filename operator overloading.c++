#include <iostream>

using namespace std;

class my_class {
    private:
        int i;

    public:
        my_class (int a = 0) : i(a) {};

        void print() {
            cout << i;
        }

        my_class operator+(const my_class& m) {
            my_class my;
            my.i = m.i + i;
            return my;
        }
};

int main() {
    my_class m1(10);
    my_class m2(10);
    my_class m3 = m1 + m2;
    m3.print();
}
