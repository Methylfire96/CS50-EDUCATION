from cs50 import SQL

db = SQL("sqlite:///roster.db")

favorite = inpit("Favorite: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", favorite)

row = row[0]
print(row["n"])
