# Write your MySQL query statement below
Select  MAX(salary) AS SecondHighestSalary
from Employee 
Where salary <(select MAX(salary) from Employee);
#select  distinct salary AS  SecondHighestSalary
#from Employee
#order by salary desc
#limit 1 offset 1;

