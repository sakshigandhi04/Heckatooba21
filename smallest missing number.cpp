#include <iostream>
using namespace std ;
  main() 
        {
        int n;
        cin>> n;
       // 0 <= n && n <= 300;
        int a[n];
        for(int i = 0; i<n; i++)
          { cin>>a[i];
          }
        const long int N = 1e6+2;
        bool check[N];
        
        for (int i = 0; i<N ; i++)
        {
            check[i]= 0;
        }
         for(int i =0; i<n; i++)
         {
             if(a[i]>0)
                 check[a[i]]= 1; 
         }
        int ans =-1;
        for(int i = 1; i<N; i++){
            if (check[i]==0)
            {ans = i;
             break;
            }
        }
        cout<<ans<<endl;
        
    }
