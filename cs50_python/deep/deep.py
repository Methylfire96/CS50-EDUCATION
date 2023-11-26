def deep(d):
    if d == 42:
        return "Yes"
    else:
        return "No"



question = input("What is the answer to the Great Question of Life, the Universe and Everything? ")
result = deep(question)
print(result)
