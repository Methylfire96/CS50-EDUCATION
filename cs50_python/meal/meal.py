def main():
    x = input("What time is it? ")
    convert(x)


def convert(time):

    hours, minutes = map(float, time.split(":"))

    conv = hours + minutes/60

    result = ""

    if 7.0 <= conv <= 8.0:
        result = "breakfast time"

    if 12.0 <= conv <= 13.0:
        result = "lunch time"

    if 18.0 <= conv <= 19.0:
        result = "dinner time"

    print(result)

if __name__ == "__main__":
    main()
