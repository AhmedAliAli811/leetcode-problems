/* Write your T-SQL query statement below */
select pi1.category as category1    , pi2.category    as category2 , count(distinct pp1.user_id) as customer_count 
from ProductPurchases pp1 
join ProductPurchases pp2 on pp1.user_id = pp2.user_id
join ProductInfo pi1 on pp1.product_id = pi1.product_id 
join ProductInfo pi2 on pp2.product_id = pi2.product_id
where pi1.category < pi2.category
group by pi1.category , pi2.category    
having  count(distinct pp1.user_id) >= 3

order by customer_count desc , category1 , category2