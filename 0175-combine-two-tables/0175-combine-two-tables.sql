SELECT Person.firstname, person.lastname, address.city, address.state 
FROM Person
LEFT JOIN Address on person.personid = address.personid;