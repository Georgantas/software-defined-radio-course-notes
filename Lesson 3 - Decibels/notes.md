
https://greatscottgadgets.com/sdr/3/

1 dB = 1/10 Bel
10 db = 1 Bel

A bel is a description of orders of magnitude (powers of 10) of a ratio.

Therefore, 10:1 -> 1 Bel and 100:1 -> 2 Bel.

So A/B=10^n

Then, you just multiply the Bels by 10 to get dbs.

Approximations (for power only):
- 3 dB ~= 2:1 (a doubling is 3 dB)

- 10 dB = 10:1

Using those two, you can figure out how to convert most magnitudes remembering that a multiplication of magnitude is an addition of decibels.

It is useful to write what your magnitude refers to after the dB. For example: If john is 2 times the height of mike, John's height is 3 dB_mike.

dB_m means decibels relative to milliwatts.

Common mistakes:
- Not writing what the dB is relative to.
- Amplitude is not power. Power is proportional to the square of the amplitude.
- Negatives. Example: When describing something that's lossy, saying there's "-5 dB loss" is not right. It's correct to say there's "-5 dB **gain**".

| decibel | approximate ratio (for powers) |
| ------- | ------------------------------ |
| 0 dB    | 1:1                            |
| 1 dB    | 1.28:1                         |
| 2 dB    | 1.6:1                          |
| 3 dB    | 2:1                            |
| 4 dB    | 2.56:1                         |
| 5 dB    | 3.2:1                          |
| 6 dB    | 4:1                            |
| 7 dB    | 5.12:1                         |
| 8 dB    | 6.4:1                          |
| 9 dB    | 8:1                            |
| 10 dB   | 10:1                           |
| 11 dB   | 12.8:1                         |
| 12 dB   | 16:1                           |
| 13 dB   | 20:1                           |
| 14 dB   | 25.6:1                         |
| 15 dB   | 32:1                           |
| 16 dB   | 40:1                           |
| 17 dB   | 51.2:1                         |
| 18 dB   | 64:1                           |
| 19 dB   | 80:1                           |
| 20 dB   | 100:1                          |
| 21 dB   | 128:1                          |
| 22 dB   | 160:1                          |
| 23 dB   | 200:1                          |
| 24 dB   | 256:1                          |
| 25 dB   | 320:1                          |
| 26 dB   | 400:1                          |
| 27 dB   | 512:1                          |
| 28 dB   | 640:1                          |
| 29 dB   | 800:1                          |
| 30 dB   | 1024:1                         |

These are approximations. 30 dB is actually 1000:1 for example. This table was constructed starting at 0 dB using the 3 dB and 10 dB heuristics from above.
