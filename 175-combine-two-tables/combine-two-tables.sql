# Write your MySQL query statement below
select firstName,lastName,city, state
from Person as P left outer join Address as A
on A.personid=P.personid;