
def add(x, y):
    return x + y
def sub(x, y):
    return x - y
def mult(x, y):
    return x * y
def div(x, y):
    if y != 0:
        return x / y
    else:
        return "Cant divide through zero!"

math = input("Expression: ")

store = math.split()

val1 = float(store[0])
operator = (store[1])
val2 = float(store[2])


if operator == "+":
    result = add(val1, val2)

elif operator == "-":
    result = sub(val1, val2)

elif operator == "*":
    result = mult(val1, val2)

elif operator == "/":
    result = div(val1, val2)

else:
    result = "wrong operator"

print(f"{result}")
