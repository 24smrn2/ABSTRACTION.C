#include <iostream>
using namespace std;

class AbstractClass {
private:
    int data1, data2;

public:
    // Method to set values of private members
    void setData(int x, int y) {
        data1 = x;
        data2 = y;
    }

    // Method to display values of private members
    void displayData() {
        cout << "Data1 = " << data1 << endl;
        cout << "Data2 = " << data2 << endl;
    }
};

int main() {
    AbstractClass obj;
    obj.setData(10, 20);
    obj.displayData();
    return 0;
}

