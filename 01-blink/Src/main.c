#include <stdint.h>

#define RCC_AHB2ENR  (*(volatile uint32_t*)0x4002104C)
#define GPIOA_MODER  (*(volatile uint32_t*)0x48000000)
#define GPIOA_ODR    (*(volatile uint32_t*)0x48000014)

int main(void)
{
    RCC_AHB2ENR |= 1;
    GPIOA_MODER &= ~(3U << 10);
    GPIOA_MODER |= (1U << 10);
    while(1){
    	GPIOA_ODR |= (1U << 5);
    	for(volatile int i = 0; i < 100000; i++){}
    	GPIOA_ODR &= ~(1U << 5);
    	for(volatile int i = 0; i < 100000; i++){}
    }
}
