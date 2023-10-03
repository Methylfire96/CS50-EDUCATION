from cs50 import get_string

greetings = get_string("Greetings: ")

if "hello" in greetings.lower():
    print("$0")
elif greetings.lower().startswith('h'):
    print("$20")
else:
    print("$100")
