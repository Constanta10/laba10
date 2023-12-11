#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    const int MAX_SIZE = 100; // ������������ ������ �������
    ifstream inputFile("input.txt"); // �������� ����� ��� ������
    ofstream outputFile("output.txt"); // �������� ����� ��� ������

    if (!inputFile.is_open()) { // �������� ��������� �������� ����� ��� ������
        cout << "�� ������� ������� ���� ��� ������." << endl;
        return 1;
    }

    if (!outputFile.is_open()) { // �������� ��������� �������� ����� ��� ������
        cout << "�� ������� ������� ���� ��� ������." << endl;
        return 1;
    }
    int n;
    inputFile >> n; // ��������� ������ �������
    int arr[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        inputFile >> arr[i]; // ��������� �������� ������� �� �����
    }
    for (int i = n - 1; i >= 0; i--) {
        outputFile << arr[i] << " "; // ���������� �������� � �������� ������� � ����
    }
    inputFile.close(); // �������� ����� ��� ������
    outputFile.close(); // �������� ����� ��� ������
    cout << "������ ������� ���������� � ������� � ����"<<endl;
    system("pause");
    return 0;
}
