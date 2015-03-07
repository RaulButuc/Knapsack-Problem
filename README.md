# Knapsack problem
Providing a formal solution to the unbounded (fractional) knapsack problem using the branch and bound technique.

# Problem statement
You are given n objects O = {o1, o2, ..., on} with respective weights W = {w1, w2, ..., wn} and respective profits P = {p1, p2, ..., pn}. The goal is to pack these objects into a knapsack of capacity M, such that the profit of the objects in the knapsack is maximized, while the weight constrain is not violated. You may choose a fraction of an object, if you so decide: if ai, 0 <= ai <= 1 of an object oi is chosen, then the profit contribution of this object is ai * oi and its weight contribution is ai * wi.

# Input sample
41
12.34 123.99
23.45 600.54
12.78 90.67
9.34 45.32

# Output sample
Object 2: (23.45, 600.54) - Complete
Object 1: (12.34, 123.99) - Complete
Object 3: (12.78, 90.67) - 5.21kg
