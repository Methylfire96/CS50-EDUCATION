def type(filename):
    dict = {
        ".gif": "image/gif",
        ".jpg": "image/jpeg",
        ".jpeg": "image/jpeg",
        ".png": "image/png",
        ".pdf": "application/pdf",
        ".txt": "text/plain",
        ".zip": "application/zip",
        }
    filename = filename.strip()
    ext = "." + filename.split(".")[-1].lower()

    if ext in dict:
        return dict[ext]
    else:
        return "application/octet-stream"


filename = input("File name: ")
result = type(filename).strip()
print(f"{result}")
