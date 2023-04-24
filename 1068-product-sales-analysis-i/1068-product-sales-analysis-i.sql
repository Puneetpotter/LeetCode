/* Write your T-SQL query statement below */
SELECT p.product_name, s.year, s.price FROM Sales as s JOIN Product as p ON p.product_id = s.product_id;