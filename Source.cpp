#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

/*
������� �������, ���������� ����� �����. 
����� ���� �����, ������ ������� �����, �������� ������������ �������. 
��������, ����  2 8 2 1 6 8 8 1 2 2 8 2 1. �����  2 8 8 2 8 1 6 8 8 1 2 8 2 8  8 2 8 1
*/

// ������� ��� ���������� ������� ���������� �� �������
queue<int> fillQueue(const vector<int>& elements) {
    queue<int> q;
    for (int elem : elements) {
        q.push(elem);
    }
    return q;
}

// ������� ��� ���������� ������������� �������� � �������
int findMax(const queue<int>& q) {

    // ����� ����������� ������� � ������������ ������������ ������� � ���� �������

}

// ������� ��� ������� ������������� �������� ����� ������� ��������� ������� ��������
queue<int> insertMaxAfterFirst(queue<int> q, int maxElement) {
    /*
    ����� ����������� ������� � ������������ �������, ������������ ����� �������, 
    � ������� �������� ������������ ������� ����� ������� ��������� ������� ��������
    */
}

// ������� ��� ������ ����������� �������
void printQ(queue<int> q) {

    // ����� ��������� ������� � ��������� � ����������

}

int main() {
    vector<int> elements = { 2, 8, 2, 1, 6, 8, 8, 1, 2, 2, 8, 2, 1 };

    queue<int> q = fillQueue(elements);
    int maxElement = findMax(q);
    queue<int> resultQueue = insertMaxAfterFirst(q, maxElement);

    printQ(resultQueue);

    return 0;
}
