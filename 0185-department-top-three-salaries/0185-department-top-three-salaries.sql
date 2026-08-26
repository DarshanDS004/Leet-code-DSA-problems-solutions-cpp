# Write your MySQL query statement below
select d.name as Department,t.name as Employee , t.salary as Salary
From(
    select e.*,
    dense_rank() over(partition by e.departmentId
     order by e.salary desc )as rnk
     from employee e
  ) t 
  join department d on t.departmentId=d.id
  where  rnk<=3;
