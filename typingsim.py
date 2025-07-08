print("a simple game")
print("the best game in the world!!!")
print("a TYPING SIMULATOR!!!!")

points = 0

while 1 == 1:
    print("\n\n\n type ANYTHING \n(remember to find all the letter comboes like abcd)\ntype [exit] to quit\n\n")
    anything = input("> ")
    print("you typed: ", anything)
    points = points + 1
    print("\nyou have ", points, " points")

    if anything == "abcd":
        print("WOW, a whole abcd combo!!!")
        print("+10 points")
        points = points + 10
    elif anything == "wxyz":
        print("WOW, a whole wxyz combo!!!")
        print("+10 points")
        points = points + 10
    elif anything == "qwertyuiop":
        print("WOW, a whole qwertyuiop combo!!!")
        print("+30 points")
        points = points + 30
    elif anything == "wasd":
        print("\nWOW, a whole wasd combo!!!")
        print("+10 points\n")
        points = points + 10
    elif anything == "exit":
        break
