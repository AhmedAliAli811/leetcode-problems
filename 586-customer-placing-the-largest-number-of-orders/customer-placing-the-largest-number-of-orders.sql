/* Write your T-SQL query statement below */
select top 1 customer_number
from Orders 
group by customer_number 
Order by count(*) desc