#include<bits/stdc++.h>


using namespace std;


long convertToNumeric(string input){

    long output(0);
    const int alphaSize(26);
    for(int k = 0; k < input.size(); k++){output = alphaSize * output + (input[k] - 'A' + 1);}
    return output;
}


string convertToAlpha(long input){

    const int alphaSize(26);
    string output("");

    while(input > 0){
        char letter = 'Z';
        long inputMod = input % alphaSize;
        if(inputMod > 0){letter = 'A' + inputMod - 1;}
        else{input -= alphaSize;}
        input = input / alphaSize;
        output = letter + output;
    }

    return output;
}


int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; scanf("%d\n", &n);
    while(n--){
        string line; getline(cin, line);

        bool coordinates(0);
        if(line[0] == 'R' && ('0' <= line[1] && line[1] <= '9') && 1 < line.find('C') && line.find('C') < line.size() - 1){coordinates = 1;}

        if(coordinates){
            int cPos = line.find('C');
            string rowString = line.substr(1, cPos - 1);  
            string colString = line.substr(cPos + 1);  
            long col = atol(colString.c_str());
            cout <<  convertToAlpha(col) << rowString << endl;
        }
        else{
            
            string rowString = "";
            string colString = "";

            for(int k = 0; k < line.size(); k++){
                if('0' <= line[k] && line[k] <= '9'){colString = line.substr(k);break;}
                else{rowString += line[k];}
            }
            cout << "R" << colString << "C" <<  convertToNumeric(rowString) << endl;
        }
    }
    
    return 0;
}

