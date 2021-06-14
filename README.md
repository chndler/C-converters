# C-converters
Various classes for converting between hex, decimal, any base.

Shows process for base conversion using succession of Euclidean divisions. Useful for understanding the process of base conversions.

## convert2base
Converts to any base
```sh
./convert2base 2 100
100 = 50 * 2 + 0  (0)
 50 = 25 * 2 + 0  (0)
 25 = 12 * 2 + 1  (1)
 12 = 6 * 2 + 0   (0)
  6 = 3 * 2 + 0   (0)
  3 = 1 * 2 + 1   (1)
  1 = 0 * 2 + 1   (1)
1100100
```
