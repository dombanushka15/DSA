 #include<bits/stdc++.h>
 #include<map> 
 using namespace std;

int main(){
    map<string , int> colourCount;

    colourCount["GREY"] = 15;
    colourCount["BLUE"] = 13;
    colourCount["GOLD"] = 11;


    // auto = automatically deduce type of it,

    for(auto it : colourCount){
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}