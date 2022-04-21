string printSequence(string S)
{
    map<char,string>mp;
    mp[' ']="0";
    mp['A']="2";
    mp['B']="22";
    mp['C']="222";
    mp['D']="3";
    mp['E']="33";
    mp['F']="333";
    mp['G']="4";
    mp['H']="44";
    mp['I']="444";
    mp['J']="5";
    mp['K']="55";
    mp['L']="555";
    mp['M']="6";
    mp['N']="66";
    mp['O']="666";
    mp['P']="7";
    mp['Q']="77";
    mp['R']="777";
    mp['S']="7777";
    mp['T']="8";
    mp['U']="88";
    mp['V']="888";
    mp['W']="9";
    mp['X']="99";
    mp['Y']="999";
    mp['Z']="9999";
    string ans="";
    for(int i=0;i<S.length();i++)
        ans=ans+mp[S[i]];
    return ans;
}
