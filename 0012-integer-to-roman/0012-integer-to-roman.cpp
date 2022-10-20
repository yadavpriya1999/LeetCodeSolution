class Solution {
public:
    string intToRoman(int num) {
         unordered_map<int,string> m;
        m[1]='I';
        m[4]="IV";
        m[5]='V';
        m[9]="IX";
        m[10]='X';
        m[40]="XL";
        m[50]='L';
        m[90]="XC";
        m[100]='C';
        m[400]="CD";
        m[500]='D';
        m[900]="CM";
        m[1000]='M';
        
        int arr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans;
        for(int i=0;i<13;i++)
        {
           if(arr[i]<=num) 
           {
               ans+=m[arr[i]];
               num-=arr[i];
               i--;
           }
        }
        return ans;
    }
};