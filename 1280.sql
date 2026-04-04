WITH cte AS (
    SELECT s.Student_id, s.Student_name, sub.Subject_name
    FROM Students s
    CROSS JOIN Subjects sub
),
cte2 AS (
    SELECT Student_id, Subject_name, COUNT(*) AS counts
    FROM Examinations
    GROUP BY Student_id, Subject_name
)
SELECT 
    cte.Student_id,
    cte.Student_name,
    cte.Subject_name,
    CASE 
        WHEN cte2.counts IS NOT NULL THEN cte2.counts
        ELSE 0
    END AS attended_exams
FROM cte
LEFT JOIN cte2
    ON cte.Student_id = cte2.Student_id 
    AND cte.Subject_name = cte2.Subject_name
ORDER BY cte.Student_id, cte.Subject_name;