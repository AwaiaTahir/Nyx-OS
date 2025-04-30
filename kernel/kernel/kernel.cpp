#include <iostream>
#include <kernel/tty.h>
#include <stdio.h>
#include <string>

extern "C" void kernel_main(void) {
    terminal_initialize();
    string s = "Awais";
    string q = "Tahir";
    string c = s * 3;
    // printf(s);
    // printf(q);
    printf(c);
}
