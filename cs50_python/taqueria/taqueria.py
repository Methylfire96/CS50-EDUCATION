dict = {
    "Baja Taco": 4.25,
    "Burrito": 7.50,
    "Bowl": 8.50,
    "Nachos": 11.00,
    "Quesadilla": 8.50,
    "Super Burrito": 8.50,
    "Super Quesadilla": 9.50,
    "Taco": 3.00,
    "Tortilla Salad": 8.00
}

def main():
        order = {}

        try:
            while True:
                item = input("Item: ").title()

                if item in dict:
                    order[item] = order.get(item, 0) + dict[item]
                    sum_up(order)

        except EOFError:
             pass

def sum_up(order):
     total = sum(order.values())
     print(f"${total:.2f}")

main()
