import time, os, ctypes

def devide_array(array, number):
    for i in range(len(array)):
        array[i] /= number
    return array

def benchmark(array, number, iterations):
    t0 = time.perf_counter()
    for _ in range(iterations):
        devide_array(array, number)
    return time.perf_counter() - t0




lib_path = os.path.join(os.path.dirname(__file__), "lib.dll")
lib = ctypes.CDLL(lib_path)
length = 1000
number = 3.14

lib.benchmark.restype = ctypes.c_double
lib.benchmark.argtypes = [ctypes.POINTER(ctypes.c_float), ctypes.c_int, ctypes.c_float, ctypes.c_int]
FloatArray = ctypes.c_float * length
c_arr = FloatArray(*([1.0] * length))
arr = [1.0] * length

for iterations in [1000, 10000, 100000]:
    print(f"cpp_time_seconds: {float(lib.benchmark(c_arr, length, ctypes.c_float(number), iterations)):.6f}")
    print(f"python_time_seconds: {benchmark(arr, number, iterations)}")

