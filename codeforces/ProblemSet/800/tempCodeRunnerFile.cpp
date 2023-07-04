string s,s2="";
    cin>>s;
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        s2[j]=s[i];
        j++;
        if(s2[0]==s[j]) break;
    }
    for(int i=0;i<s2.size();i++) cout<<s2[i];