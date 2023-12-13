def main():
    while x, y > 0:
        x = int(input("x: "))
        y = int(input("y: "))
        print(f"Fraction: {x}/{y}")
        fraction = (x / y)
        result = trans(fraction)
        print(result)
    else:
        return False

def trans(s):
    

main()
