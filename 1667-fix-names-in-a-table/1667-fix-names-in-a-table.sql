# Write your MySQL query statement below
# UPDATE Users 
# SET name = CONCAT(UPPER(SUBSTRING(name,1,1)), LOWER(SUBSTRING(name,2)));

# SELECT * FROM Users;
SELECT user_id,
  CONCAT(
    UPPER(SUBSTRING(name, 1, 1)),
    LOWER(SUBSTRING(name FROM 2))
  ) AS name FROM Users ORDER BY user_id;