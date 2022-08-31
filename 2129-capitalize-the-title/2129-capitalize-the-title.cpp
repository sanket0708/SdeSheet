class Solution {
public:
    string capitalizeTitle(string title) {

    title[0]=toupper(title[0]);

    int n=title.size();
    
    for(int i=1;i<n;i++)
    {
            
        if(title[i]==' ')                                            
            title[i+1]=toupper(title[i+1]);                          
                                                
        else if(title[i-1]!=' ')                            
        {
            title[i]=tolower(title[i]); 
        }
    }
    
   
     for(int i=0;i<n;i++)
    {
       
        if(title[i]>='A' && title[i]<='Z')  
        {                                   
                                            
            int cnt=0;                      
            for(int j=i+1;j<n;j++)          
            {
                
                if(title[j]==' ')   
                    break;
                
                else                
                    cnt++;                  
            }
            //if less than 2 then make all the letters lower
            if(cnt<2){
                title[i]=tolower(title[i]);
            }
        }
    }
    
   
    return title;
 }
};