def main():
    ask = input("What time is it? ")
    result = convert(ask)
    print(result)

def convert(time):

    hours = ask.split(":")
    minutes = ask.split(":")

    hours = float(ask[0])
    minutes =float(ask[2])
    conv = hours.minutes

    if 7.0 <= conv <= 8.0:
        return "breakfast time"

    if 12.0 <= conv <= 13.0:
        return "lunch time"

    if 18.0 <= conv <= 19.0:
        return "dinner time"

    else:
        return ""


if __name__ == "__main__":
    main()
