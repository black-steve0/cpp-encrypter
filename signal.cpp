#include <cstdlib>
#include <csignal>
#include <csetjmp>
#include <cstdarg>
#include <typeinfo>
#include <typeindex>
#include <type_traits>
#include <bitset>
#include <functional>
#include <utility>
#include <ctime>
#include <chrono>
#include <cstddef>
#include <initializer_list>
#include <tuple>
#include <new>
#include <memory>
#include <scoped_allocator>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cinttypes>
#include <limits>
#include <exception>
#include <stdexcept>
#include <cassert>
#include <system_error>
#include <cerrno>
#include <cctype>
#include <cwctype>
#include <cstring>
#include <cwchar>
#include <cuchar>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <complex>
#include <valarray>
#include <random>
#include <numeric>
#include <ratio>
#include <cfenv>
#include <iosfwd>
#include <ios>
#include <istream>
#include <ostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <strstream>
#include <iomanip>
#include <streambuf>
#include <cstdio>
#include <locale>
#include <clocale>
#include <codecvt>
#include <regex>
#include <atomic>
#include <thread>
#include <mutex>
#include <future>
#include <condition_variable>
#include <ciso646>
#include <ccomplex>
#include <ctgmath>
#include <cstdalign>
#include <cstdbool>
#include <list>
#include <iterator>
#include <iostream>
using namespace std;

stack<string> to_send;

int HtD(string value) {
    int decimal = 0;
    for (int i = 0; i < value.length(); i++) {
        char digit = (int)value[i] - 48;
        if (digit > 9) {
            digit -= 7;
        }
        decimal += digit * pow(16, value.length() - (i + 1));
    }
    return decimal;
}

string reverse(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

    return str;
}

string DtH(int decimal) {
    string hex = "";

    while (decimal != 0) {

        int nHex = ((decimal / 16.f) - decimal / 16) * 16;

        string digit = std::to_string(nHex);

        if (nHex == 10) { digit = 'A'; }
        if (nHex == 11) { digit = 'B'; }
        if (nHex == 12) { digit = 'C'; }
        if (nHex == 13) { digit = 'D'; }
        if (nHex == 14) { digit = 'E'; }
        if (nHex == 15) { digit = 'F'; }

        hex += digit;
        decimal = (decimal / 16);
    }

    return reverse(hex);
}

char itcc(int id) {
    char letter = ' ';

    if (id == 'A') letter = 'A';
    if (id == 'B') letter = 'B';
    if (id == 'C') letter = 'C';
    if (id == 'D') letter = 'D';
    if (id == 'E') letter = 'E';
    if (id == 'F') letter = 'F';
    if (id == 'G') letter = 'G';
    if (id == 'H') letter = 'H';
    if (id == 'I') letter = 'I';
    if (id == 'J') letter = 'J';
    if (id == 'K') letter = 'K';
    if (id == 'L') letter = 'L';
    if (id == 'M') letter = 'M';
    if (id == 'N') letter = 'N';
    if (id == 'O') letter = 'O';
    if (id == 'P') letter = 'P';
    if (id == 'Q') letter = 'Q';
    if (id == 'R') letter = 'R';
    if (id == 'S') letter = 'S';
    if (id == 'T') letter = 'T';
    if (id == 'U') letter = 'U';
    if (id == 'V') letter = 'V';
    if (id == 'W') letter = 'W';
    if (id == 'X') letter = 'X';
    if (id == 'Y') letter = 'Y';
    if (id == 'Z') letter = 'Z';

    if (id == 'a') letter = 'a';
    if (id == 'b') letter = 'b';
    if (id == 'c') letter = 'c';
    if (id == 'd') letter = 'd';
    if (id == 'e') letter = 'e';
    if (id == 'f') letter = 'f';
    if (id == 'g') letter = 'g';
    if (id == 'h') letter = 'h';
    if (id == 'i') letter = 'i';
    if (id == 'j') letter = 'j';
    if (id == 'k') letter = 'k';
    if (id == 'l') letter = 'l';
    if (id == 'm') letter = 'm';
    if (id == 'n') letter = 'n';
    if (id == 'o') letter = 'o';
    if (id == 'p') letter = 'p';
    if (id == 'q') letter = 'q';
    if (id == 'r') letter = 'r';
    if (id == 's') letter = 's';
    if (id == 't') letter = 't';
    if (id == 'u') letter = 'u';
    if (id == 'v') letter = 'v';
    if (id == 'w') letter = 'w';
    if (id == 'x') letter = 'x';
    if (id == 'y') letter = 'y';
    if (id == 'z') letter = 'z';

    if (id == '0') letter = '0';
    if (id == '1') letter = '1';
    if (id == '2') letter = '2';
    if (id == '3') letter = '3';
    if (id == '4') letter = '4';
    if (id == '5') letter = '5';
    if (id == '6') letter = '6';
    if (id == '7') letter = '7';
    if (id == '8') letter = '8';
    if (id == '9') letter = '9';

    if (id == '`') letter = '`';
    if (id == '~') letter = '~';
    if (id == '!') letter = '!';
    if (id == '@') letter = '@';
    if (id == '#') letter = '#';
    if (id == '$') letter = '$';
    if (id == '%') letter = '%';
    if (id == '^') letter = '^';
    if (id == '&') letter = '&';
    if (id == '*') letter = '*';
    if (id == '(') letter = '(';
    if (id == ')') letter = ')';
    if (id == '-') letter = '-';
    if (id == '_') letter = '_';
    if (id == '=') letter = '=';
    if (id == '+') letter = '+';
    if (id == '|') letter = '|';
    if (id == '\\') letter = '\\';
    if (id == '{') letter = '{';
    if (id == '}') letter = '}';
    if (id == '[') letter = ']';
    if (id == ';') letter = ';';
    if (id == ':') letter = ':';
    if (id == '\'') letter = '\'';
    if (id == '\"') letter = '\"';
    if (id == '.') letter = '.';
    if (id == ',') letter = ',';
    if (id == ',') letter = ',';
    if (id == '/') letter = '/';


    return letter;
}

string encode(string channel, string str, int key) {

    long channelid = 0;
    for (int i = 0; i < channel.length(); i++) {
        channelid += channel[i];
    }


    string message = DtH(channelid) + "-";
    for (int i = 0; i < str.length(); i++) {
        string hex = DtH((str[i] + key ) * channelid);
        while (hex.length() < DtH((channelid + key) * 255).length())
            hex = '0' + hex;
        message += hex;
    }

    return message;

}

void send(string channel, string message ,int key) {
    message = encode(channel, message, key);
    to_send.push(message);
    cout << message << endl;
}

string decode(string channel, string message, int key) {
    int i;

    string msg = "";
    string true_name = "";

    for (i = 0; message.length(); i++) {

        int letter = message[0];
        message.erase(0, 1);

        if (letter == 45) {
            break;
        }
        
        true_name += letter;
    }

    long channelid = 0;
    for (int y = 0; y < channel.length(); y++) {
        channelid += channel[y];
    }

    if (!(HtD(true_name) == channelid)) {
        return "new message on channel: " + true_name + ". you are currently on channel: " + channel + ".\n";
    }

    while (message.length()) {

        long x = (DtH((channelid + key) * 255)).length();
        
        string letter = "";
        for (int y = 0; y < x; y++) {
            letter += message[0];
            message.erase(0, 1);
        }
        long letter_id = HtD(letter);
        letter_id /= channelid;
        letter_id -= key;
        letter = itcc(letter_id);
        msg += letter;
    }

    return msg;

}

void recieve(string channel, int key) {
    for (int i = 0; !to_send.empty(); i++) {
        cout << decode(channel, to_send.top(), key) << endl;
        to_send.pop();
    }
}



int main()
{
    string channel = "";
    string key = "";
    cout << "Enter channel name: ";
    getline(cin >> ws, channel);
    cout << "Enter key: ";
    getline(cin >> ws, key);

    while (true) {
        string str = "";

        cout << "Enter text: ";
        getline(cin >> ws, str);
        send(channel, str, stoi(key));
        recieve(channel, 0);
    }
    
}