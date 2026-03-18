select p.firstname,p.lastname,a.city,a.state
From person p 
left join address a
on p.personid = a. personid