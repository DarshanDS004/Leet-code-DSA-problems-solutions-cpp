class Solution {
public:
    string reformatDate(string date) {
        int n=date.size();
        unordered_map<string,string>mp=
     {{"Jan","01"},{"Feb","02"},{"Mar","03"},{"Mar","03"},{"Apr","04"}, {"May","05"}, 
     {"Jun", "06"},{"Jul","07"},{"Aug","08"},{"Sep","09"},{"Oct","10"},{"Nov","11"},{"Dec","12"}
     };

     int i=0;
     string dat="",month="",year="";
     while(i<n &&date[i]!=' ')
     {
        dat+=date[i];
        i++;
     }
     i++;
     while(i<n && date[i]!=' '){
        month+=date[i];
        i++;
     }
     i++;

     while(i<n && date[i]!=' ')
     {
        year+=date[i];
        i++;
     }

     string d="";
       for(char c:dat)
        {
            if(isdigit(c))
            d+=c;
        }

        if(d.size()==1)
        d="0"+d;
        return year+"-"+mp[month]+"-"+d;
        }

};