#include<iostream>
#include<vector>

int count(char c, char chr[]);
int GetMinCount(char chr[]);
int GetSubCount(char chr[]);
bool check(char chr[]);
void kun();

int main() {
    kun();
    return 0;
}

void kun() {
    char option[] = { 'A', 'B', 'C', 'D' };
    char result[10];
    int count = 0;
    for (auto c1 : option) {
        for (auto c2 : option) {
            for (auto c3 : option) {
                for (auto c4 : option) {
                    for (auto c5 : option) {
                        for (auto c6 : option) {
                            for (auto c7 : option) {
                                for (auto c8 : option) {
                                    for (auto c9 : option) {
                                        result[0] = c1;
                                        result[1] = c2;
                                        result[2] = result[5];
                                        result[3] = c3;
                                        result[5] = c5;
                                        result[6] = c6;
                                        result[7] = c7;
                                        result[8] = c8;
                                        result[9] = c9;
                                        if (check(result)) {
                                            for (auto i : result)
                                                std::cout << i << " ";
                                            std::cout << '\n';
                                            goto KUN;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    KUN:std::cout << "Task complete!" << '\n';
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
    switch (chr[4]) {
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

bool Q7(char chr[]) {
    int min = GetMinCount(chr);
    switch (chr[6]) {
        case 'A':
            return count('C', chr) == min;
        case 'B':
            return count('B', chr) == min;
        case 'C':
            return count('A', chr) == min;
        case 'D':
            return count('D', chr) == min;
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
    int sub = GetSubCount(chr);
    switch (chr[9]) {
        case 'A':
            return sub == 3;
        case 'B':
            return sub == 2;
        case 'C':
            return sub == 4;
        case 'D':
            return sub == 1;
        default:
            return false;
    }
}

int count(char c, char chr[]) {
    int count = 0;
    for (auto i = 0; i != 9; ++i) {
        if (chr[i] == c) {
            count++;
        }
    }
    return count;
}

int GetMinCount(char chr[]) {
    std::vector<int> Min;
    Min.push_back(count('A', chr));
    Min.push_back(count('B', chr));
    Min.push_back(count('C', chr));
    Min.push_back(count('D', chr));
    int min = 10;
    for (auto i : Min) {
        if (i < min)
            min = i;
    }
    return min;
}

int GetSubCount(char chr[]) {
    std::vector<int> Max;
    Max.push_back(count('A', chr));
    Max.push_back(count('B', chr));
    Max.push_back(count('C', chr));
    Max.push_back(count('D', chr));
    int max = 0;
    for (auto i : Max) {
        if (i > max)
            max = i;
    }
    return max - GetMinCount(chr);
}

bool check(char chr[]) {
    return Q2(chr) && Q4(chr) && Q5(chr) && Q6(chr) && Q7(chr) && Q8(chr) && Q9(chr) && Q10(chr);
}

template<class T>
int abs(T &a, T &b) {
    return a - b > 0 ? a - b : b - a;
}
