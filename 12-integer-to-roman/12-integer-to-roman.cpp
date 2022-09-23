class Solution {
public:
    
    string intToRoman(int num) {
        unordered_map<int,string> map;
        string s="IVXLCDM",res="";
        int c=1;
        vector<int> vec;
        map.insert({1,"I"});
        map.insert({5,"V"});
        map.insert({4,"IV"});
        map.insert({9,"IX"});
        map.insert({10,"X"});
        map.insert({40,"XL"});
        map.insert({50,"L"});

        map.insert({90,"XC"});
        map.insert({100,"C"});
        map.insert({400,"CD"});
        map.insert({500,"D"});
        map.insert({900,"CM"});
        map.insert({1000,"M"});

        
        vec={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int i=0;i<vec.size();i++){
            if(num==0) break;
            if(num>=vec[i]){
                int t=num/vec[i];
               
                for(int k=0;k<t;k++){
                    res+=map[vec[i]];
                }
                
                num=num%vec[i];
            }
        }
        
        return res;
    }
};