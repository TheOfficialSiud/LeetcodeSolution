# Write your MySQL query statement below
select E.name as Employee
from Employee as E join Employee as M 
on E.managerId=M.Id
where E.salary >M.salary;