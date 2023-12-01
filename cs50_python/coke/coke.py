def main():
    print("Amount Due: 50")
    inp = input("Insert Coin: ")
    calc = insert(inp)
    print(f"{calc}")





def insert(c):
    coins = {25, 10 ,5}
    due = 50
    if coins in due:
        result = due - coins
        return result





main()
