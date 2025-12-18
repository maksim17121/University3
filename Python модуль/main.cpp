#include "time.h"
#include <ctime>

extern "C" {
    
    static float* divide_array(float array[], int length, float number) {
        for (int i = 0; i < length; i++) {
            array[i] /= number;
        }
        
        return array;
    }
    
    double benchmark(float array[], int length, float number, int iterations) {
        double start = clock();
       
       for(int i = 0; i < iterations; i++) {
           divide_array(array, length, number);
       } 
       
       return ((double) clock() - start) / CLOCKS_PER_SEC;
    }
}