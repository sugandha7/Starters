# A game to guess the correct number.
number = 23
running = True

while running == True:
    guess = int(input("Enter your guess:"))
    if guess == number:
        print("Correct guess!")
        running = False
    elif guess < number:
        print("Guess is lower than the number!")
    else:
        print("Guess is higher than the number!")
else:
    print("While loop is over")
    
print("Done")
