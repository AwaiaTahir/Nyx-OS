#include <iostream>
#include <string>
ostream ostream::operator<<(string s) {
    terminal_writestring(s);
    return *this;
}

ostream ostream::operator<<(char s) {
    terminal_putchar(s);
    return *this;
}

ostream ostream::operator<<(long s) {
    terminal_putchar(s);
    return *this;
}