/*
Program: Rocket Shuttle
By: John W
Date: 2023-01-13
Filename: RocketShuttle.py
*/
/*
import time

print("Space Shuttle Count down!")
num = 10
while num > 0:
    print(num)
    time.sleep(1)
    num -= 1
print("BLAST OFF!")
*/

#include <stdio.h>
#include <windows.h>

int main(){
    puts("Space Shuttle Count Down");

    int num = 10;

    while (num > 0) {
        printf("%d \n",num);
        Sleep(1000);
        num--;
    }
    puts("BLAST OFF!");

    return (0);
}
