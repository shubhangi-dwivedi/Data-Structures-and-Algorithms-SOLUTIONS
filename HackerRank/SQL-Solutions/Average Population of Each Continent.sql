select COUNTRY.continent, floor(avg(CITY.population)) 
from CITY
join COUNTRY ON city.CountryCode=Country.Code
group by COUNTRY.CONTINENT;