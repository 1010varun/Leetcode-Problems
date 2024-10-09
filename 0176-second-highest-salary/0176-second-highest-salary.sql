SELECT max(salary) AS secondhighestsalary FROM employee
WHERE salary not in (select max(salary) from employee);