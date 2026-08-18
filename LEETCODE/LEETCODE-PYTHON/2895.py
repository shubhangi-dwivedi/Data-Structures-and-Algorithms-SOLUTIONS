# 2895. Minimum Processing Time
# https://leetcode.com/problems/minimum-processing-time

# Method-1 using sorting (TC- O(nlogn), SC- O(n) due to sorting)
class Solution:
    def minProcessingTime(self, processorTime: List[int], tasks: List[int]) -> int:
        n= len(processorTime)
        processorTime.sort()
        tasks.sort()

        min_processingTime= 0
        for i, j in zip(range(n), range(0, len(tasks), 4)):
            min_processingTime= max(processorTime[n-1-i]+tasks[j], processorTime[n-1-i]+tasks[j+1], processorTime[n-1-i]+tasks[j+2], processorTime[n-1-i]+tasks[j+3], min_processingTime)

        return min_processingTime
            
#clean way to write line-13
current = processorTime[n - 1 - i] + max(tasks[j:j+4])
min_processingTime = max(min_processingTime, current)


