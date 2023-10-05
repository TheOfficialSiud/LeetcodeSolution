# Write your MySQL query statement below
delete  p from Person as p, Person as d
where p.email=d.email and p.id > d.id;