
#include "ckUser.h"
 
main()
{
   string s;
   char *c;
   NodeID nid;
   s = nid.getMID();
   c = (char *)s.c_str();
   cout << "mid = " << c << endl;

#if 0 
   cout << "mid===========================\n";
   cout << "mid = " << c << endl;
   cout << "fid1 = " << nid.nid1 << endl;
   cout << "fid2 = " << nid.nid2 << endl;
   cout << "fid3 = " << nid.nid3 << endl;
   cout << "tid = " << nid.tid << endl;
   cout << "getlic ===========================\n";
   s =  nid.getLic();
   c  = (char *)s.c_str();
   cout << "lic= " << c << endl;

   map<string,string> mp;

   mp = nid.getLicInfoFromFile();
   cout << " getLic Info From File=====================\n";
    for( map<string,string>::iterator iter = mp.begin(); iter != mp.end(); iter++ ) 
    {
        cout << (*iter).first << " = " << (*iter).second <<endl;
    }
    //cout << "mp[string(LIC_KEY)]=" << mp[string(LIC_KEY)] <<endl;
    //cout << "mp[LIC_MID]=" << mp[LIC_MID] <<endl;
    cout << " isValidUser()=====================\n";
    bool b;
    b= nid.isValidUser();

    cout << "is valid = " << b << endl;

    cout << " licToFile()=====================\n";

    nid.licToFile();

#endif
}

