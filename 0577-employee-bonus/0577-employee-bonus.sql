# Write your MySQL query statement below
SELECT e.name, b.bonus FROM Bonus b RIGHT JOIN Employee e ON e.empID = b.empID WHERE b.bonus < 1000 OR b.bonus IS NULL;