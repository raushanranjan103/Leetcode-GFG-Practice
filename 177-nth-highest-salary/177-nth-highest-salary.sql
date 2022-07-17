CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    Select max(salary) from employee e1 where n-1=(Select count(distinct salary) from employee e2 where e2.salary>e1.salary)
      
  );
END