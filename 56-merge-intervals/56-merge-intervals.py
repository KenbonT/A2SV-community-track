class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        # intervals.sort()
        # answer=[]
        # pushedAnswer=intervals[0]
        # index=0
        # for i in intervals:
        #     if(i[0]<=pushedAnswer[1]):
        #         pushedAnswer[1]=max(pushedAnswer[1],i[1])
        #     else:
        #         answer.append(pushedAnswer)
        #         pushedAnswer=i;
        # answer.append(pushedAnswer)
        # return answer;    
        intervals.sort()
        answer=[]
        pushedAnswer=intervals[0]
        index=0
        for i in range(1,len(intervals)):
            if(intervals[i][0]<=pushedAnswer[1]):
                pushedAnswer[1]=max(pushedAnswer[1],intervals[i][1])
            else:
                answer.append(pushedAnswer)
                pushedAnswer=intervals[i];
        answer.append(pushedAnswer)
        return answer; 
        
        
        