    int i;
    for(i=0;i<r;i++){
        if(c[i]==c[r]||(abs(c[i]-c[r]))==abs(i-r)){
            return 0;
        }
    }
    return 1;
}