# Write your MySQL query statement below
select id 
from (
    select w.id,
    w.recordDate,
    w.temperature,
    lag(w.recordDate)over(order by w.recordDate) as  prevDate,
    lag(w.temperature)over(order by w.recordDate)as prevTemp
    From weather w
  ) temp
  where datediff(recordDate, prevDate)=1
  and temperature>prevTemp;
