#include <string>

string::string(const char *s) { strcpy(Str, s); }
string::string(string &s) { strcpy(Str, s.Str); }
string  string::operator=(string s) { return strcpy(Str, s); }
string::operator const char *() { return Str; }

string string::operator+=(string s) { return strcat(Str, s); }
string string::operator+=(char c) {
    string s = "0";
    s[0]     = c;
    return strcat(Str, s);
}

string string::operator+(string s) {
    string result = "";
    strcpy(result.Str, Str);
    strcat(result.Str, s);
    return result;
}

string string::operator*(int s) {
    string result = "";
    for (int i = 0; i < s; i++) { strcat(result.Str, Str); }
    return result;
}

string string::operator*=(int s) {
    for (int i = 0; i < s; i++) { strcat(Str, Str); }
    return Str;
}

bool string::operator==(string s) { return strcmp(Str, s) == 0; }

bool string::operator<(string s) { return strcmp(Str, s) < 0; }

bool string::operator<=(string s) { return strcmp(Str, s) <= 0; }

bool string::operator>(string s) { return strcmp(Str, s) > 0; }

bool string::operator>=(string s) { return strcmp(Str, s) >= 0; }

char &string::operator[](int idx) { return Str[idx]; }

long strtol(string s) {
    int  i = 0;
    long l = 0;
    while (s[i] != '\0') {
        l = l * 10 + s[i] - '0';
        i++;
    }
    return l;
}

string ltostr(long s) {
    string Str = "";
    while (s) {
        Str += (char)(s % 10) + '0';
        s   /= 10;
    }
    return Str;
}

void swap(char &a, char &b) {
    char temp = a;
    a         = b;
    b         = temp;
}

// string strrev(string s) {
//     string r = s;
//     for (int i = 0; i < strlen(s) / 2; i++) { swap(r[i], r[strlen(r) - 1]) }
//     return r;
// }