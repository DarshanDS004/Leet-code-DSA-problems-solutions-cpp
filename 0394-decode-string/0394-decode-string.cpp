class Solution {
public:
    string decodeString(string s) {
       
       stack<int>num_stack;
       stack<string>str_stack;
        string currstr="";
        int curr_no=0;

        for(char c :s){
        
         if(isdigit(c)){
            curr_no=curr_no*10+(c-'0');

         }

         else if(c=='['){
            num_stack.push(curr_no);
            str_stack.push(currstr);

            currstr="";
            curr_no=0;
         }

         else if(c==']'){
       
          int repeat=num_stack.top();
          num_stack.pop();

          string prev=str_stack.top();
          str_stack.pop();

          string temp="";

          while(repeat--){
            temp+=currstr;
          }

          currstr=prev+temp;

          }

          else{

            currstr+=c;

          }
         

        }

        return currstr;


        
    }
};