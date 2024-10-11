SELECT 
    (SELECT DISTINCT salary AS SecondHighestSalary 
     FROM employee e1 
     WHERE 2 = (SELECT COUNT(DISTINCT salary) 
                FROM employee e2 
                WHERE e1.salary <= e2.salary)
     LIMIT 1
    ) AS SecondHighestSalary;