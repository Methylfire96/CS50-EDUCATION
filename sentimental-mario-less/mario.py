# TODO
def main():
    height = get_height()
    for row in range(height):
            print(" " * (height - row - 1) + "#" * (row + 1))

def get_height():
    while True:
        try:
            n = int (input("height: "))
            if n > 0:
                return n
        except ValueError:
            print("not an integer")
main()