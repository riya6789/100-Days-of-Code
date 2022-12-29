class Solution {
    public int romanToInt(String s) {
        HashMap<Character, Integer> hm= new HashMap<>();
        hm.put('I', 1);                                        //hashmap easily stores all values, else will need recursion
        hm.put('V', 5);
        hm.put('X', 10);
        hm.put('L', 50);
        hm.put('C', 100);
        hm.put('D', 500);
        hm.put('M', 1000);
        if(s.length()==0){ return 0;}
        int res=0;
        for(int i=0; i<s.length(); i++){
            if(i>0 && hm.get(s.charAt(i))> hm.get(s.charAt(i-1))){    //if IV then next char is more than previous
                res+=hm.get(s.charAt(i))-2*hm.get(s.charAt(i-1));    //so minus twice as previous character's value already added
            }
            else{res+= hm.get(s.charAt(i));}
        } return res;
    }
    
}
