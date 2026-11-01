#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1. Default Constructor
    cout << "===== Default Constructor =====" << endl;
    vector<int> v1;

    cout << "Size of v1: " << v1.size() << endl;
    cout << "Elements in v1: ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
        cout << endl;


    // 2. Fill Constructor
    cout << "===== Fill Constructor =====" << endl;
    vector<int> v2(5, 10);   // 5 elements, each = 10

    cout << "Elements in v2: ";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;


    // 3. Range Constructor
    cout << "===== Range Constructor =====" << endl;
    vector<int> v3(v2.begin(), v2.end());

    cout << "Elements in v3: ";
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;

    // 4. Copy Constructor
    cout << "===== Copy Constructor =====" << endl;
    vector<int> v4(v3);

    cout << "Elements in v4: ";
    for(int i = 0; i < v4.size(); i++){
        cout << v4[i] << " ";
    }
    cout << endl;
    return 0;
}

