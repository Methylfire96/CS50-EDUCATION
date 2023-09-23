import csv

with open("favorites.csv", "r") as file:
    reader = csv.dictReader(file)
    counts = {}
    for row in reader:
        favorite = row["languages"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1

for favorite in counts:
    print(f"{favorite}: {counts[favorite]}")



    ######################################

    dna = {}
    for str in strs:
        dna[str] = longest_match(str, dna)
    # TODO: Check database for matching profiles
    for row in reader:
        if match(str, dna, row):
            print(f"{row["name"]}")
            return
        else:
            print("no match")

def match(str, dna, row):
    for str in strs:
        if dna[str] != int(row[str]):
            return False
    return True