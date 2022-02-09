class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        string word;
        string answer="";
        unordered_map<int,string> order;
        stringstream wo(s);
        while(getline(wo,word,' ')){
            words.push_back(word);    
        }
        for(int i=0; i<words.size(); i++){
            int id=(words[i].back()-'0');
            words[i].pop_back();
            order[id]=words[i];
        }
        for(int i=1; i<words.size();i++){
            string temp=order[i]+" ";
            answer+=temp;  
        }
        
        return answer + order[words.size()];
    }
    
};