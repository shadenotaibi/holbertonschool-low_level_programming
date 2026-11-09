# Green Efficiency Analysis

## Measurement Methodology

All programs were compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long` and executed in the same sandbox environment, so every measurement shares the same hardware and operating system conditions. Time was measured inside each program with `clock()`: the program reads the clock before and after the code under test, subtracts the two values, and divides by `CLOCKS_PER_SEC` to obtain seconds. Each program was executed at least three consecutive times, and the full output of every run was recorded in a metrics file, from which averages were computed. Only `instrumentation_lab.c` was modified: timing calls were added around three phases (BUILD_DATA, PROCESS, REDUCE) and around the whole run (TOTAL), which starts before the first phase and ends after the last.

## Observed Performance Differences

The baseline loop executed 100000000 iterations and took 0.228859, 0.229280 and 0.227110 seconds in three runs, an average of 0.228416 seconds. The values are close but not identical, which shows natural timing variability.

In the comparison experiment, both algorithms count the even numbers of an array of 50,000 integers. The naive algorithm took 2.769265, 2.773059 and 2.771144 seconds (average 2.771156 seconds), while the single-pass algorithm took 0.000106, 0.000106 and 0.000107 seconds (average about 0.000106 seconds). The naive implementation is therefore roughly 26,000 times slower, which matches the expected complexity: about 1.25 billion comparisons for the naive version against 50,000 for the single-pass version. The returned counts differ (625025000 against 25000) because the provided naive logic counts each even element repeatedly; it was left unchanged.

In the instrumentation lab, the phases took BUILD_DATA 0.000285 s, PROCESS 0.000319 s and REDUCE 0.000145 s, with a TOTAL of 0.000754 s. The phases add up to 0.000749 s, so about 0.000005 s of TOTAL is unattributed, most likely the cost of the `clock()` calls. PROCESS took the largest share, about 42 percent of TOTAL, followed by BUILD_DATA (about 38 percent) and REDUCE (about 19 percent).

## Relation Between Runtime and Energy Consumption

This project does not measure power in watts, so runtime is only a proxy: a processor that stays busy longer generally draws power longer, so the same task finished in less time usually consumes less energy. In my measurements, the naive algorithm kept the CPU active for about 2.771 seconds, while the single-pass algorithm needed about 0.000106 seconds for the same problem. This suggests a large difference in energy use, but the exact amount cannot be stated from these data alone.

## Limitations of the Experiment

First, `clock()` has limited resolution, so very short durations, such as the single-pass algorithm (about 0.0001 seconds) and each instrumented phase, carry a large relative error. Second, all measurements ran in one sandbox where other processes can influence timing, so results may differ on other machines. Third, only three runs were collected per program, a small sample for any statistical claim. Fourth, runtime is not energy: power draw also depends on CPU frequency, idle states and memory access, none of which were measured.

## Practical Engineering Takeaway

Choosing a lower-complexity algorithm had a far larger effect than any other factor I measured: the O(n) approach replaced the O(n^2) approach and reduced runtime from about 2.77 seconds to about 0.0001 seconds. Before optimizing, measure where time is spent, as the instrumentation lab shows (PROCESS took the largest share), and repeat measurements to account for variability. Efficient code is not only faster; it keeps the CPU busy for less time, which is a responsible default for software that runs at scale.
