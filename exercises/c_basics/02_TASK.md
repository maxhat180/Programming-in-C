# Exercise 02 - Functions and Pointers

An STM32F446 ADC commonly produces a 12-bit result, so its valid numeric range
is 0 through 4095. This desktop exercise simulates correcting one ADC sample
and preventing it from leaving that range.

## Your tasks

1. Complete `apply_offset` so it changes `adc_sample` in `main` through the
   supplied pointer.
2. Complete `clamp_sample` so values below `minimum` return `minimum`, values
   above `maximum` return `maximum`, and valid values pass through unchanged.
3. Remove the `(void)` placeholder lines once their parameters are genuinely
   used.
4. Build with `Ctrl+Shift+B` and resolve every warning.
5. Run:

   ```powershell
   .\build\c-practice\02_functions_and_pointers.exe
   ```

## Expected output

```text
Raw sample: 4070
Corrected sample: 4095
```

## Questions to answer in your own words

- Why does `apply_offset` receive `&adc_sample` rather than `adc_sample`?
- Inside `apply_offset`, what is the difference between `sample` and
  `*sample`?
- Why does `clamp_sample` not require a pointer to return its result?

## Optional experiments

- Change the initial sample to `20` and the offset to `-50`.
- Print the address in `main` and the pointer value inside `apply_offset`.
  Confirm that they identify the same location.
