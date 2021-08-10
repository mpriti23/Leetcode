# Write your MySQL query statement below

select d.name as Department,e.name as Employee,e.salary
from department as d,employee as e
where d.id=e.departmentid and (e.salary,e.departmentid) IN
(select max(salary),departmentid 
from employee 
group by departmentid )