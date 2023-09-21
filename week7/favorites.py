import csv

with open("favorites.csv", "r") as file:
    reader = csv.dictReader(file)