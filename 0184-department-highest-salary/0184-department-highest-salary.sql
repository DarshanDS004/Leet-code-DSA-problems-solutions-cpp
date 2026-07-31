# Write your MySQL query statement below
#select d.name as Department ,e.name as Employee , e.salary as Salary
#From Department d ,Employee e
#where e.slary>(select e.salary from employee join Department d on e.departmentId=d.id  group by department having #salary>)

select d.name as Department ,e.name as Employee , e.salary as Salary
From Employee e
join Department d 
on e.departmentId=d.id
where e.salary=(select max(e1.salary) from employee e1 where e1.departmentId=e.departmentId);