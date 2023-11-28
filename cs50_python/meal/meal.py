def main():
    time = input("What time is it? ")
    result = convert(time)
    print(result)

def convert(time):

    
    hours, minutes = time.split(":")
    hours = float(time[0])
    minutes = float(time[2])
    conv = hours and minutes

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
