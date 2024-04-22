#2879. Display the First Three Rows
# https://leetcode.com/problems/display-the-first-three-rows/description/

import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    return employees.head(3)