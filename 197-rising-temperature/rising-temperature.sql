# Write your MySQL query statement below
select W.id from 
Weather as W , Weather as V
where W.temperature>V.temperature and w.recordDate=date_add(v.recordDate,Interval 1 day);