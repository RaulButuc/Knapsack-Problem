# Knapsack problem
Providing a formal solution to the unbounded (fractional) knapsack problem using the branch and bound technique.

# Problem statement
You are given *n* objects *O = {o<sub>1</sub>, o<sub>2</sub>, ..., o<sub>n</sub>}* with respective weights *W = {w<sub>1</sub>, w<sub>2</sub>, ..., w<sub>n</sub>}* and respective profits *P = {p<sub>1</sub>, p<sub>2</sub>, ..., p<sub>n</sub>}*. The goal is to pack these objects into a knapsack of capacity *M*, such that the profit of the objects in the knapsack is maximized, while the weight constrain is not violated. You may choose a fraction of an object, if you so decide; if *a<sub>i</sub>*, *0 <= a<sub>i</sub> <= 1* of an object *o<sub>i</sub>* is chosen, then the profit contribution of this object is *a<sub>i</sub>* &times; *o<sub>i</sub>* and its weight contribution is *a<sub>i</sub>* &times; *w<sub>i</sub>*.

# Input/Output sample
| objects.in    | objects.out                           |
| ------------- | ------------------------------------- |
| 41            | Object 2: (23.45, 600.54) - Complete  |
| 12.34 123.99  | Object 1: (12.34, 123.99) - Complete  |
| 23.45 600.54  | Object 3: (12.78, 90.67) - 5.21kg     |
| 12.78 90.67   |                                       |
| 9.34 45.32    |                                       |
