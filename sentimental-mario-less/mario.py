# TODO
def main():
    height = get_height()
    for row in range(height, 0, -1):
        for col in range(row, height + 1):
            print("#", end ="")
        print()


def get_height():
    while True:
        try:
            n = int (input("height: "))
            if n > 0:
                return n
        except ValueError:
            print("not an integer")
main()