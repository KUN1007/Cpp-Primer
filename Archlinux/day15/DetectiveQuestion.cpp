#include<iostream>

void kun() {
    char option[] = { 'A', 'B', 'C', 'd' };
    char result[10];

}

bool Q2(char chr[]) {
    switch (chr[1]) {
        case 'A':
            return chr[4] = 'C';
        case 'B':
            return chr[4] = 'D';
        case 'C':
            return chr[4] = 'A';
        case 'D':
            return chr[4] = 'B';
        default:
            return false;
    }
}

bool Q4(char chr[]) {
    switch (chr[3]) {
        case 'B':
            return chr[1] = chr[6];
        case 'C':
            return chr[0] = chr[8];
        case 'D':
            return chr[5] = chr[9];
        default:
            return false;
    }
}

bool Q5(char chr[]) {
    switch (char[4]) {
        case 'A':
            return chr[7] = 'A';
        case 'B':
            return chr[3] = 'B';
        case 'C':
            return chr[8] = 'C';
        case 'D':
            return chr[6] = 'D';
        default:
            return false;
    }
}

bool Q6(char chr[]) {
    switch (chr[5]) {
        case 'A':
            return (chr[1] == chr[3]) && (chr[3] == chr[7]);
        case 'B':
            return (chr[0] == chr[5]) && (chr[5] == chr[7]);
        case 'C':
            return (chr[2] == chr[9]) && (chr[9] == chr[7]);
        case 'D':
            return (chr[4] == chr[8]) && (chr[8] == chr[7]);
        default:
            return false;
    }
}

bool Q8(char chr[]) {
    switch (chr[7]) {
        case 'A':
            return abs(chr[0] - chr[6]) > 1;
        case 'B':
            return abs(chr[0] - chr[4]) > 1;
        case 'C':
            return abs(chr[0] - chr[1]) > 1;
        case 'D':
            return abs(chr[0] - chr[9]) > 1;
        default:
            return false;
    }
}

bool Q9(char chr[]) {
    switch (chr[8]) {
        case 'A':
            return (chr[0] == chr[5] || chr[4] == chr[5]);
        case 'B':
            return (chr[0] == chr[5] || chr[4] == chr[9]);
        case 'C':
            return (chr[0] == chr[5] || chr[4] == chr[1]);
        case 'D':
            return (chr[0] == chr[5] || chr[4] == chr[8]);
        default:
            return false;
    }
}

bool Q10(char chr[]) {
    switch (chr[9]) {
        case 'A':
            return 
        case 'B':
        case 'C':
        case 'D':
        default:
            return false;
    }
}

template<class T>
int abs(T &a, T &b) {
    return a - b > 0 ? a - b : b - a;
}

int main() {
    return 0;
}


