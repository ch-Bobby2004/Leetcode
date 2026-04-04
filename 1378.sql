
Select eu.unique_id,e.name
From Employees e
Left join  EmployeeUNI eu
on e.id = eu.id