# Write your MySQL query statement below
Select Distinct P.email as Email
from Person as p, Person as D
where P.email=D.email and P.id<>D.id;