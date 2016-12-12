# Basic Array Search Exercise

## Scenario
I have a sorted array and I need to a number from this array. What should I do?
Of course I can use the Binary Search algorithm.

## Usage
```bash
$ git clone https://github.com/erenhatirnaz/algo-and-ds-exercises.git
$ cd algo-and-ds-exercises/binary-search/basic-array-search
$ g++ array-search.c -o array-search
$ ./array-search
```

## Example Output
Sorted Array = `{3, 5, 8, 17, 24, 44, 56, 75, 82, 105}`

```
Key = 56 // the number I need.

Step=1: Left=0[3], Middle=5[44], Right=10[56]  // It seems close
Step=2: Left=6[56], Middle=8[82], Right=10[56] // ...very close!
Step=3: Left=6[56], Middle=6[56], Right=7[75]  // Gotcha!
```
I'm so happy. I found the number that I needed. :smile:
