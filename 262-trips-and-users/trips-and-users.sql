/* Write your T-SQL query statement below */
select request_at as Day , round(1.0 * count(case when status like 'cancelled%' then 1 end) / count (*) , 2) as [Cancellation Rate]
from trips t 
join users us on t.client_id = us.users_id and us.banned  = 'No'
join users dr on t.driver_id = dr.users_id and dr.banned  = 'No'
where request_at between '2013-10-01' and '2013-10-03'
group by request_at
