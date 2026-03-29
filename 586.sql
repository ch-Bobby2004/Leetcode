-- A Common Table Expression (CTE) in SQL is a temporary result set that you can reference within a query. It helps make complex queries more readable and modular.


-- Key Points
-- Defined using WITH
-- Exists only during query execution
-- Can be referenced multiple times in the same query


with cte As (
Select customer_number , count(order_number) As NumOrd
From Orders 
Group by customer_number )

select customer_number
from cte
where NumOrd =(select max(NumOrd) from cte)