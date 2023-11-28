def main():
    time = input("What time is it? ")
    result = convert(time)

def convert(time):
    conv = float(time)

    if 7.0 <= time <= 8.0:
        return "breakfast time"

    if 12.0 <= time <= 13.0:
        return "lunch time"

    if 18.0 <= time <= 19.0:
        return "dinner time"

    else:


if __name__ == "__main__":
    main()
