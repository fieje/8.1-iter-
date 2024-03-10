#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

int FindFourthFromEndDotIndex(char* str, int len) {
    int dotCount = 0;
    for (int i = len - 1; i >= 0; --i) {
        if (str[i] == '.') {
            ++dotCount;
            if (dotCount == 4) {
                return i; 
            }
        }
    }
    return -1; 
}

void ReplaceDotsWithStars(char* str, int len) {
    for (int i = 0; i < len; ++i) {
        if (str[i] == '.') {
            str[i] = '*'; 
            str[i + 1] = '*'; 
        }
    }
}

int main() {
    SetConsoleOutputCP(1251);
    char str[101];
    cout << "������ �����:" << endl;
    cin.getline(str, 100);
    int len = strlen(str);

    int fourthFromEndDotIndex = FindFourthFromEndDotIndex(str, len);
    if (fourthFromEndDotIndex != -1) {
        cout << "̳�������������� �������� ������ �� ����: " << fourthFromEndDotIndex << endl;
    }
    else {
        cout << "�������� ������ �� ���� �� ��������." << endl;
    }

    ReplaceDotsWithStars(str, len);
    cout << "������� �����: " << str << endl;

    return 0;
}
