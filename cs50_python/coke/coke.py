def main():
    print("Amount Due: 50")
    inp = int(input("Insert Coin: "))
    calc = insert(inp)
    print(f"Amount Due: {calc}")





def insert(coin):
    coins = {25, 10, 5}
    due = 50

    if coin in coins:
        result = due - coin
        return result
    else:
        print("Invalid coin (25, 10, 5)")
        return due


main()
