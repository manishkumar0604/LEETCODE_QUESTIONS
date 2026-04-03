/* Write your PL/SQL query statement below */

select u.name, sum(amount) balance
from Users u
inner join Transactions t
on u.account = t.account
group by u.account, u.name
having sum(amount) > 10000