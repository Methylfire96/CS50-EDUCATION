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
    #
    Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away.
    If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.
    #
    I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery,
    I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.
    #
    As the thief was leaving the bakery, they called someone who talked to them for less than a minute.
    In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow.
    The thief then asked the person on the other end of the phone to purchase the flight ticket.

--search phone_calls in the time range when the thief left the bakery:
    SELECT * FROM phone_calls
    WHERE year = 2021 AND month = 7 AND day = 28 AND duration <= 60;
--> (130) 555-0289
    (499) 555-9472
    (367) 555-5533
    (609) 555-5876
    (499) 555-9472
    (286) 555-6063
    (770) 555-1861
    (031) 555-6622
    (826) 555-1652
    (338) 555-6650

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
--> 28500762, 28296815, 76054385, 49610011, 16153065, 25506511, 81061156, 26013199

--combine the informations on phone_calls, bakery_security_logs and atm_transactions:
    SELECT name FROM people, phone_calls, bakery_security_logs, atm_transactions
    WHERE people.phone_number = phone_calls.caller
    AND people.license_plate = bakery_security_logs.license_plate
    AND phone_calls.year = 2021 AND phone_calls.month = 7 AND phone_calls.day = 28 AND phone_calls.duration <=60
    AND bakery_security_logs.hour = 10;

--search for flights from fiftyville on the following day in the morning
    SELECT * FROM airports;
city fiftyville: airport_name = Fiftyville Regional Airport
    SELECT * FROM flights
    WHERE year = 2021 AND month = 7 AND day = 29 AND origin_airport_id = 8
    ORDER BY hour;
-->the first flight out of Fiftyville goes to New York City at 8:20am
   therefore, the thief has to be on that plane.

--search the right plane:
    SELECT * FROM passengers
    JOIN flights ON passengers.flight_id = flights.id
    WHERE flights.origin_airport_id = 8 AND flights.destination_airport_id = 4 AND flights.hour = 8 AND flights.minute = 20;


--from the COMBINE from aboth, find those persons passport_number and compare it with the passenger list:
    SELECT DISTINCT passport_number FROM people
    JOIN phone_calls ON people.phone_number = phone_calls.caller
    JOIN bakery_security_logs ON people.license_plate = bakery_security_logs.license_plate
    JOIN atm_transactions ON atm_transactions.person_id = people.id
    JOIN bank_accounts ON bank_accounts.person_id = people.id
    WHERE phone_calls.year = 2021
  AND phone_calls.month = 7
  AND phone_calls.day = 28
  AND phone_calls.duration <= 60
  AND bakery_security_logs.hour = 10
  AND EXISTS (
    SELECT 1
    FROM passengers
    JOIN flights ON passengers.flight_id = flights.id
    WHERE flights.origin_airport_id = 8
      AND flights.destination_airport_id = 4
      AND flights.hour = 8
      AND flights.minute = 20
      AND passengers.passport_number = people.passport_number
  );














