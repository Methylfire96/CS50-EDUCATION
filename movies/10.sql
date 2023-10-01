SELECT DISTINCT people.name FROM people
JOIN directors ON people.id = directors.person_id
WHERE ratings.rating = "9.0";








JOIN stars ON people.id = stars.person_id
JOIN movies ON stars.movie_id = movies.id
WHERE movies.year = "2004" AND people.birth IS NOT NULL
ORDER BY people.birth;