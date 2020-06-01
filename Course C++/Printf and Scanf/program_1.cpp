#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int num1, num2, num3;
    num1 = 1; num2 = 2; num3 = 3;
    char name[8] = "Gabriel";

    printf("Numbers: %d %d %d  Name: %s\n", num1, num2, num3, name);

    scanf("%d %s", &num1, &name);

    printf("Number: %d Name: %s", num1, name);

    return 0;

}

/*
    d,i -> int
    x,X -> hexadecimal
    u -> unsigned integer
    s -> string/*char
    f -> float/double
    p ->
*/