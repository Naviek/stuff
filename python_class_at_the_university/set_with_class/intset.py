class IntSet(object) :

    def __init__(self) :
        """整数の空集合を生成する"""
        self.vals = []
        
    def insert(self, e) :
        """ e  を int 型とし， e を self に挿入する"""
        if not e in self.vals:
            self.vals.append(e)
        
    def member(self, e) :
        """ e を int 型とし， e が self にあれば True を，なければ False を返す"""
        return e in self.vals
    
    def remove(self, e) :
        """ e を int 型とし， e を self から削除する"""
        """ e が self になければ例外 ValueError を返す """
        try:
            self.vals.remove(e)
        except:
            raise ValueError(str(e) + 'not found')
    
    def getMembers(self) :
        """ self が含む要素を持つリストを返す """
        """ ただし要素の順序に関しては約束できない"""
        return self.vals[:]
    
    def __str__(self) :
        """ self の文字列表現を返す"""
        self.vals.sort()
        result = ''
        for e in self.vals:
            result = result + str(e) + ','
        return '{' + result[:-1] + '}'

    def union(self, other) :
        """ self と other の和集合を返す """
        res = IntSet()
        for val in self.vals:
            res.insert(val)
        for val in other.getMembers():
            res.insert(val)
        return res

    def __or__(self, other) :
        """ self と other の和集合を返す"""
        res = IntSet()
        for val in self.vals:
            res.insert(val)
        for val in other.getMembers():
            res.insert(val)
        return res

    
    ''' 課題： 関数の追加'''
    def clear(self):
        while len(self.vals) > 0:
            self.remove(self.vals[0])
    
    def insert_list(self, lst):
        for l in lst:
            self.insert(int(l))
    
    def inc(self, x):
        for i in range(len(self.vals)):
            self.vals[i] += x

    def len(self):
        cnt = 0
        for val in self.vals:
            cnt += 1
        return cnt
    ''' 課題： 演算子の追加'''
    def __and__(self, other):
        res = IntSet()
        for val in self.vals:
            if val in other.vals:
                res.insert(val)
        
        for val in other.vals:
            if val in self.vals:
                res.insert(val)
                
        return res
    
    def __sub__(self, other):
        res = IntSet()
        
        for val in self.vals:
            if val not in other.vals:
                res.insert(val)
        
        return res
    
    def __xor__(self, other):
        res = IntSet()
        for val in self.vals:
            if val not in other.vals:
                res.insert(val)
        
        for val in other.vals:
            if val not in self.vals:
                res.insert(val)
                
        return res
    
    def __le__(self, other):
        st = self - other
        return st.len() == 0
    
    def __eq__(self, other):
        return self <= other and other <= self

