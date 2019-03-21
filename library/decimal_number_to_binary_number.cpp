string to_binString(int val)
{
    if( !val )
        return string("0");
    string str;
    while( val != 0 ) {
        if( (val & 1) == 0 )  // valを2進数で表したとき1桁目が0か否か
            str.insert(str.begin(), '0');
        else
            str.insert(str.begin(), '1');
        val >>= 1; //右ビットシフト
    }
    return str;
}
