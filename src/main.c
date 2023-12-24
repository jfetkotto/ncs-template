#include <zephyr/kernel.h>

int main(void) {
    for (;;) {
        k_yield();
    }
}
