#include <iostream>
class SmartArray {
private:
    int* data;
    size_t size;
public:
    explicit SmartArray(size_t s) : size(s) {
        data = new int[size]();
    }

    explicit operator bool() const {
        return data != nullptr && size > 0;
    }

    ~SmartArray() {
        delete[] data;
    }

    size_t getSize() const { return size; }
};

void testSmartArray() {
    SmartArray arr(5);
    if (arr) {
        std::cout << "Array is valid with size " << arr.getSize() << std::endl;
    }

}

int main() {
  testSmartArray();
  return 0;
}