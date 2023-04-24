# Write your MySQL query statement below
SELECT w.id FROM Weather w, Weather x WHERE w.temperature > x.temperature AND DATEDIFF(w.recordDate, x.recordDate) = 1;