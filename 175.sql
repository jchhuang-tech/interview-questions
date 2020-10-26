# Write your MySQL query statement below
SELECT
    firstname, lastname, city, state
FROM
    person
    LEFT JOIN
    address
    ON
    person.personid = address.personid
