# Write your MySQL query statement below
SELECT e1.name as Employee
FROM Employee e
JOIN Employee e1
ON e1.managerId = e.id
WHERE e1.salary > e.salary;