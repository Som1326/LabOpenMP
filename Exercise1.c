#include <omp.h>
#include <stdio.h>

int main() {
    #pragma omp parallel
    {
        if (omp_get_thread_num() % 2)
            printf("I am Even thread named %d\n",omp_get_thread_num());
        else
            printf("I am Odd thread named %d\n",omp_get_thread_num());
    }
    return 0;
}