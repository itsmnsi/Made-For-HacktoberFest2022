# Program for Stone-Paper-Scissors Game

import random

while True:

    print('Rock Paper Scissors Game : [r] for rock, [p] for paper, [s] for scissors ')
    player = input('Enter [r] or [p] or [s] : ')
    choice = ['r', 'p', 's']
    computer = random.choice(choice)
    player=player.lower()

    if not player in choice:
        print('Invalid Input : Try again')
        continue

    print(f"You choose : {player}, computer choose : {computer}")

    if player == computer:
        print('Game tie')

    elif(player == 'r'):
        if computer == 's':
            print('You Win')
        else:
            print('You Lose')

    elif(player == 'p'):
        if computer == 'r':
            print('You Win')
        else:
            print('You Lose')

    elif(player == 's'):
        if computer == 'p':
            print('You Win')
        else:
            print('You Lose')

    continue