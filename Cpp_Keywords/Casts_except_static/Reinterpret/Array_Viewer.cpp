#include <iostream>

void Varray(int *arr){
    char *charview = reinterpret_cast<char *>(arr);
    for (int i = 0; i < 10 ; i++){
      std::cout << "Value " << i << ": " << (int)charview[i] << std::endl;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Varray(arr);
    return 0;
}