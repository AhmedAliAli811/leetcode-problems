/* Write your T-SQL query statement below */
/*with Counts as (
    select * , case when people >= 100 then 1 else -1 end as 'over_100'
    from Stadium 
),
PrefixSum as (
    select * , SUM(over_100) OVER (ORDER BY id) AS Prefix  
    from Counts
),
FinalRow as (
    select Top 1 *
    from PrefixSum 
    where Prefix >=3
    order by Prefix desc
)
select s.* from Stadium s 
join FinalRow FR on FR.id - s.id >=0 and FR.id - s.id <= FR.Prefix - 1 
order by s.id */
with counts as (
    select id, visit_date, people,
           case 
               when people >= 100 then 1 
               else 0 
           end as over_100
    from stadium
),
prefixsum as (
    select id, visit_date, people, over_100,
           sum(over_100) over (order by id rows between 2 preceding and current row) as window_sum
    from counts
),
validrows as (
    select id, visit_date, people
    from prefixsum
    where window_sum = 3
)
select distinct s.*
from stadium s
join validrows v on s.id between v.id - 2 and v.id
where s.people >= 100
order by s.visit_date;
