#include <iostream>
#include <set>

using namespace std;

set<int> get_negative_elements_only_from_b(set<int>* set_a, set<int>* set_b) {
    set<int> result;
    for (int element : *set_b) {
        if (element < 0 && set_a->find(element) == set_a->end()) {
            result.insert(element);
        }
    }
    return result;
}

int main() {
    set<int> set_a, set_b;
    int x;

    cout << "Введите множество A: ";
    while (cin >> x) {
        set_a.insert(x);
        if (cin.peek() == '\n') break;
    }

    cout << "Введите множество B: ";
    while (cin >> x) {
        set_b.insert(x);
        if (cin.peek() == '\n') break;
    }

    auto result = get_negative_elements_only_from_b(&set_a, &set_b);

    cout << "Результат: ";
    for (int elem : result) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
