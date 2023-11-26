

def convert(text):
    if ":)" in text and ":(" in text:
        return text.replace(":)", "🙂"), text.replace(":(", "🙁")





def main():
    text = input("How are you? ")
    faces = convert(text)
    print(faces)



main()
