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

def trans(fraction):
    if fraction <= 0.1:
        return ("E")
    elif fraction <= 0.25:
        return ("25%")
    elif fraction <= 0.50:
        return ("50%")
    elif fraction <= 0.75:
        return("75%")
    else:
        return("F")

main()
