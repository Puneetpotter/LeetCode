CREATE FUNCTION getNthHighestSalary(n INT) RETURNS INT
BEGIN
    SET n = n-1;
    RETURN (
        SELECT DISTINCT Salary FROM Employee
        ORDER BY Salary DESC
        LIMIT 1 OFFSET n
    );
END