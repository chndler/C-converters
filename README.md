# C-converters
Various classes for converting between hex, decimal, any base.

## convert2base
Converts decimal number to any base. Shows process for base conversion using succession of Euclidean divisions. Useful for understanding the process of base conversions.
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


 
## convert2hex
Converts decimal to hexadecimal. Shows process for base conversion using succession of Euclidean divisions. Useful for understanding the process of base conversions to hex.
```sh
./convert2hex 1030
1030 = 64 * 16 + 6   (6)
  64 = 4 * 16 + 0    (0)
   4 = 0 * 16 + 4    (4)
0x406
```



## convert2tenandhex
Converts decimal to hex, returns original decimal and hex variant in single line. 
```sh
./convert2tenandhex 34
34 22 
```
