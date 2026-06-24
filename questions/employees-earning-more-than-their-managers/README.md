# null

**Difficulty:** Easy

**LeetCode Link:** [employees-earning-more-than-their-managers](https://leetcode.com/problems/employees-earning-more-than-their-managers/)

---

## Problem Description

Table: Employee

+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
| salary      | int     |
| managerId   | int     |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table indicates the ID of an employee, their name, salary, and the ID of their manager.


 

Write a solution to find the employees who earn more than their managers.

Return the result table in any order.

The result format is in the following example.

 
Example 1:

Input: 
Employee table:
+----+-------+--------+-----------+
| id | name  | salary | managerId |
+----+-------+--------+-----------+
| 1  | Joe   | 70000  | 3         |
| 2  | Henry | 80000  | 4         |
| 3  | Sam   | 60000  | Null      |
| 4  | Max   | 90000  | Null      |
+----+-------+--------+-----------+
Output: 
+----------+
| Employee |
+----------+
| Joe      |
+----------+
Explanation: Joe is the only employee who earns more than his manager.

---

## Solution

See [solution.txt](./solution.txt) for the implementation.

**Language:** txt

---

*Last updated: 2026-06-24T23:42:03.026Z*
