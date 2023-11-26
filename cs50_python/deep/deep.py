def deep(d):
    if d == 42:
        print("Yes")
    else:
        print("No")



question = input("What is the answer to the Great Question of Life, the Universe and Everything? ")
result = deep(question)
print(result)
