# Write your MySQL query statement below
WITH cte AS
(SELECT NUM
From MyNumbers 
GROUP BY num 
HAVING COUNT(num) =1)


SELECT CASE WHEN COUNT(*) > 0 THEN MAX(num)
ELSE  NULL END AS num
FROM cte