# Answer for Question #1 - Cpp exception handling 
## Code
**main.cpp:**

```c++
#include <iostream>
#include <stdexcept>

using namespace std;

// calculates the largest proper divisor as integer
int largest_proper_divisor(int n) {
    if (n == 0) {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for (int i = n/2; i >= 1; --i) { 
        if (n % i == 0) {
            return i;
        }
    }
    return -1; // will never happen
}

// the related exception is handled inside the relevent function.
void process_input(int n) {
    try {
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    }catch (const invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    cout << "returning control flow to caller" << endl;
}

int main(){
    int _n;
    cout << "Enter an integer to find its LPD: ";
    cin >> _n;
    if(_n < 0 || _n > 100){ //this is a constraint that is defined inside the question.
        cout << "The input should be between 0 and 100" << endl;
        return 0;
    }
    process_input(_n);
    return 0;
}
```
## Building
Create a folder named  `build` inside q1 folder
```shell
mkdir build && cd build
```
We are using g++ for building
```shell
g++ ../main.cpp -o app 
```
## Run the app
```shell
./app
```