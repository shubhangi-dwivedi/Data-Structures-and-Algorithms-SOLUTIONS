SELECT city
FROM station
WHERE (
   LOWER(city) LIKE 'a%' 
   OR LOWER(city) LIKE 'e%' 
   OR LOWER(city) LIKE 'i%' 
   OR LOWER(city) LIKE 'o%' 
   OR LOWER(city) LIKE 'u%'
)
AND (
   LOWER(city) LIKE '%a' 
   OR LOWER(city) like '%e' 
   OR LOWER(city) LIKE '%i' 
   OR LOWER(city) LIKE '%o' 
   OR LOWER(city) LIKE '%u'
);