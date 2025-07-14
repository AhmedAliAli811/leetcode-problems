/* Write your T-SQL query statement below */
select x.actor_id , x.director_id
from (select actor_id , director_id , count(*) as cnt  
        from ActorDirector
        group by actor_id , director_id) x
where x.cnt>=3