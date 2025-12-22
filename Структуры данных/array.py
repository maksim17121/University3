def count_less_than_t(arr, t):
    count = 0
    for x in arr:
        if x < t:
            count += 1
    return count


def print_array(arr):
    for x in arr:
        print(x, end=" ")
    print()


def compare_counts(a, b, t):
    count_a = count_less_than_t(a, t)
    count_b = count_less_than_t(b, t)
    return count_a >= count_b


def compare_and_print(a, b, t):
    if compare_counts(a, b, t):
        print_array(a)
    else:
        print_array(b)

SIZE = 5

A = list(map(int, input("Введите элементы массива A: ").split()))
B = list(map(int, input("Введите элементы массива B: ").split()))
t = int(input("Введите значение t: "))


A = A[:SIZE]
B = B[:SIZE]

compare_and_print(A, B, t)
