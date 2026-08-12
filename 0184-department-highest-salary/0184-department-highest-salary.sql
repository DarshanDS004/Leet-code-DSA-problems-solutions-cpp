# Write your MySQL query statement below
select d.name as Department,
       e.name as Employee,
       e.salary as Salary
       From employee e
       Join department d on e.departmentId=d.id
       where salary =(select max(e1.salary)  from employee e1  where e1.departmentId=e.departmentId);