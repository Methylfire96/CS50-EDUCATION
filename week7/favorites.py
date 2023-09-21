import csv

with open("favorites.csv", "r") as file:
    reader = csv.dictReader(file)
    counts = {}
    for row in reader:
        favorite = row["languages"]
        i