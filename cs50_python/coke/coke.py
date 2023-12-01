def main():
    amount_due = 50
    print(f"Amount Due: {amount_due}")

    while True:

        inp = int(input("Insert Coin: "))
        amount_due, change_owed = insert(inp, amount_due)

        if change_owed > 0:
            print(f"Amount Due: {amount_due}")
        else:
            print(f"Change Owed: {amount_due}")




def insert(coin, amount_due):
    coins = {25, 10, 5}

    if coin in coins:
        amount_due -= coin
    else:
        print("Invalid coin (25, 10, 5)")

    return amount_due, max(0, -amount_due)


main()
