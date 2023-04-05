# Write your MySQL query statement below
SELECT u.unique_id, name FROM EmployeeUNI u RIGHT JOIN Employees e ON e.id = u.id