
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

math = float(input("Expression: "))

val1 = math[0].strip()
val2 = math[-1].strip()
operator = math[{"+", "-", "*", "/" }]



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
