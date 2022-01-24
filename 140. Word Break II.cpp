class Solution {
public:
    map<string, vector<string>> m;
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        if(m.find(s)!=m.end()) return m[s];
 		else if(s==""){
 			vector<string> t;
 			t.push_back("");
 			m[""] = t;
 			return t;
 		}
        else{
 			vector<string> r;
 			for(int i=0; i<wordDict.size(); i++){
 				if(s.rfind(wordDict[i], 0)==0){
                    vector<string> rs = wordBreak(s.substr(wordDict[i].length()), wordDict);
 					for(int j=0; j<rs.size(); j++){
 						r.push_back(wordDict[i]+(rs[j].length()==0?"":" ")+rs[j]);
 					}
 				}
 			}
 			m[s] = r;
 			return r;
 		}
    }
};