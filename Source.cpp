#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

/*
Создать очередь, содержащую целые числа. 
После всех чисел, равных первому числу, вставить максимальный элемент. 
Например, было  2 8 2 1 6 8 8 1 2 2 8 2 1. Стало  2 8 8 2 8 1 6 8 8 1 2 8 2 8  8 2 8 1
*/

// Функция для заполнения очереди элементами из вектора
queue<int> fillQueue(const vector<int>& elements) {

    // Принимает вектор элементов и возвращает очередь, заполненную этими элементами
    
}

// Функция для нахождения максимального элемента в очереди
int findMax(const queue<int>& q) {

    // Принимает очередь и возвращает максимальный элемент в этой очереди

}

// Функция для вставки максимального элемента после каждого вхождения первого элемента
queue<int> insertMaxAfterFirst(queue<int> q, int maxElement) {
    /*
    Принимает очередь и максимальный элемент, возвращает новую очередь, 
    в которую вставлен максимальный элемент после каждого вхождения первого элемента
    */
}

// Функция для вывода содержимого очереди
void printQ(queue<int> q) {
    // Принимает очередь и выводит её содержимое
}

int main() {
    vector<int> elements = { 2, 8, 2, 1, 6, 8, 8, 1, 2, 2, 8, 2, 1 };

    queue<int> q = fillQueue(elements);
    int maxElement = findMax(q);
    queue<int> resultQueue = insertMaxAfterFirst(q, maxElement);

    printQ(resultQueue);

    return 0;
}
