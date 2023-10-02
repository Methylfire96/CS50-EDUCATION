-- Keep a log of any SQL queries you execute as you solve the mystery.

status quo: theft took place on July 28, 2021 on "Humphrey Street"
finding the description of that data above:
    SELECT description FROM crime_scene_reports
    WHERE month = 7 AND day = 28 AND street = "Humphrey Street";

