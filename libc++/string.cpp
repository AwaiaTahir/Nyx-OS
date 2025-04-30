#include <string>

string::string(const char *s) { strcpy(Str, s); }
string::string(string &s) { strcpy(Str, s.Str); }
string  string::operator=(string s) { return strcpy(Str, s); }
string::operator const char *() { return Str; }

string string::operator+=(string s) { return strcat(Str, s); }

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
