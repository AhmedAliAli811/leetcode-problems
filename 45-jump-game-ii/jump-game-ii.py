class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 0
        n = len(nums)
        adj = [[] for _ in range(n)]

        vis = [False] * len(nums)
        dis = [0] * len(nums)

        for i in range(len(nums)):
            for j in range(nums[i]+1):
                if i + j <= len(nums) - 1:
                    adj[i].append(j+i)
                    adj[j+i].append(i)


        def bfs (node):
            q = deque()

            q.append(node)
            vis[node] = True
            dis[node] = 0
            while len(q) > 0:
                node = q.popleft()
                for child in adj[node]:
                    if vis[child] == False:
                        q.append(child)
                        vis[child] = True
                        dis[child] = dis[node] + 1
        bfs(0)
        return dis[len(nums) - 1 ]