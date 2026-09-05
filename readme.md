# Guess A Number Lab Algorithm

```text
main():

    userName as char[20]
    response as char[20]
    guesses as integer
    keepGoing starts as true
    turns as integer

    generate random number every game
    random number generated between 1-100
    correct integer number = random generated number

    prompt user for userName
    greet user

    while keepGoing is true:

        turns +1
        prompt user for guess

        if guess < correct:
            print higher

        else if guess > correct:
            print lower

        else:
            print correct
            keepGoing is false

    if turn < 7:
        print very good

    if turn > 7:
        print you're garbage
```
 
