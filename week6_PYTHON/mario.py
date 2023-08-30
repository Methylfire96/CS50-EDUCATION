#for i in range(3):
#    print("#")

from cs50 import get_int
##while True:
##    x = get_int("x: ")
##    if x > 0:
##        break
##for i in range(x):
##    print("#")

def main():
    height = get_height()
    for i in range(height):
        print("#")

def get_height():
    while True:
        n = get_int("height: ")
        if n > 0:
            break

    return n