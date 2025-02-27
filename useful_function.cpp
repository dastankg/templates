//
// Created by dastan on 27.02.25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;
    int x;
    auto it = lower_bound(v.begin(), v.end(), x);
// it указывает на первый элемент, который >= x

    auto it1 = upper_bound(v.begin(), v.end(), x);
// it указывает на первый элемент, который > x


// Функция nth_element частично сортирует массив так, что на
// позиции n находится элемент, который был бы там после полной сортировки
    std::nth_element(v.begin(), v.begin() + x, v.end());


    int* ptr = &v[2];  // Указатель на элемент 30
// Вычисляем индекс
    size_t index = ptr - &v[0];  // или ptr - v.data()
// index будет равен 2
}