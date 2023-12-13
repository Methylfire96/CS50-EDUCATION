def main():
    try:
        x = int(input("x: "))
        y = int(input("y: "))
        print(f"Fraction: {x}/{y}")

    except(ValueError, ZeroDivisionError):
        return False

    fraction = (x / y)
    result = trans(fraction)
    print(result)

def trans(fraction):
    if fraction <= 0.1:
        return ("E")
    elif fraction <= 0.25:
        return ("25%")
    elif fraction <= 0.50:
        return ("50%")
    else:
        return("75%")


main()
