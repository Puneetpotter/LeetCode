# Write your MySQL query statement below
SELECT user_id, name, mail 
FROM Users 
WHERE mail REGEXP '^[A-Za-z][a-zA-Z.0-9_/-]*@leetcode[.]com'