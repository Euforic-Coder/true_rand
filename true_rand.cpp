#include "true_rand.h"

int true_rand() {
    unsigned int now = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    srand(now);
    int r = rand();
    return r;
}
