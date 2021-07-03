

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    for(var i=0;i<s.length;i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
        console.log(s[i]);
    }
    
    for(var i=0;i<s.length;i++)
    {
        if(s[i]!='a' &&s[i]!='e' &&s[i]!='i' &&s[i]!='o' &&s[i]!='u' &&s[i]!='A' &&s[i]!='E' &&s[i]!='I' &&s[i]!='O' &&s[i]!='U')
        console.log(s[i]);
    }
}

