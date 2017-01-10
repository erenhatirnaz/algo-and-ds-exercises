# Number Guessing Game

## Scenario
`saw.sh` is a virus. When you run this file,
```
─────▄██▀▀▀▀▀▀▀▀▀▀▀▀▀██▄─────
────███───────────────███────
───███─────────────────███───
──███───▄▀▀▄─────▄▀▀▄───███──
─████─▄▀────▀▄─▄▀────▀▄─████─
─████──▄████─────████▄──█████
█████─██▓▓▓██───██▓▓▓██─█████
█████─██▓█▓██───██▓█▓██─█████
█████─██▓▓▓█▀─▄─▀█▓▓▓██─█████
████▀──▀▀▀▀▀─▄█▄─▀▀▀▀▀──▀████
███─▄▀▀▀▄────███────▄▀▀▀▄─███
███──▄▀▄─█──█████──█─▄▀▄──███
███─█──█─█──█████──█─█──█─███
███─█─▀──█─▄█████▄─█──▀─█─███
███▄─▀▀▀▀──█─▀█▀─█──▀▀▀▀─▄███
████─────────────────────████
─███───▀█████████████▀───████
─███───────█─────█───────████
─████─────█───────█─────█████
───███▄──█────█────█──▄█████─
─────▀█████▄▄███▄▄█████▀─────
──────────█▄─────▄█──────────
──────────▄█─────█▄──────────   I WANT TO PLAY A GAME. I KEEP A RANDOM NUMBER
───────▄████─────████▄───────   BETWEEN 1 AND 100. I ONLY GIVE YOU 10 TRIALS.
─────▄███████───███████▄─────   YOU HAVE TO FIND THE RANDOM NUMBER. OTHERWISE
───▄█████████████████████▄───   I WILL DELETE ALL YOUR FILES ON THIS COMPUTER.
─▄███▀───███████████───▀███▄─   MAKE YOUR CHOICE!! mWahahaha!
███▀─────███████████─────▀███
▌▌▌▌▒▒───███████████───▒▒▐▐▐▐
─────▒▒──███████████──▒▒─────
──────▒▒─███████████─▒▒──────
───────▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒───────
─────────████░░█████─────────
────────█████░░██████────────
──────███████░░███████───────
─────█████──█░░█──█████──────
─────█████──████──█████──────
──────████──████──████───────
──────████──████──████───────
──────████───██───████───────
──────████───██───████───────
──────████──████──████───────
─██────██───████───██─────██─
─██───████──████──████────██─
─███████████████████████████─
─██─────────████──────────██─
─██─────────████──────────██─
────────────████─────────────
─────────────██──────────────

```
**OMG! :scream:** What do we do now!?... Do not be afraid! We have the binary
search algorithm. We can find the random number in 7 trials maximum.

## Usage
```sh
$ git clone https://github.com/erenhatirnaz/algo-and-ds-exercises.git
$ cd binary-search/number-guessing-game/
$ make
$ ./ngg
```
*Don't be afraid to run `ngg`. It's just a game(or may be not, who knows!?),
your files will not be deleted.*

## Example Output
```
BSA vs. SAW. Let's Fight!
Round 1:
        BSA: My guess is 50.
        SAW: Your guess is low.
Round 2:
        BSA: My guess is 75.
        SAW: Your guess is high.
Round 3:
        BSA: My guess is 62.
        SAW: Your guess is low.
Round 4:
        BSA: My guess is 68.
        SAW: Your guess is high.
Round 5:
        BSA: My guess is 65.
        SAW: Your guess is low.
Round 6:
        BSA: My guess is 66.
        SAW: Your guess is low.
Round 7:
        BSA: My guess is 67.
        SAW: Correct guess. You saved your files!

> BSA: Gotcha! The number is 67. I found it in 7 trials!
```

Yayy! We saved our **very** important files! and `saw.sh` file
was deleted.
