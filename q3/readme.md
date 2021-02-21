# Answer for Question #2 -  Basic Data Types
## Code
**main.cpp:**
```c++
#include <stdio.h>
#include <iostream>

int main () 
{
    int my_int;
    long my_long;
    char my_char;
    float my_float;
    double my_double;
    std::cout << "Please enter space-separated values for each type as follows: int long char float double" << std::endl;
    scanf("%d %ld %c %f %lf", &my_int, &my_long, &my_char, &my_float, &my_double);
    printf("%d\n%ld\n%c\n%f\n%lf\n", my_int, my_long, my_char, my_float, my_double);
    return 0;
}
```
## Building
Create a folder named  `build` inside q3 folder
```shell
mkdir build && cd build
```
We are using g++ for building
```shell
g++ ../main.cpp  -o app 
```
## Run the app
```shell
./app
```