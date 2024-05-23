#include <iostream>
#include <string>
using namespace::std;

int main(){
    int NumList[] = {1, 2, 3, 40, 43, 34 ,13};
    int NumElements = sizeof(NumList) / sizeof(NumList[0]);
    int FoundElemnts[] = {};
    cout << "Even Elments Found: ";
    for (int i; i < NumElements; i++){
        int R = NumList[i] % 2;
        if (R == 0){
            NumList[i] >> FoundElemnts[i];
            cout << FoundElemnts[i] << endl;
            }
    }
    return 0;
}