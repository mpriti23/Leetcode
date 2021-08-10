# select c.Name 
# from Customers as c
# where c.Id<>(select c.Id 
# From Customers As c , Orders as o
# where c.Id=o.Id);

SELECT A.Name as customers from Customers A
LEFT JOIN Orders B on  a.Id = B.CustomerId
WHERE b.CustomerId is NULL
