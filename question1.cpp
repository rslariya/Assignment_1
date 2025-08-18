
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter five values for Array: ";
    for (int i=0;i<=4;i++)
    {
        cin >> arr[i];
    }
    cout << "The array is :\n ";
    for (int i=0;i<=4;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//create and display done

1.c ---- INSERT


#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int size = 5; 
 
    cout << "Enter six values for Array: ";
    for (int i = 0; i < size+1; i++) {  
        cin >> arr[i];
    }
    cout << "The array is :\n ";
    for (int i = 0; i < size+1; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

