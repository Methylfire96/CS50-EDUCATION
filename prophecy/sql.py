from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = inpit("Favorite: ")

rows = db.execute("SELECT * FROM favorites WHERE problem = ?", favorite)

row[0]

