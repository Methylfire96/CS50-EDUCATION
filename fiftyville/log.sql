-- Keep a log of any SQL queries you execute as you solve the mystery.

--status quo: theft took place on July 28, 2021 on "Humphrey Street"

--finding the description of that data above:
    SELECT description FROM crime_scene_reports
    WHERE month = 7 AND day = 28 AND street = "Humphrey Street";
--> theft took place at 10:15am in the Humphrey Street bakery ( 3 witnesse), littering at 16:36 (no witnesses)

--search for the interviews:
    SELECT transcript FROM interviews
    WHERE year = 2021 AND month = 7 AND day = 28;
-->the 3 interviews:
    #Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away.
    If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.

    #I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery,
    I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.

    #As the thief was leaving the bakery, they called someone who talked to them for less than a minute.
    In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow.
    The thief then asked the person on the other end of the phone to purchase the flight ticket.

--search the bakery sec logs:
    SELECT license_plate FROM bakery_security_logs
    WHERE year = 2021 AND month = 7 AND day = 28 AND hour = 10;
--> there is 9 licenxe plates who left the parking lot:
    5P2BI95
    94KL13X
    6P58WS2
    4328GD8
    G412CB7
    L93JTIZ
    322W7JE
    0NTHK55
    1106N58

--search ATM withdwawal in the morning of the theft:
    SELECT * FROM atm_transactions
    WHERE year = 2021 AND month = 7 AND day = 28 AND atm_location = "Leggett Street" AND transaction_type = "withdraw";


    --------------
    SELECT 
