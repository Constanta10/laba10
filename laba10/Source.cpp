#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    const int MAX_SIZE = 100; // Максимальный размер массива
    ifstream inputFile("input.txt"); // Открытие файла для чтения
    ofstream outputFile("output.txt"); // Открытие файла для записи

    if (!inputFile.is_open()) { // Проверка успешного открытия файла для чтения
        cout << "Не удалось открыть файл для чтения." << endl;
        return 1;
    }

    if (!outputFile.is_open()) { // Проверка успешного открытия файла для записи
        cout << "Не удалось открыть файл для записи." << endl;
        return 1;
    }
    int n;
    inputFile >> n; // Считываем размер массива
    int arr[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        inputFile >> arr[i]; // Считываем элементы массива из файла
    }
    for (int i = n - 1; i >= 0; i--) {
        outputFile << arr[i] << " "; // Записываем элементы в обратном порядке в файл
    }
    inputFile.close(); // Закрытие файла для чтения
    outputFile.close(); // Закрытие файла для записи
    cout << "Массив успешно перевернут и записан в файл"<<endl;
    system("pause");
    return 0;
}
