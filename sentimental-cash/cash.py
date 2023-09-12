# TODO
from cs50 import get_float
def main():
    while True:
        dollars = get_float("How many cents do you get back?: ")
        cents = round(dollars * 100)
        if cents > 0:
            break

    coins = calc_coins(cents)
    print(coins)

def get_float(prompt):
    while True:
        try:
            value = float(input(prompt))
            if value >= 0:
                return value
        except ValueError:
            pass

def calc_coins(cents):
    coins = 0
    coin_values = [25, 10, 5, 1]

    for value in coin_values:
        coins+= cents // value
        cents %= value
    return coins

if __name__ == "__main__":
    main()

