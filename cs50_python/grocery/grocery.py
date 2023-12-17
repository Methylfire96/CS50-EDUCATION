def main():
    List = []

    try:
        while True:
            groceries = input("")
            List[groceries].add()
            if groceries >= 1:
                groceries.count()
                groceries = groceries + 1

    except EOFError:
             pass

def list(li):
    total = sum(li.values())
    print(f"{groceries.count()} {total}")

main()
