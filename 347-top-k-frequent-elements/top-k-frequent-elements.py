class Solution(object):
    def topKFrequent(self, nums, k):
        # 1- calc the freqency of each item -> using dict 
        # 2- find top k:
            # sort for the dictionary based on key 
            # priorty queues 
        freq = defaultdict(int)
        for n in nums:
            freq[n] +=1
        # freq = sorted(freq.items(), key= lambda x:x[1], reverse=True) 
        # res = []
        # for i in range(k):
        #     res.append(freq[i][0])
        # return res
        priority_queue = []
        for key, value in freq.items():
            heapq.heappush(priority_queue, (-value, key))
        res = []
        for i in range(k):
            res.append(heapq.heappop(priority_queue)[1])
        return res


        