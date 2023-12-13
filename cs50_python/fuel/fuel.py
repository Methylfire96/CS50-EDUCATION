def main():
     while True:
        fraction_input = input("Fraction: ")
        result = calculate_percentage(fraction_input)

        if isinstance(result, int):
            print(f"{result}%")
        else:
            print(result)

def calculate_percentage(fraction):
    while True:
        try:
            x, y = map(int, fraction.split('/'))

            if x <= 0 or y <= 0:
                raise ValueError("Invalid fraction")

            percentage = (x / y) * 100

            if percentage <= 1:
                return "E"
            elif percentage >= 99:
                return "F"
            else:
                return round(percentage)

        except ZeroDivisionError:
            print("Error: Division by zero. Please enter a valid fraction.")


        except ValueError:
            print("Error: Invalid input. Please enter a valid fraction.")


if __name__ == "__main__":
    main()



