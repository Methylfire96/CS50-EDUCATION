def main():
    amount_due = 50
    print(f"Amount Due: {amount_due}")

    while amount_due > 0:
        inp = int(input("Insert Coin: "))
        amount_due = insert(inp, amount_due)
        if amount_due <= 0:
            print("Change Owed: 0")
        else:
            print(f"Amount Due: {amount_due}")





def insert(coin, amount_due):
    coins = {25, 10, 5}

    if coin in coins:
        amount_due -= coin
        if amount_due < 0:
            return amount_due + coin
    else:
        print("Invalid coin (25, 10, 5)")

    return amount_due


main()
