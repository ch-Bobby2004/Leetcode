# Write your MySQL query statement below

Select actor_id , director_id
FROM ActorDirector 
GROUP BY actor_id,director_id
-- Having Count(timestamp)>=3 
Having Count(*)>=3