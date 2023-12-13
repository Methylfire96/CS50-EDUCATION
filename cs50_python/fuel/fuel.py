def main():
    try:
        x = int(input("x: "))
        y = int(input("y: "))
        print(f"Fraction: {x}/{y}")
        fraction = (x / y)
        result = trans(fraction)
        print(result)

    except(ValueError, ZeroDivisionError):
        return False

def trans(s):
    

main()
