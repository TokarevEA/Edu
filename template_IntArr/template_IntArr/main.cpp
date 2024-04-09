#include <iostream>
#include <string>
#include "Array.h"
#include "funcs.h"
//#include <map>



int main() {
    bool t_sel = true;
    while (t_sel) {
        int type = 0;
        type = typeSelect();

        switch (type) {
        case 1: {
            Array<short>* arr = new Array<short>();
            performOperations(arr);
            delete arr;
            break;
        }
        case 2: {
            Array<int>* arr = new Array<int>();           
            performOperations(arr);
            delete arr;
            break;
        }
        case 3: {
            Array<long>* arr = new Array<long>();            
            performOperations(arr);
            delete arr;
            break;
        }
        case 4: {
            Array<float>* arr = new Array<float>();
            performOperations(arr);
            delete arr;
            break;
        }
        case 5: {
            Array<double>* arr = new Array<double>();
            performOperations(arr);
            delete arr;
            break;
        }
        case 6: {
            Array<char>* arr = new Array<char>();
            performOperations(arr);
            delete arr;
            break;
        }
        case 7: {
            Array<string>* arr = new Array<string>();
            performOperations(arr);
            delete arr;
            break;
        }
        case 0: {
            t_sel = false;
            cout << "Program closed" << endl;
            break;
        }
        default:
            cout << "Invalid type entered" << endl;
        }
    }
    return 0;
}