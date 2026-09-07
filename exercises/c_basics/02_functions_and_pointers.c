#include <stdio.h>

static int clamp_sample(int sample, int minimum, int maximum);
static void apply_offset(int *sample, int offset);

int main(void)
{
    int adc_sample = 4070;

    printf("Raw sample: %d\n", adc_sample);

    apply_offset(&adc_sample, 40);
    adc_sample = clamp_sample(adc_sample, 0, 4095);

    printf("Corrected sample: %d\n", adc_sample);

    return 0;
}

static void apply_offset(int *sample, int offset)
{
    /* TODO: add offset to the integer that sample points to. */
    (void)sample;
    (void)offset;
}

static int clamp_sample(int sample, int minimum, int maximum)
{
    /* TODO: return minimum when sample is too low. */
    /* TODO: return maximum when sample is too high. */
    /* Otherwise, return sample unchanged. */
    (void)minimum;
    (void)maximum;
    return sample;
}
