

def main():
    dollars = dollars_to_float(input("How much was the meal? "))
    percent = percent_to_float(input("What percentage would you like to tip? "))
    tip = dollars * percent
    print(f"Leave ${tip:.2f}")

def dollars_to_float(d):
    try:
        return float(d[1:])
    except ValueError:
        return 0.00


def percent_to_float(p):
    try:
        return float(p[1:]) / 100.0
    except ValueError:
        return 0.00
main()

