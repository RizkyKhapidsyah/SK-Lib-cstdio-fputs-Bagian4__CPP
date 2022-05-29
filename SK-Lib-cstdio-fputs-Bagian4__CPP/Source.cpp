
#include <cstdio>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int rc = std::fputs("Hello World", stdout);

    if (rc == EOF) {
        std::perror("fputs()"); // POSIX requires that errno is set
    }
        
    _getch();
    return 0;
}