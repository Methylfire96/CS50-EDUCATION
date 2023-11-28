def main():
    time = input("What time is it? ")
    result = convert(time)
    print(result)

def convert(time):


    converts = time.split(":")
    hours = float(time[0])
    minutes = float(time[-1])
    conv = converts(hours, minutes)

    if 7.0 <= conv <= 8.0:
        result = "breakfast time"

    if 12.0 <= conv <= 13.0:
        result = "lunch time"

    if 18.0 <= conv <= 19.0:
        result = "dinner time"

    else:
        result = ""
    print(f"{result}")

if __name__ == "__main__":
    main()
