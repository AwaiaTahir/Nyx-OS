#include <iostream>
#include <kernel/tty.h>
#include <stdio.h>
#include <string>

extern "C" void kernel_main(void) {
    ostream cout;

    terminal_initialize();
    string s = "97";
    // string q = "Tahir";
    // string c = s * 3;
    // printf(s);
    // printf(q);
    cout << ltostr(987);
}
