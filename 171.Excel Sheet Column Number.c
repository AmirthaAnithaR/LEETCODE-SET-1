int titleToNumber(char* columnTitle) {
    int result=0;
    for(int i=0;columnTitle[i]!='\0';i++){
        int charvalue=columnTitle[i]-'A'+1;
        result=result*26+charvalue;
    }
    return result;
}
