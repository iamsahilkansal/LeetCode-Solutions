# Write your MySQL query statement below
select distinct(v.author_id) as id
from Views as v join Views as s
on v.author_id=s.viewer_id and v.article_id=s.article_id
order by id;