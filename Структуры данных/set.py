def get_negative_elements_only_from_b(set_a, set_b):
    result = set()
    for element in set_b:
        if element < 0 and element not in set_a:
            result.add(element)
    return result



set_a = set(map(int, input("Введите множество A: ").split()))
set_b = set(map(int, input("Введите множество B: ").split()))

result = get_negative_elements_only_from_b(set_a, set_b)
print("Результат:", result)
