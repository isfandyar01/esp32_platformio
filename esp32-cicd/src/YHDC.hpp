#include <stdio.h>
#include <stdint.h>

static float peak_current ;

int add (int a, int b)
{
    return a+b;
}

float rms_to_peak_current()
{  peak_current=1;
    return peak_current;
}