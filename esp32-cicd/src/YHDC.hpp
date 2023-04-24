#include <stdio.h>
#include <stdint.h>

static float primary_peak_current ;

/**
 * @brief for testing that unity test framework is working
 *
 * 
 * @param a 
 * @param b 
 * @return int 
 */

int add (int a, int b)
{
    return a+b;
}
/**
 * @brief returns converted RMS current to peak
 * current by multiplying it 1.414
 * @param current is current range of sensors 0 - 100A
 * @return float 
 */

float pri_peak_current(uint8_t current=100)
{  primary_peak_current=current * 1.414;
    return primary_peak_current;
}

/**
 * @brief returns secondary coil peak current 
 * 
 * @return float 
 */
float sec_peak_current()
{
    return 1.0f;
}