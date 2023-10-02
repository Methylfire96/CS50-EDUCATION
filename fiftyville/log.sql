-- Keep a log of any SQL queries you execute as you solve the mystery.

--status quo: theft took place on July 28, 2021 on "Humphrey Street"

--finding the description of that data above:
    SELECT description FROM crime_scene_reports
    WHERE month = 7 AND day = 28 AND street = "Humphrey Street";
--> theft took place at 10:15am in the Humphrey Street bakery ( 3 witnesse), littering at 16:36 (no witnesses)

--search the bakery sec logs:
    SELECT license_plate FROM bakery_security_logs
    WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10;
--> there is one licenxe plate exit 1minute after the theft (5P2BI95)