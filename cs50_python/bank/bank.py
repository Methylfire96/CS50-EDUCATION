greeting = input("Greeting: ")

if greeting.lower().startswith("h"):
    print("$20")
elif "hello" in greeting.lower():
    print("$0")
else:
    print("$100")
