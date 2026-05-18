# Write your MySQL query statement below
SELECT (
    SELECT DISTINCT salary 
    FROM Employee
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary ;

-- SELECT salary AS SecondHighestSalary FROM
-- (SELECT salary, DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk FROM Employee ) AS t
-- WHERE rnk=2;