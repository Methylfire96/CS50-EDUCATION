def deep(d):
    right = {"42", "forty-two", "forty two"}

    if d.lower().strip() in right:
        return "Yes"
    else:
        return "No"



question = input("What is the answer to the Great Question of Life, the Universe and Everything? ")
result = deep(question.lower())
print(result)
